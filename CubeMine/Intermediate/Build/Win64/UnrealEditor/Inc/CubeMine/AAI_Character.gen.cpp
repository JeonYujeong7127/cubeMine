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
	CUBEMINE_API UClass* Z_Construct_UClass_AAAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAAI_Character::StaticRegisterNativesAAAI_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAI_Character);
	UClass* Z_Construct_UClass_AAAI_Character_NoRegister()
	{
		return AAAI_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAAI_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttack_MetaData[];
#endif
		static void NewProp_IsAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAI_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AAI_Character.h" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, AIController), Z_Construct_UClass_AAAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	void Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack_SetBit(void* Obj)
	{
		((AAAI_Character*)Obj)->IsAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack = { "IsAttack", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAAI_Character), &Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAI_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAI_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAI_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAI_Character_Statics::ClassParams = {
		&AAAI_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAAI_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AAAI_Character, AAAI_Character::StaticClass, TEXT("AAAI_Character"), &Z_Registration_Info_UClass_AAAI_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAI_Character), 3386020892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_3684395333(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
