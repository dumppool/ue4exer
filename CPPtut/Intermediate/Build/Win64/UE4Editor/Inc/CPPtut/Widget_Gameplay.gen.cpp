// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/Widget_Gameplay.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Gameplay() {}
// Cross Module References
	CPPTUT_API UClass* Z_Construct_UClass_UWidget_Gameplay_NoRegister();
	CPPTUT_API UClass* Z_Construct_UClass_UWidget_Gameplay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CPPtut();
// End Cross Module References
	void UWidget_Gameplay::StaticRegisterNativesUWidget_Gameplay()
	{
	}
	UClass* Z_Construct_UClass_UWidget_Gameplay_NoRegister()
	{
		return UWidget_Gameplay::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidget_Gameplay()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UUserWidget();
			Z_Construct_UPackage__Script_CPPtut();
			OuterClass = UWidget_Gameplay::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UWidget_Gameplay> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UI/Widget_Gameplay.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/Widget_Gameplay.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_Gameplay, 2623977733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_Gameplay(Z_Construct_UClass_UWidget_Gameplay, &UWidget_Gameplay::StaticClass, TEXT("/Script/CPPtut"), TEXT("UWidget_Gameplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Gameplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
