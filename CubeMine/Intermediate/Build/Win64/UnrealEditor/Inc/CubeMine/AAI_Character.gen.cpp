// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/Public/AAI_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAI_Character() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_AAAI_Character_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AAAI_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	CUBEMINE_API UClass* Z_Construct_UClass_AAIWaypoint_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AAAIController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAAI_Character::execOnPlayerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OhterComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerExit(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OhterComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAAI_Character::execOnPlayerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OhterComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnter(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OhterComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAAI_Character::StaticRegisterNativesAAAI_Character()
	{
		UClass* Class = AAAI_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnter", &AAAI_Character::execOnPlayerEnter },
			{ "OnPlayerExit", &AAAI_Character::execOnPlayerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics
	{
		struct AAI_Character_eventOnPlayerEnter_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OhterComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OhterComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OhterComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerEnter_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OverlapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OverlapComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OhterComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OhterComponent = { "OhterComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerEnter_Parms, OhterComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OhterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OhterComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AAI_Character_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI_Character_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OhterComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "OnPlayerEnter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::AAI_Character_eventOnPlayerEnter_Parms), Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_OnPlayerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_OnPlayerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics
	{
		struct AAI_Character_eventOnPlayerExit_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OhterComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OhterComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OhterComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerExit_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OverlapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OverlapComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OhterComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OhterComponent = { "OhterComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerExit_Parms, OhterComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OhterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OhterComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OhterComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "OnPlayerExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::AAI_Character_eventOnPlayerExit_Parms), Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_OnPlayerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_OnPlayerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAI_Character);
	UClass* Z_Construct_UClass_AAAI_Character_NoRegister()
	{
		return AAAI_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAAI_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAI_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAAI_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAAI_Character_OnPlayerEnter, "OnPlayerEnter" }, // 1125215778
		{ &Z_Construct_UFunction_AAAI_Character_OnPlayerExit, "OnPlayerExit" }, // 1374268340
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AAI_Character.h" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, NextWaypoint), Z_Construct_UClass_AAIWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_NextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_NextWaypoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, AIController), Z_Construct_UClass_AAAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAI_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_NextWaypoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAI_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAI_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAI_Character_Statics::ClassParams = {
		&AAAI_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAAI_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAAI_Character()
	{
		if (!Z_Registration_Info_UClass_AAAI_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAAI_Character.OuterSingleton, Z_Construct_UClass_AAAI_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAAI_Character.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AAAI_Character>()
	{
		return AAAI_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAAI_Character);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAAI_Character, AAAI_Character::StaticClass, TEXT("AAAI_Character"), &Z_Registration_Info_UClass_AAAI_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAI_Character), 1494765618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_2802227749(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
