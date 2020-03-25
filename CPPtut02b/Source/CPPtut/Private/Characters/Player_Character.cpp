// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Animation/AnimInstance.h"
#include "UI/GenericHUD.h"

APlayer_Character::APlayer_Character()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	if (SpringArm)
	{
		SpringArm->SetupAttachment(GetCapsuleComponent());
		SpringArm->RelativeLocation = FVector(-20.0f, 0.0f, 40.0f);
		SpringArm->TargetArmLength = 0.0f;
		SpringArm->bDoCollisionTest = false;
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritRoll = true;
		SpringArm->bInheritYaw = true;
	}

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if (Camera)
	{
		Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
		Camera->FieldOfView = 90.0f;
	}

	FP_Mesh = CreateDefaultSubobject <USkeletalMeshComponent>(TEXT("FP_Mesh"));
	if (FP_Mesh)
	{
		FP_Mesh->SetupAttachment(Camera);
	}

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
	if (GunMesh)
	{
		GunMesh->SetupAttachment(Camera);
	}

	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	bCanShoot = true;
	bUnlimitedAmmo = false;
	MaxAmmo = 10;
	CurrentAmmo = MaxAmmo;
	//=========================
	BaseTurnRate = 100.0f;
	BaseLookUpRate = 100.0f;
	CameraPitchMin = -89.0f;
	CameraPitchMax = 89.0f;

	SprintSpeed = 1500.0f;
	//===============================
	TrailEffect = nullptr;
	HitEffect = nullptr;
	//===============================
	FireAnimation = nullptr;
	DamageAmount = 10.0f;

}

void APlayer_Character::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Assertion check
	check(PlayerInputComponent);

	// Shoot input
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayer_Character::OnFire);

	// Movement input
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Character::MoveRight);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Camera input
	PlayerInputComponent->BindAxis("Turn", this, &APlayer_Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayer_Character::LookUpAtRate);/**/
	//==============================================================================================
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayer_Character::OnSprintStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayer_Character::OnSprintEnd);

}
 
void APlayer_Character::OnDeath_Implementation()
{
	// Check if we dont have a valid hud, edgecase
	/*if (!HudReference)
	{
		// Get and set our HUD reference through the player controller
		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			HudReference = Cast<AGenericHUD>(PC->GetHUD());
		}
	}

	// Checks if we now have a valid hud ref
	if (HudReference)
	{
		// Show the dead menu
		HudReference->ShowSpecificMenu(HudReference->GetDeadMenuClass(), false, true);
	}*/
}

void APlayer_Character::BeginPlay()
{
	Super::BeginPlay();

	// This will attach the gun to the hand's mesh
	GunMesh->AttachToComponent(FP_Mesh,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("GripPoint"));

	// For when the max ammo value was changed
	if (CurrentAmmo != MaxAmmo)
	{
		CurrentAmmo = MaxAmmo;
	}
}

//======================================================================================
void APlayer_Character::MoveForward(float Scalar)
{
	if (Scalar != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Scalar);
	}
}

void APlayer_Character::MoveRight(float Scalar)
{
	if (Scalar != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Scalar);
	}
}

void APlayer_Character::LookUpAtRate(float Rate)
{
	// Only continue if the spring arm is valid
	if (SpringArm)
	{
		// Get the current rotation
		FRotator CameraRelativeRot = SpringArm->RelativeRotation;
		// Get the intended pitch
		const float CameraNewPitch = FMath::ClampAngle(CameraRelativeRot.Pitch + Rate * BaseLookUpRate * GetWorld()->DeltaTimeSeconds,
			CameraPitchMin, CameraPitchMax);

		// Combine the values to become the new intended pitch
		CameraRelativeRot.Pitch = CameraNewPitch;

		// Confirm/Update the spring arm rotation
		SpringArm->SetRelativeRotation(CameraRelativeRot);
	}
}

void APlayer_Character::TurnAtRate(float Rate)
{
	// Adds to the Yaw rotation of the controller at the specified rate(speed)
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->DeltaTimeSeconds);
}

