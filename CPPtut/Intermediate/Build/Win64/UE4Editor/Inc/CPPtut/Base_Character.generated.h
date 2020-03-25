// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPTUT_Base_Character_generated_h
#error "Base_Character.generated.h already included, missing '#pragma once' in Base_Character.h"
#endif
#define CPPTUT_Base_Character_generated_h

#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_RPC_WRAPPERS \
	virtual void OnDeath_Implementation(); \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentHealth(Z_Param_NewHealth); \
		P_NATIVE_END; \
	}


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentHealth(Z_Param_NewHealth); \
		P_NATIVE_END; \
	}


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_EVENT_PARMS
#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_CALLBACK_WRAPPERS
#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Character(); \
	friend CPPTUT_API class UClass* Z_Construct_UClass_ABase_Character(); \
public: \
	DECLARE_CLASS(ABase_Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CPPtut"), NO_API) \
	DECLARE_SERIALIZER(ABase_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABase_Character(); \
	friend CPPTUT_API class UClass* Z_Construct_UClass_ABase_Character(); \
public: \
	DECLARE_CLASS(ABase_Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CPPtut"), NO_API) \
	DECLARE_SERIALIZER(ABase_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Character(ABase_Character&&); \
	NO_API ABase_Character(const ABase_Character&); \
public:


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Character(ABase_Character&&); \
	NO_API ABase_Character(const ABase_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Character)


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ABase_Character, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__bIsSprinting() { return STRUCT_OFFSET(ABase_Character, bIsSprinting); }


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_9_PROLOG \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_EVENT_PARMS


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_RPC_WRAPPERS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_CALLBACK_WRAPPERS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_INCLASS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_CALLBACK_WRAPPERS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_INCLASS_NO_PURE_DECLS \
	CPPtut_Source_CPPtut_Public_Characters_Base_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPtut_Source_CPPtut_Public_Characters_Base_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
