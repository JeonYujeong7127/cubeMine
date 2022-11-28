// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUBEMINE_MainGameMode_generated_h
#error "MainGameMode.generated.h already included, missing '#pragma once' in MainGameMode.h"
#endif
#define CUBEMINE_MainGameMode_generated_h

#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_SPARSE_DATA
#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_RPC_WRAPPERS
#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameMode(); \
	friend struct Z_Construct_UClass_AMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AMainGameMode)


#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMainGameMode(); \
	friend struct Z_Construct_UClass_AMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AMainGameMode)


#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameMode(AMainGameMode&&); \
	NO_API AMainGameMode(const AMainGameMode&); \
public:


#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameMode(AMainGameMode&&); \
	NO_API AMainGameMode(const AMainGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainGameMode)


#define FID_CubeMine_Source_CubeMine_MainGameMode_h_13_PROLOG
#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_RPC_WRAPPERS \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_INCLASS \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CubeMine_Source_CubeMine_MainGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_MainGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMINE_API UClass* StaticClass<class AMainGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CubeMine_Source_CubeMine_MainGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
