// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUBEMINE_PickUp_generated_h
#error "PickUp.generated.h already included, missing '#pragma once' in PickUp.h"
#endif
#define CUBEMINE_PickUp_generated_h

#define FID_CubeMine_Source_CubeMine_PickUp_h_15_SPARSE_DATA
#define FID_CubeMine_Source_CubeMine_PickUp_h_15_RPC_WRAPPERS
#define FID_CubeMine_Source_CubeMine_PickUp_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CubeMine_Source_CubeMine_PickUp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define FID_CubeMine_Source_CubeMine_PickUp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define FID_CubeMine_Source_CubeMine_PickUp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public:


#define FID_CubeMine_Source_CubeMine_PickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUp)


#define FID_CubeMine_Source_CubeMine_PickUp_h_12_PROLOG
#define FID_CubeMine_Source_CubeMine_PickUp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_RPC_WRAPPERS \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_INCLASS \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CubeMine_Source_CubeMine_PickUp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_INCLASS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_PickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMINE_API UClass* StaticClass<class APickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CubeMine_Source_CubeMine_PickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS