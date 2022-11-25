// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/MyFirstActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstActor() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_AMyFirstActor_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AMyFirstActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyFirstActor::execMobSpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MobSpawn(Z_Param_Location,Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyFirstActor::execKeySpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeySpawn(Z_Param_Location,Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyFirstActor::execMineSpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MineSpawn(Z_Param_Location,Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyFirstActor::execItemSpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemSpawn(Z_Param_Location,Z_Param_world);
		P_NATIVE_END;
	}
	void AMyFirstActor::StaticRegisterNativesAMyFirstActor()
	{
		UClass* Class = AMyFirstActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemSpawn", &AMyFirstActor::execItemSpawn },
			{ "KeySpawn", &AMyFirstActor::execKeySpawn },
			{ "MineSpawn", &AMyFirstActor::execMineSpawn },
			{ "MobSpawn", &AMyFirstActor::execMobSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics
	{
		struct MyFirstActor_eventItemSpawn_Parms
		{
			FVector Location;
			UWorld* world;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventItemSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventItemSpawn_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFirstActor, nullptr, "ItemSpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::MyFirstActor_eventItemSpawn_Parms), Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyFirstActor_ItemSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFirstActor_ItemSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics
	{
		struct MyFirstActor_eventKeySpawn_Parms
		{
			FVector Location;
			UWorld* world;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventKeySpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventKeySpawn_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFirstActor, nullptr, "KeySpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::MyFirstActor_eventKeySpawn_Parms), Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyFirstActor_KeySpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFirstActor_KeySpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics
	{
		struct MyFirstActor_eventMineSpawn_Parms
		{
			FVector Location;
			UWorld* world;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventMineSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventMineSpawn_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFirstActor, nullptr, "MineSpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::MyFirstActor_eventMineSpawn_Parms), Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyFirstActor_MineSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFirstActor_MineSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics
	{
		struct MyFirstActor_eventMobSpawn_Parms
		{
			FVector Location;
			UWorld* world;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventMobSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFirstActor_eventMobSpawn_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFirstActor, nullptr, "MobSpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::MyFirstActor_eventMobSpawn_Parms), Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyFirstActor_MobSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFirstActor_MobSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyFirstActor);
	UClass* Z_Construct_UClass_AMyFirstActor_NoRegister()
	{
		return AMyFirstActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ISpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_KSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MoSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyFirstActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyFirstActor_ItemSpawn, "ItemSpawn" }, // 912744311
		{ &Z_Construct_UFunction_AMyFirstActor_KeySpawn, "KeySpawn" }, // 4267662001
		{ &Z_Construct_UFunction_AMyFirstActor_MineSpawn, "MineSpawn" }, // 2473584984
		{ &Z_Construct_UFunction_AMyFirstActor_MobSpawn, "MobSpawn" }, // 3684344511
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFirstActor.h" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFirstActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ISpawn_MetaData[] = {
		{ "Category", "MyFirstActor" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ISpawn = { "ISpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFirstActor, ISpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ISpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ISpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MSpawn_MetaData[] = {
		{ "Category", "MyFirstActor" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MSpawn = { "MSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFirstActor, MSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_KSpawn_MetaData[] = {
		{ "Category", "MyFirstActor" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_KSpawn = { "KSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFirstActor, KSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_KSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_KSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MoSpawn_MetaData[] = {
		{ "Category", "MyFirstActor" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MoSpawn = { "MoSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFirstActor, MoSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MoSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyFirstActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ISpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_KSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_MoSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstActor_Statics::ClassParams = {
		&AMyFirstActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyFirstActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFirstActor()
	{
		if (!Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton, Z_Construct_UClass_AMyFirstActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AMyFirstActor>()
	{
		return AMyFirstActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstActor);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MyFirstActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MyFirstActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyFirstActor, AMyFirstActor::StaticClass, TEXT("AMyFirstActor"), &Z_Registration_Info_UClass_AMyFirstActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyFirstActor), 2251859138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MyFirstActor_h_3989716491(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MyFirstActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MyFirstActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
