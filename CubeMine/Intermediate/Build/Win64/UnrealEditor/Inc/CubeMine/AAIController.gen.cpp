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
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AAAIController::StaticRegisterNativesAAAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAIController);
	UClass* Z_Construct_UClass_AAAIController_NoRegister()
	{
		return AAAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AAIController.h" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_BTAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_BTAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_BTAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAIController_Statics::NewProp_BBAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAIController_Statics::NewProp_BBAsset = { "BBAsset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAIController, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAIController_Statics::NewProp_BBAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAIController_Statics::NewProp_BBAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_BTAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAIController_Statics::NewProp_BBAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAIController_Statics::ClassParams = {
		&AAAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AAAIController, AAAIController::StaticClass, TEXT("AAAIController"), &Z_Registration_Info_UClass_AAAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAIController), 966288385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_1197296426(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS