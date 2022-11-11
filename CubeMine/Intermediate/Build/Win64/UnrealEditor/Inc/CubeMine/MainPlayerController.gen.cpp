// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/MainPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AMainPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerController);
	UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
	{
		return AMainPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDOverlayAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** Reference to the UMG asset in the editor */" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Reference to the UMG asset in the editor" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset = { "HUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlayAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** Variable to hold the widget after creating it */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Variable to hold the widget after creating it" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
		&AMainPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AMainPlayerController>()
	{
		return AMainPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerController, AMainPlayerController::StaticClass, TEXT("AMainPlayerController"), &Z_Registration_Info_UClass_AMainPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerController), 3539917271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainPlayerController_h_1666865088(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
