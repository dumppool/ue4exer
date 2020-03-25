// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPTUT_Player_Character_generated_h
#error "Player_Character.generated.h already included, missing '#pragma once' in Player_Character.h"
#endif
#define CPPTUT_Player_Character_generated_h

#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookUpAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Scalar); \
		P_NATIVE_END; \
	}


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookUpAtRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Scalar); \
		P_NATIVE_END; \
	}


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Character(); \
	friend CPPTUT_API class UClass* Z_Construct_UClass_APlayer_Character(); \
public: \
	DECLARE_CLASS(APlayer_Character, ABase_Character, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CPPtut"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Character(); \
	friend CPPTUT_API class UClass* Z_Construct_UClass_APlayer_Character(); \
public: \
	DECLARE_CLASS(APlayer_Character, ABase_Character, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CPPtut"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Character(APlayer_Character&&); \
	NO_API APlayer_Character(const APlayer_Character&); \
public:


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Character(APlayer_Character&&); \
	NO_API APlayer_Character(const APlayer_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Character)


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayer_Character, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayer_Character, Camera); } \
	FORCEINLINE static uint32 __PPO__FP_Mesh() { return STRUCT_OFFSET(APlayer_Character, FP_Mesh); } \
	FORCEINLINE static uint32 __PPO__GunMesh() { return STRUCT_OFFSET(APlayer_Character, GunMesh); }


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_12_PROLOG
#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_PRIVATE_PROPERTY_OFFSET \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_RPC_WRAPPERS \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_INCLASS \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_PRIVATE_PROPERTY_OFFSET \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_INCLASS_NO_PURE_DECLS \
	CPPtut_Source_CPPtut_Public_Characters_Player_Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPtut_Source_CPPtut_Public_Characters_Player_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
