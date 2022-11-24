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
	DEFINE_FUNCTION(AAAI_Character::execDieAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DieAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAAI_Character::execAI_DecrementHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AI_DecrementHealth(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAAI_Character::execCheckAttackDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAttackDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAAI_Character::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	void AAAI_Character::StaticRegisterNativesAAAI_Character()
	{
		UClass* Class = AAAI_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AI_DecrementHealth", &AAAI_Character::execAI_DecrementHealth },
			{ "Attack", &AAAI_Character::execAttack },
			{ "CheckAttackDamage", &AAAI_Character::execCheckAttackDamage },
			{ "DieAI", &AAAI_Character::execDieAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics
	{
		struct AAI_Character_eventAI_DecrementHealth_Parms
		{
			float Amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Character_eventAI_DecrementHealth_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "AI_DecrementHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::AAI_Character_eventAI_DecrementHealth_Parms), Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAAI_Character_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "CheckAttackDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_CheckAttackDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_CheckAttackDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAAI_Character_DieAI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAAI_Character_DieAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAAI_Character_DieAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAAI_Character, nullptr, "DieAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAAI_Character_DieAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAAI_Character_DieAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAAI_Character_DieAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAAI_Character_DieAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAI_Character);
	UClass* Z_Construct_UClass_AAAI_Character_NoRegister()
	{
		return AAAI_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAAI_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWaiting_MetaData[];
#endif
		static void NewProp_IsWaiting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWaiting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInside_MetaData[];
#endif
		static void NewProp_IsInside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AIHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAI_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAAI_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAAI_Character_AI_DecrementHealth, "AI_DecrementHealth" }, // 205023589
		{ &Z_Construct_UFunction_AAAI_Character_Attack, "Attack" }, // 281749076
		{ &Z_Construct_UFunction_AAAI_Character_CheckAttackDamage, "CheckAttackDamage" }, // 3144561377
		{ &Z_Construct_UFunction_AAAI_Character_DieAI, "DieAI" }, // 30735528
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	void Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting_SetBit(void* Obj)
	{
		((AAAI_Character*)Obj)->IsWaiting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting = { "IsWaiting", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAAI_Character), &Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside_MetaData[] = {
		{ "Category", "AAI_Character" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	void Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside_SetBit(void* Obj)
	{
		((AAAI_Character*)Obj)->IsInside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside = { "IsInside", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAAI_Character), &Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	void Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AAAI_Character*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAAI_Character), &Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, AttackRadius), METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AAI_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIHealth = { "AIHealth", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAAI_Character, AIHealth), METADATA_PARAMS(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAI_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_TreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsWaiting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AttackRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAI_Character_Statics::NewProp_AIHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAI_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAI_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAI_Character_Statics::ClassParams = {
		&AAAI_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAAI_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AAAI_Character, AAAI_Character::StaticClass, TEXT("AAAI_Character"), &Z_Registration_Info_UClass_AAAI_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAI_Character), 3071887833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_1769785121(TEXT("/Script/CubeMine"),
		Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CubeMine_Source_CubeMine_Public_AAI_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
