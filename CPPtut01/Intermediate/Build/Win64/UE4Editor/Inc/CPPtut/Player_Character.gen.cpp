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
	CPPTUT_API UClass* Z_Construct_UClass_APlayer_Character_NoRegister();
	CPPTUT_API UClass* Z_Construct_UClass_APlayer_Character();
	CPPTUT_API UClass* Z_Construct_UClass_ABase_Character();
	UPackage* Z_Construct_UPackage__Script_CPPtut();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void APlayer_Character::StaticRegisterNativesAPlayer_Character()
	{
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


				UProperty* NewProp_MaxAmmo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(MaxAmmo, APlayer_Character), 0x0010000000010005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUnlimitedAmmo, APlayer_Character);
				UProperty* NewProp_bUnlimitedAmmo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUnlimitedAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUnlimitedAmmo, APlayer_Character), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUnlimitedAmmo, APlayer_Character), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCanShoot, APlayer_Character);
				UProperty* NewProp_bCanShoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCanShoot"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCanShoot, APlayer_Character), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCanShoot, APlayer_Character), sizeof(bool), true);
				UProperty* NewProp_GunMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GunMesh, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FP_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_Mesh, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_SpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArm, APlayer_Character), 0x00400000000b001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayer_Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Characters/Player_Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Player_Character.h"));
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
	IMPLEMENT_CLASS(APlayer_Character, 1530292253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Character(Z_Construct_UClass_APlayer_Character, &APlayer_Character::StaticClass, TEXT("/Script/CPPtut"), TEXT("APlayer_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
