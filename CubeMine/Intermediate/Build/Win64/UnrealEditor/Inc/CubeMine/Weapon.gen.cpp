// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMine/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	CUBEMINE_API UEnum* Z_Construct_UEnum_CubeMine_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_CubeMine();
	CUBEMINE_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CUBEMINE_API UClass* Z_Construct_UClass_AWeapon();
	CUBEMINE_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
	static UEnum* EWeaponState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CubeMine_EWeaponState, Z_Construct_UPackage__Script_CubeMine(), TEXT("EWeaponState"));
		}
		return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
	}
	template<> CUBEMINE_API UEnum* StaticEnum<EWeaponState>()
	{
		return EWeaponState_StaticEnum();
	}
	struct Z_Construct_UEnum_CubeMine_EWeaponState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enumerators[] = {
		{ "EWeaponState::EWS_Pickup", (int64)EWeaponState::EWS_Pickup },
		{ "EWeaponState::EWS_Equipped", (int64)EWeaponState::EWS_Equipped },
		{ "EWeaponState::EWS_MAX", (int64)EWeaponState::EWS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWS_Equipped.DisplayNme", "Equipped" },
		{ "EWS_Equipped.Name", "EWeaponState::EWS_Equipped" },
		{ "EWS_MAX.DisplayNme", "DefaultMax" },
		{ "EWS_MAX.Name", "EWeaponState::EWS_MAX" },
		{ "EWS_Pickup.DisplayNme", "Pickup" },
		{ "EWS_Pickup.Name", "EWeaponState::EWS_Pickup" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CubeMine_EWeaponState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CubeMine,
		nullptr,
		"EWeaponState",
		"EWeaponState",
		Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CubeMine_EWeaponState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CubeMine_EWeaponState()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_CubeMine_EWeaponState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnEquipSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState = { "WeaponState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponState), Z_Construct_UEnum_CubeMine_EWeaponState, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_MetaData)) }; // 3667768341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_OnEquipSound_MetaData[] = {
		{ "Category", "Item | Sound" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OnEquipSound = { "OnEquipSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, OnEquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_OnEquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_OnEquipSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OnEquipSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> CUBEMINE_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	struct Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3667768341U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 843963426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_2601671285(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Weapon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
