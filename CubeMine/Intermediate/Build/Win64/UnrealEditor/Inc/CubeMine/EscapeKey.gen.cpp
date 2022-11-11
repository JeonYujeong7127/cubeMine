// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/EscapeKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeKey() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_AEscapeKey_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AEscapeKey();
	CUBEMINE_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
// End Cross Module References
	void AEscapeKey::StaticRegisterNativesAEscapeKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscapeKey);
	UClass* Z_Construct_UClass_AEscapeKey_NoRegister()
	{
		return AEscapeKey::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeKey_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscapeKey.h" },
		{ "ModuleRelativePath", "EscapeKey.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscapeKey_Statics::ClassParams = {
		&AEscapeKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeKey()
	{
		if (!Z_Registration_Info_UClass_AEscapeKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscapeKey.OuterSingleton, Z_Construct_UClass_AEscapeKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscapeKey.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AEscapeKey>()
	{
		return AEscapeKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeKey);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_EscapeKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_EscapeKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscapeKey, AEscapeKey::StaticClass, TEXT("AEscapeKey"), &Z_Registration_Info_UClass_AEscapeKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscapeKey), 4202397487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_EscapeKey_h_1194724302(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_EscapeKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_EscapeKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
