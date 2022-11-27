// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/CubeMineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeMineGameMode() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_ACubeMineGameMode_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_ACubeMineGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
// End Cross Module References
	void ACubeMineGameMode::StaticRegisterNativesACubeMineGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACubeMineGameMode);
	UClass* Z_Construct_UClass_ACubeMineGameMode_NoRegister()
	{
		return ACubeMineGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACubeMineGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeMineGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeMineGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CubeMineGameMode.h" },
		{ "ModuleRelativePath", "CubeMineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeMineGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeMineGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubeMineGameMode_Statics::ClassParams = {
		&ACubeMineGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACubeMineGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeMineGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeMineGameMode()
	{
		if (!Z_Registration_Info_UClass_ACubeMineGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubeMineGameMode.OuterSingleton, Z_Construct_UClass_ACubeMineGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACubeMineGameMode.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<ACubeMineGameMode>()
	{
		return ACubeMineGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeMineGameMode);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CubeMineGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CubeMineGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubeMineGameMode, ACubeMineGameMode::StaticClass, TEXT("ACubeMineGameMode"), &Z_Registration_Info_UClass_ACubeMineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeMineGameMode), 3197737938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CubeMineGameMode_h_4070567449(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CubeMineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_CubeMineGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
