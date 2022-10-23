// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/CM_MineUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCM_MineUI() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_UCM_MineUI_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_UCM_MineUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCM_MineUI::execTestButtonCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestButtonCallback();
		P_NATIVE_END;
	}
	void UCM_MineUI::StaticRegisterNativesUCM_MineUI()
	{
		UClass* Class = UCM_MineUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestButtonCallback", &UCM_MineUI::execTestButtonCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CM_MineUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCM_MineUI, nullptr, "TestButtonCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCM_MineUI_TestButtonCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCM_MineUI_TestButtonCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCM_MineUI);
	UClass* Z_Construct_UClass_UCM_MineUI_NoRegister()
	{
		return UCM_MineUI::StaticClass();
	}
	struct Z_Construct_UClass_UCM_MineUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BT_00_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BT_00;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCM_MineUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCM_MineUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCM_MineUI_TestButtonCallback, "TestButtonCallback" }, // 2469273778
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_MineUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CM_MineUI.h" },
		{ "ModuleRelativePath", "CM_MineUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCM_MineUI_Statics::NewProp_BT_00_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CM_MineUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CM_MineUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCM_MineUI_Statics::NewProp_BT_00 = { "BT_00", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCM_MineUI, BT_00), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCM_MineUI_Statics::NewProp_BT_00_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_MineUI_Statics::NewProp_BT_00_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCM_MineUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCM_MineUI_Statics::NewProp_BT_00,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCM_MineUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCM_MineUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCM_MineUI_Statics::ClassParams = {
		&UCM_MineUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCM_MineUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCM_MineUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCM_MineUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCM_MineUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCM_MineUI()
	{
		if (!Z_Registration_Info_UClass_UCM_MineUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCM_MineUI.OuterSingleton, Z_Construct_UClass_UCM_MineUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCM_MineUI.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<UCM_MineUI>()
	{
		return UCM_MineUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCM_MineUI);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CM_MineUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CM_MineUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCM_MineUI, UCM_MineUI::StaticClass, TEXT("UCM_MineUI"), &Z_Registration_Info_UClass_UCM_MineUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCM_MineUI), 1441917699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CM_MineUI_h_424858853(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CM_MineUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CM_MineUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
