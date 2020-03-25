// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Characters/Player_Character.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Character() {}
// Cross Module References
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_LookUpAtRate();
	CPPTUT_API UClass* Z_Construct_UClass_APlayer_Character();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_MoveForward();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_MoveRight();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_OnFire();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_OnSprintEnd();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_OnSprintStart();
	CPPTUT_API UFunction* Z_Construct_UFunction_APlayer_Character_TurnAtRate();
	CPPTUT_API UClass* Z_Construct_UClass_APlayer_Character_NoRegister();
	CPPTUT_API UClass* Z_Construct_UClass_ABase_Character();
	UPackage* Z_Construct_UPackage__Script_CPPtut();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_APlayer_Character_OnFire = FName(TEXT("OnFire"));
	void APlayer_Character::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Character_OnFire),NULL);
	}
	static FName NAME_APlayer_Character_OnSprintEnd = FName(TEXT("OnSprintEnd"));
	void APlayer_Character::OnSprintEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Character_OnSprintEnd),NULL);
	}
	static FName NAME_APlayer_Character_OnSprintStart = FName(TEXT("OnSprintStart"));
	void APlayer_Character::OnSprintStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Character_OnSprintStart),NULL);
	}
	void APlayer_Character::StaticRegisterNativesAPlayer_Character()
	{
		UClass* Class = APlayer_Character::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "LookUpAtRate", (Native)&APlayer_Character::execLookUpAtRate },
			{ "MoveForward", (Native)&APlayer_Character::execMoveForward },
			{ "MoveRight", (Native)&APlayer_Character::execMoveRight },
			{ "OnFire", (Native)&APlayer_Character::execOnFire },
			{ "OnSprintEnd", (Native)&APlayer_Character::execOnSprintEnd },
			{ "OnSprintStart", (Native)&APlayer_Character::execOnSprintStart },
			{ "TurnAtRate", (Native)&APlayer_Character::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_LookUpAtRate()
	{
		struct Player_Character_eventLookUpAtRate_Parms
		{
			float Rate;
		};
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LookUpAtRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Player_Character_eventLookUpAtRate_Parms));
			UProperty* NewProp_Rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rate, Player_Character_eventLookUpAtRate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_MoveForward()
	{
		struct Player_Character_eventMoveForward_Parms
		{
			float Scalar;
		};
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Player_Character_eventMoveForward_Parms));
			UProperty* NewProp_Scalar = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Scalar"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Scalar, Player_Character_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_MoveRight()
	{
		struct Player_Character_eventMoveRight_Parms
		{
			float Scalar;
		};
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Player_Character_eventMoveRight_Parms));
			UProperty* NewProp_Scalar = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Scalar"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Scalar, Player_Character_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_OnFire()
	{
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Gun"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_OnSprintEnd()
	{
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSprintEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_OnSprintStart()
	{
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSprintStart"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayer_Character_TurnAtRate()
	{
		struct Player_Character_eventTurnAtRate_Parms
		{
			float Rate;
		};
		UObject* Outer = Z_Construct_UClass_APlayer_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TurnAtRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Player_Character_eventTurnAtRate_Parms));
			UProperty* NewProp_Rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rate, Player_Character_eventTurnAtRate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Input|Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_Character_NoRegister()
	{
		return APlayer_Character::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayer_Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ABase_Character();
			Z_Construct_UPackage__Script_CPPtut();
			OuterClass = APlayer_Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_LookUpAtRate());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_OnFire());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_OnSprintEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_OnSprintStart());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayer_Character_TurnAtRate());

				UProperty* NewProp_DamageAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DamageAmount, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, APlayer_Character), 0x0010000000010005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_HitEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitEffect, APlayer_Character), 0x0010000000010005, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_TrailEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrailEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TrailEffect, APlayer_Character), 0x0010000000010005, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_CameraPitchMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraPitchMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CameraPitchMax, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_CameraPitchMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraPitchMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CameraPitchMin, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_SprintSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SprintSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SprintSpeed, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, APlayer_Character), 0x0010000000000005);
				UProperty* NewProp_MaxAmmo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(MaxAmmo, APlayer_Character), 0x0010000000010005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUnlimitedAmmo, APlayer_Character);
				UProperty* NewProp_bUnlimitedAmmo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUnlimitedAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUnlimitedAmmo, APlayer_Character), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUnlimitedAmmo, APlayer_Character), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCanShoot, APlayer_Character);
				UProperty* NewProp_bCanShoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCanShoot"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCanShoot, APlayer_Character), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCanShoot, APlayer_Character), sizeof(bool), true);
				UProperty* NewProp_GunMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GunMesh, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FP_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_Mesh, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_SpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArm, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_LookUpAtRate(), "LookUpAtRate"); // 576343737
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_MoveForward(), "MoveForward"); // 719107993
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_MoveRight(), "MoveRight"); // 4169056381
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_OnFire(), "OnFire"); // 261705093
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_OnSprintEnd(), "OnSprintEnd"); // 695170889
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_OnSprintStart(), "OnSprintStart"); // 2540965627
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayer_Character_TurnAtRate(), "TurnAtRate"); // 1002503325
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayer_Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Characters/Player_Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_DamageAmount, TEXT("Category"), TEXT("Character|Gun"));
				MetaData->SetValue(NewProp_DamageAmount, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_DamageAmount, TEXT("ToolTip"), TEXT("The amount of damage that the gun shoots and applies on an actor."));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Character|Gun"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_HitEffect, TEXT("Category"), TEXT("Character|Gun"));
				MetaData->SetValue(NewProp_HitEffect, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_TrailEffect, TEXT("Category"), TEXT("Character|Gun"));
				MetaData->SetValue(NewProp_TrailEffect, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_CameraPitchMax, TEXT("Category"), TEXT("Character|Camera"));
				MetaData->SetValue(NewProp_CameraPitchMax, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_CameraPitchMax, TEXT("ToolTip"), TEXT("Maximum view Pitch, in degrees."));
				MetaData->SetValue(NewProp_CameraPitchMin, TEXT("Category"), TEXT("Character|Camera"));
				MetaData->SetValue(NewProp_CameraPitchMin, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_CameraPitchMin, TEXT("ToolTip"), TEXT("Minimum view Pitch, in degrees."));
				MetaData->SetValue(NewProp_SprintSpeed, TEXT("Category"), TEXT("Character|Movement"));
				MetaData->SetValue(NewProp_SprintSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Character|Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Character|Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_MaxAmmo, TEXT("Category"), TEXT("Character|Gun|Ammo"));
				MetaData->SetValue(NewProp_MaxAmmo, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_bUnlimitedAmmo, TEXT("Category"), TEXT("Character|Gun|Ammo"));
				MetaData->SetValue(NewProp_bUnlimitedAmmo, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_bUnlimitedAmmo, TEXT("ToolTip"), TEXT("Flag for when the player can shoot unlimited amount of bullets."));
				MetaData->SetValue(NewProp_bCanShoot, TEXT("Category"), TEXT("Character|Gun"));
				MetaData->SetValue(NewProp_bCanShoot, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_bCanShoot, TEXT("ToolTip"), TEXT("Flag for when the player can shoot."));
				MetaData->SetValue(NewProp_GunMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_GunMesh, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_GunMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GunMesh, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_FP_Mesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_Mesh, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_FP_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_Mesh, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_FP_Mesh, TEXT("ToolTip"), TEXT("This would be for our arms mesh"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Character, 1606524074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Character(Z_Construct_UClass_APlayer_Character, &APlayer_Character::StaticClass, TEXT("/Script/CPPtut"), TEXT("APlayer_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
