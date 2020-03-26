// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/Base_Character.h"
#include "Player_Character.generated.h"

/**
 * 
 */
UCLASS()
class CPP_PACKTTUT_API APlayer_Character : public ABase_Character
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
	/** This would be for our arms mesh */
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* FP_Mesh;
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* GunMesh;

public:
	// Constructor
	APlayer_Character();
	/** Flag for when the player can shoot. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Gun")
		bool bCanShoot;
	/** Flag for when the player can shoot unlimited amount of bullets. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Gun|Ammo")
		bool bUnlimitedAmmo;
	int CurrentAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character|Gun|Ammo")
		int MaxAmmo;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void OnDeath_Implementation() override;

	virtual void BeginPlay() override;
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Camera")
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Camera")
		float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Movement")
		float SprintSpeed;

	//---------------------------------------------------------------------------
	UFUNCTION(BlueprintCallable, Category = "Character|Input|Movement")
		void MoveForward(float Scalar);

	UFUNCTION(BlueprintCallable, Category = "Character|Input|Movement")
		void MoveRight(float Scalar);

	UFUNCTION(BlueprintCallable, Category = "Character|Input|Camera")
		void LookUpAtRate(float Rate);

	UFUNCTION(BlueprintCallable, Category = "Character|Input|Camera")
		void TurnAtRate(float Rate);
	//--------------------------------------------------------------------------
	/** Minimum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Camera")
		float CameraPitchMin;

	/** Maximum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Camera")
		float CameraPitchMax;
	//===========================================================================
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Character|Input|Movement")
		void OnSprintStart();
	void OnSprintStart_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Character|Input|Movement")
		void OnSprintEnd();
	void OnSprintEnd_Implementation();


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character|Gun")
		class UParticleSystem* TrailEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character|Gun")
		class UParticleSystem* HitEffect;
	float PreviousWalkSpeed;

	void SpawnShootingParticles(FVector ParticleLocation);
	//===========================================================================
	virtual float TakeDamage(float DamageAmount,
		struct FDamageEvent const &DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Character|Input|Gun")
		void OnFire();
	virtual void OnFire_Implementation();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character|Gun")
		class UAnimMontage* FireAnimation;
	/** The amount of damage that the gun shoots and applies on an actor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Gun")
		float DamageAmount;
	bool HasAmmo() const { return (CurrentAmmo > 0); }
	 
};
