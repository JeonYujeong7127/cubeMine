// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef CUBEMINE_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define CUBEMINE_MainCharacter_generated_h

#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_SPARSE_DATA
#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execKeySpawn); \
	DECLARE_FUNCTION(execMineSpawn); \
	DECLARE_FUNCTION(execItemSpawn);


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execKeySpawn); \
	DECLARE_FUNCTION(execMineSpawn); \
	DECLARE_FUNCTION(execItemSpawn);


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_31_PROLOG
#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_RPC_WRAPPERS \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_INCLASS \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CubeMine_Source_CubeMine_MainCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_MainCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMINE_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CubeMine_Source_CubeMine_MainCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Normal) \
	op(EMovementStatus::EMS_Sprinting) \
	op(EMovementStatus::EMS_Attack) 

enum class EMovementStatus : uint8;
template<> CUBEMINE_API UEnum* StaticEnum<EMovementStatus>();

#define FOREACH_ENUM_ESTAMINASTATUS(op) \
	op(EStaminaStatus::ESS_Normal) \
	op(EStaminaStatus::ESS_BelowMinimum) \
	op(EStaminaStatus::ESS_Exhausted) \
	op(EStaminaStatus::ESS_ExhaustedRecovering) 

enum class EStaminaStatus : uint8;
template<> CUBEMINE_API UEnum* StaticEnum<EStaminaStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
