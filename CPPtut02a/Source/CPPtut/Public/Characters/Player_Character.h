// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/Base_Character.h"
#include "Player_Character.generated.h"

/**
 * 
 */
UCLASS()
class CPPTUT_API APlayer_Character : public ABase_Character
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

};