//============================================================
void APlayer_Character::OnSprintStart_Implementation()
{
	// Stop us from being able to shoot and turn on the flag for sprinting
	bIsSprinting = true;
	bCanShoot = false;
	// Save what our walk speed was initially
	PreviousWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	// Update our current walk speed to the sprint speed
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void APlayer_Character::OnSprintEnd_Implementation()
{
	// Turn off the flag for sprinting
	bIsSprinting = false;
	// Revert our walk speed from sprint to regular walking speed
	GetCharacterMovement()->MaxWalkSpeed = PreviousWalkSpeed;
	// Allow us to shoot again
	bCanShoot = true;
}

void APlayer_Character::SpawnShootingParticles(FVector ParticleLocation)
{
	// Check if our trail effect pointer is valid
	if (TrailEffect)
	{
		// Spawn the particle
		UParticleSystemComponent* SpawnedParticle = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(), TrailEffect, GunMesh->GetSocketLocation(FName("Muzzle")));

		// Scale the particle up so its easily visible
		SpawnedParticle->SetWorldScale3D(FVector(5.0f));

		// Set the end of the particle beam
		SpawnedParticle->SetVectorParameter(FName("ShockBeamEnd"), ParticleLocation);
	}

	// Check if our hit effect pointer is valid
	if (HitEffect)
	{
		// Spawn the particle
		UParticleSystemComponent* SpawnedParticle = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(), HitEffect, ParticleLocation, FRotator::ZeroRotator, true);

		// Scale the particle up so its easily visible
		SpawnedParticle->SetWorldScale3D(FVector(0.25f));
	}
}

//============================================================================================
void APlayer_Character::OnFire_Implementation()
{
	// First check if we're allowed to shoot
	if (bCanShoot)
	{
		// Then check if we don't have ammo and we don't have unlimited ammo on
		if (!HasAmmo() && !bUnlimitedAmmo)
		{
			return;
		}
	}
	// If we're not allowed to shoot then don't continue
	else
	{
		return;
	}

	// Handles the actual firing and damaging of enemy actor along with spawning the correct particles
	{
		// Declare our particle's ending location to be set in the line trace
		FVector ParticleLocation = FVector::ZeroVector;

		{
			// Prepare our invisible ray's values
			FHitResult Hit;
			const FVector StartTrace = Camera->GetComponentLocation();
			const FVector EndTrace = StartTrace + (Camera->GetForwardVector() * 10000.0f);

			// Collision objects to ignore
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(GetOwner());
			QueryParams.AddIgnoredActor(this);

			// Fire an invisible ray
			GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace,
				ECollisionChannel::ECC_Visibility, QueryParams);

			// If we hit something then damage it and set our particle location
			if (Hit.bBlockingHit && Hit.GetActor())
			{
				// Set the location for the particles to end at
				ParticleLocation = Hit.ImpactPoint;

				// Create the object for a general object type
				TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(
					UDamageType::StaticClass());

				// Set out general damage type to a specific type: Point Damage
				FPointDamageEvent PointDamageEvent(DamageAmount, Hit,
					Hit.ImpactNormal, ValidDamageTypeClass);

				// Damage Actor
				Hit.GetActor()->TakeDamage(DamageAmount, PointDamageEvent, GetController(), GetOwner());
			}
			else
			{
				// Set the location for the particles to end at
				ParticleLocation = EndTrace;
			}
		}

		SpawnShootingParticles(ParticleLocation);
	}

	// Play the fire animation
	if (FireAnimation)
	{
		// Check if our skeletal mesh has a valid animation instance
		if (UAnimInstance* AnimInstance = FP_Mesh->GetAnimInstance())
		{
			// Tell the animation to play the fire animation
			AnimInstance->Montage_Play(FireAnimation);
		}
	}

	// If we don't have unlimited ammo on, then use up one bullet
	if (!bUnlimitedAmmo)
	{
		// Subtract current ammo by one and then set it to that value
		CurrentAmmo--;
	}
}

float APlayer_Character::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// Don't continue if health is already below or at zero
	if (CurrentHealth <= 0.0f)
	{
		return 0.0f;
	}

	// Does the math for damaging the player
	const float SubtractedHealth = CurrentHealth - DamageAmount;

	// Check if the subtracted health is equal or lower than zero
	if (FMath::IsNearlyZero(SubtractedHealth) || SubtractedHealth < 0.0f)
	{
		// If it is then just lock it to zero and then call our OnDeath function
		CurrentHealth = 0.0f;
		OnDeath();
	}
	else
	{
		// Otherwise set the current health to the subtracted amount
		CurrentHealth = SubtractedHealth;
	}

	// Return the damaged amount of health
	return CurrentHealth;
}