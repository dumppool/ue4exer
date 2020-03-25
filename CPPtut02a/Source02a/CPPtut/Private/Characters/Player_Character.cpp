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
//#include "UI/GenericHUD.h"

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

}

void APlayer_Character::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	/*Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Assertion check
	check(PlayerInputComponent);

	// Shoot input
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayer_Character::OnFire);

	// Movement input
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Character::MoveRight);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayer_Character::OnSprintStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayer_Character::OnSprintEnd);

	// Camera input
	PlayerInputComponent->BindAxis("Turn", this, &APlayer_Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayer_Character::LookUpAtRate);*/
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
	//GunMesh->AttachToComponent(FP_Mesh,
	//	FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("GripPoint"));

	// For when the max ammo value was changed
	if (CurrentAmmo != MaxAmmo)
	{
		CurrentAmmo = MaxAmmo;
	}
}