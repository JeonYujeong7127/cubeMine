// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CUBEMINE_AAI_Character_generated_h
#error "AAI_Character.generated.h already included, missing '#pragma once' in AAI_Character.h"
#endif
#define CUBEMINE_AAI_Character_generated_h

#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_SPARSE_DATA
#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerExit); \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerExit); \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAAI_Character(); \
	friend struct Z_Construct_UClass_AAAI_Character_Statics; \
public: \
	DECLARE_CLASS(AAAI_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AAAI_Character)


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAAI_Character(); \
	friend struct Z_Construct_UClass_AAAI_Character_Statics; \
public: \
	DECLARE_CLASS(AAAI_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AAAI_Character)


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAAI_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAAI_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAAI_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAAI_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAAI_Character(AAAI_Character&&); \
	NO_API AAAI_Character(const AAAI_Character&); \
public:


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAAI_Character(AAAI_Character&&); \
	NO_API AAAI_Character(const AAAI_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAAI_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAAI_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAAI_Character)


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_11_PROLOG
#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_RPC_WRAPPERS \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_INCLASS \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_INCLASS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMINE_API UClass* StaticClass<class AAAI_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CubeMine_Source_CubeMine_Public_AAI_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
