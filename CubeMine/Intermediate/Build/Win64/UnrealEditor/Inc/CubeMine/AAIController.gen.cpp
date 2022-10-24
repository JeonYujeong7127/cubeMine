// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/Public/AAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAIController() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_AAAIController_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AAAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAAIController::execOnPawnDetected)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns);
		P_NATIVE_END;
	}
	void AAAIController::StaticRegisterNativesAAAIController()
	{
		UClass* Class = AAAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AAAIController::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics
	{
		struct AAIController_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController_eventOnPawnDetected_Parms, DetectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::NewProp_DetectedPawns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAIController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::AAIController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAIController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAIController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAIController);
	UClass* Z_Construct_UClass_AAAIController_NoRegister()
	{
		return AAAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AILosesSightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AILosesSightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIFieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AIFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAAIController_OnPawnDetected, "OnPawnDetected" }, // 1051103326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AAIController.h" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_AISightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_AILosesSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_AILosesSightRadius = { "AILosesSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, AILosesSightRadius), METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_AILosesSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_AILosesSightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_AIFieldOfView_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_AIFieldOfView = { "AIFieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, AIFieldOfView), METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_AIFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_AIFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_SightConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_AISightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_AISightAge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_AILosesSightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_AIFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_SightConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAIController_Statics::ClassParams = {
		&AAAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAAIController()
	{
		if (!Z_Registration_Info_UClass_AAAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAAIController.OuterSingleton, Z_Construct_UClass_AAAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAAIController.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AAAIController>()
	{
		return AAAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAAIController);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAAIController, AAAIController::StaticClass, TEXT("AAAIController"), &Z_Registration_Info_UClass_AAAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAIController), 201473437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_1039314020(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
