// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_Quake/BasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GADE7222_QUAKE_API UClass* Z_Construct_UClass_ABasePlayer();
GADE7222_QUAKE_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GADE7222_Quake();
// End Cross Module References

// Begin Class ABasePlayer Function Die
struct Z_Construct_UFunction_ABasePlayer_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Death handling\n" },
#endif
		{ "ModuleRelativePath", "BasePlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Death handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayer_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABasePlayer_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayer_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayer::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class ABasePlayer Function Die

// Begin Class ABasePlayer Function PickupAmmo
struct Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics
{
	struct BasePlayer_eventPickupAmmo_Parms
	{
		int32 AmmoAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional methods (e.g. for Quake-like pickups)\n" },
#endif
		{ "ModuleRelativePath", "BasePlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional methods (e.g. for Quake-like pickups)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayer_eventPickupAmmo_Parms, AmmoAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::NewProp_AmmoAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, nullptr, "PickupAmmo", nullptr, nullptr, Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::BasePlayer_eventPickupAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::BasePlayer_eventPickupAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayer_PickupAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayer_PickupAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayer::execPickupAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AmmoAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupAmmo(Z_Param_AmmoAmount);
	P_NATIVE_END;
}
// End Class ABasePlayer Function PickupAmmo

// Begin Class ABasePlayer Function PickupArmor
struct Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics
{
	struct BasePlayer_eventPickupArmor_Parms
	{
		float ArmorAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::NewProp_ArmorAmount = { "ArmorAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayer_eventPickupArmor_Parms, ArmorAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::NewProp_ArmorAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, nullptr, "PickupArmor", nullptr, nullptr, Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::BasePlayer_eventPickupArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::BasePlayer_eventPickupArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayer_PickupArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayer_PickupArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayer::execPickupArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ArmorAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupArmor(Z_Param_ArmorAmount);
	P_NATIVE_END;
}
// End Class ABasePlayer Function PickupArmor

// Begin Class ABasePlayer Function PickupHealth
struct Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics
{
	struct BasePlayer_eventPickupHealth_Parms
	{
		float HealthAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayer_eventPickupHealth_Parms, HealthAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::NewProp_HealthAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, nullptr, "PickupHealth", nullptr, nullptr, Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::BasePlayer_eventPickupHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::BasePlayer_eventPickupHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayer_PickupHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayer_PickupHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayer::execPickupHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupHealth(Z_Param_HealthAmount);
	P_NATIVE_END;
}
// End Class ABasePlayer Function PickupHealth

// Begin Class ABasePlayer Function TakeDamage
struct Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics
{
	struct BasePlayer_eventTakeDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage handling\n" },
#endif
		{ "ModuleRelativePath", "BasePlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayer_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::BasePlayer_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::BasePlayer_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayer_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayer_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayer::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ABasePlayer Function TakeDamage

// Begin Class ABasePlayer
void ABasePlayer::StaticRegisterNativesABasePlayer()
{
	UClass* Class = ABasePlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Die", &ABasePlayer::execDie },
		{ "PickupAmmo", &ABasePlayer::execPickupAmmo },
		{ "PickupArmor", &ABasePlayer::execPickupArmor },
		{ "PickupHealth", &ABasePlayer::execPickupHealth },
		{ "TakeDamage", &ABasePlayer::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlayer);
UClass* Z_Construct_UClass_ABasePlayer_NoRegister()
{
	return ABasePlayer::StaticClass();
}
struct Z_Construct_UClass_ABasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePlayer.h" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health and Stats\n" },
#endif
		{ "ModuleRelativePath", "BasePlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health and Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCount_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayer_Die, "Die" }, // 1457505085
		{ &Z_Construct_UFunction_ABasePlayer_PickupAmmo, "PickupAmmo" }, // 4285312012
		{ &Z_Construct_UFunction_ABasePlayer_PickupArmor, "PickupArmor" }, // 676764209
		{ &Z_Construct_UFunction_ABasePlayer_PickupHealth, "PickupHealth" }, // 2089238031
		{ &Z_Construct_UFunction_ABasePlayer_TakeDamage, "TakeDamage" }, // 3448266624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayer, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayer, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayer, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp_AmmoCount = { "AmmoCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayer, AmmoCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoCount_MetaData), NewProp_AmmoCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp_AmmoCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_Quake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayer_Statics::ClassParams = {
	&ABasePlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayer()
{
	if (!Z_Registration_Info_UClass_ABasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayer.OuterSingleton, Z_Construct_UClass_ABasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayer.OuterSingleton;
}
template<> GADE7222_QUAKE_API UClass* StaticClass<ABasePlayer>()
{
	return ABasePlayer::StaticClass();
}
ABasePlayer::ABasePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayer);
ABasePlayer::~ABasePlayer() {}
// End Class ABasePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayer, ABasePlayer::StaticClass, TEXT("ABasePlayer"), &Z_Registration_Info_UClass_ABasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayer), 2973655065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_2977600531(TEXT("/Script/GADE7222_Quake"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
