// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/Public/BTTask_Patrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Patrol() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_UBTTask_Patrol_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_UBTTask_Patrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
// End Cross Module References
	void UBTTask_Patrol::StaticRegisterNativesUBTTask_Patrol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Patrol);
	UClass* Z_Construct_UClass_UBTTask_Patrol_NoRegister()
	{
		return UBTTask_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_Patrol.h" },
		{ "ModuleRelativePath", "Public/BTTask_Patrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Patrol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Patrol_Statics::ClassParams = {
		&UBTTask_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Patrol()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Patrol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Patrol.OuterSingleton, Z_Construct_UClass_UBTTask_Patrol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Patrol.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<UBTTask_Patrol>()
	{
		return UBTTask_Patrol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Patrol);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_BTTask_Patrol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_BTTask_Patrol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Patrol, UBTTask_Patrol::StaticClass, TEXT("UBTTask_Patrol"), &Z_Registration_Info_UClass_UBTTask_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Patrol), 646609700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_BTTask_Patrol_h_3147485198(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_BTTask_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_BTTask_Patrol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
