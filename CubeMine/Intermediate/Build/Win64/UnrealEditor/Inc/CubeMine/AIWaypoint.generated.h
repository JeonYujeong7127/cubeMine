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
#ifdef CUBEMINE_AIWaypoint_generated_h
#error "AIWaypoint.generated.h already included, missing '#pragma once' in AIWaypoint.h"
#endif
#define CUBEMINE_AIWaypoint_generated_h

#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_SPARSE_DATA
#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIWaypoint(); \
	friend struct Z_Construct_UClass_AAIWaypoint_Statics; \
public: \
	DECLARE_CLASS(AAIWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AAIWaypoint)


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAIWaypoint(); \
	friend struct Z_Construct_UClass_AAIWaypoint_Statics; \
public: \
	DECLARE_CLASS(AAIWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMine"), NO_API) \
	DECLARE_SERIALIZER(AAIWaypoint)


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIWaypoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIWaypoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIWaypoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIWaypoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIWaypoint(AAIWaypoint&&); \
	NO_API AAIWaypoint(const AAIWaypoint&); \
public:


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIWaypoint(AAIWaypoint&&); \
	NO_API AAIWaypoint(const AAIWaypoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIWaypoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIWaypoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIWaypoint)


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_10_PROLOG
#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_RPC_WRAPPERS \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_INCLASS \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_SPARSE_DATA \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMINE_API UClass* StaticClass<class AAIWaypoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CubeMine_Source_CubeMine_Public_AIWaypoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
