// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Characters/Base_Character.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Character() {}
// Cross Module References
	CPPTUT_API UFunction* Z_Construct_UFunction_ABase_Character_GetCurrentHealth();
	CPPTUT_API UClass* Z_Construct_UClass_ABase_Character();
	CPPTUT_API UFunction* Z_Construct_UFunction_ABase_Character_GetMaxHealth();
	CPPTUT_API UFunction* Z_Construct_UFunction_ABase_Character_OnDeath();
	CPPTUT_API UFunction* Z_Construct_UFunction_ABase_Character_SetCurrentHealth();
	CPPTUT_API UClass* Z_Construct_UClass_ABase_Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPPtut();
// End Cross Module References
	static FName NAME_ABase_Character_OnDeath = FName(TEXT("OnDeath"));
	void ABase_Character::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABase_Character_OnDeath),NULL);
	}
	void ABase_Character::StaticRegisterNativesABase_Character()
	{
		UClass* Class = ABase_Character::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCurrentHealth", (Native)&ABase_Character::execGetCurrentHealth },
			{ "GetMaxHealth", (Native)&ABase_Character::execGetMaxHealth },
			{ "OnDeath", (Native)&ABase_Character::execOnDeath },
			{ "SetCurrentHealth", (Native)&ABase_Character::execSetCurrentHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABase_Character_GetCurrentHealth()
	{
		struct Base_Character_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABase_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Base_Character_eventGetCurrentHealth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, Base_Character_eventGetCurrentHealth_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABase_Character_GetMaxHealth()
	{
		struct Base_Character_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABase_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMaxHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Base_Character_eventGetMaxHealth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, Base_Character_eventGetMaxHealth_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABase_Character_OnDeath()
	{
		UObject* Outer = Z_Construct_UClass_ABase_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnDeath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C080C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Death"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABase_Character_SetCurrentHealth()
	{
		struct Base_Character_eventSetCurrentHealth_Parms
		{
			float NewHealth;
		};
		UObject* Outer = Z_Construct_UClass_ABase_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCurrentHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Base_Character_eventSetCurrentHealth_Parms));
			UProperty* NewProp_NewHealth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewHealth, Base_Character_eventSetCurrentHealth_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Character|Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABase_Character_NoRegister()
	{
		return ABase_Character::StaticClass();
	}
	UClass* Z_Construct_UClass_ABase_Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_CPPtut();
			OuterClass = ABase_Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABase_Character_GetCurrentHealth());
				OuterClass->LinkChild(Z_Construct_UFunction_ABase_Character_GetMaxHealth());
				OuterClass->LinkChild(Z_Construct_UFunction_ABase_Character_OnDeath());
				OuterClass->LinkChild(Z_Construct_UFunction_ABase_Character_SetCurrentHealth());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsSprinting, ABase_Character);
				UProperty* NewProp_bIsSprinting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsSprinting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsSprinting, ABase_Character), 0x0020080000020015, CPP_BOOL_PROPERTY_BITMASK(bIsSprinting, ABase_Character), sizeof(bool), true);
				UProperty* NewProp_MaxHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxHealth, ABase_Character), 0x0020080000010005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABase_Character_GetCurrentHealth(), "GetCurrentHealth"); // 252059081
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABase_Character_GetMaxHealth(), "GetMaxHealth"); // 3994780267
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABase_Character_OnDeath(), "OnDeath"); // 2716476547
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABase_Character_SetCurrentHealth(), "SetCurrentHealth"); // 513537854
				static TCppClassTypeInfo<TCppClassTypeTraits<ABase_Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Characters/Base_Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
				MetaData->SetValue(NewProp_bIsSprinting, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_bIsSprinting, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("Category"), TEXT("Character|Health"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("ModuleRelativePath"), TEXT("Public/Characters/Base_Character.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase_Character, 1583442911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Character(Z_Construct_UClass_ABase_Character, &ABase_Character::StaticClass, TEXT("/Script/CPPtut"), TEXT("ABase_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
