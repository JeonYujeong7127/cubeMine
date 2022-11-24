// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/MainAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainAnimInstance() {}
// Cross Module References
	CUBEMINE_API UClass* Z_Construct_UClass_UMainAnimInstance_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_UMainAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UMainAnimInstance::StaticRegisterNativesUMainAnimInstance()
	{
		UClass* Class = UMainAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMainAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainAnimInstance);
	UClass* Z_Construct_UClass_UMainAnimInstance_NoRegister()
	{
		return UMainAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Main;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2739102853
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainAnimInstance.h" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UMainAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMainAnimInstance), &Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Main_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainAnimInstance, Main), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Main_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Main,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainAnimInstance_Statics::ClassParams = {
		&UMainAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMainAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton, Z_Construct_UClass_UMainAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<UMainAnimInstance>()
	{
		return UMainAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainAnimInstance);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainAnimInstance, UMainAnimInstance::StaticClass, TEXT("UMainAnimInstance"), &Z_Registration_Info_UClass_UMainAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainAnimInstance), 2981564208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainAnimInstance_h_2760812546(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_MainAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
