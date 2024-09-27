// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_QuakeF/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_ABullet_NoRegister();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AGun();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AGun_NoRegister();
UPackage* Z_Construct_UPackage__Script_GADE7222_QuakeF();
// End Cross Module References

// Begin Class AGun
void AGun::StaticRegisterNativesAGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGun);
UClass* Z_Construct_UClass_AGun_NoRegister()
{
	return AGun::StaticClass();
}
struct Z_Construct_UClass_AGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Properties for damage and ammo\n" },
#endif
		{ "ModuleRelativePath", "Gun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties for damage and ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_BulletClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_QuakeF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
	&AGun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGun_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGun()
{
	if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGun.OuterSingleton;
}
template<> GADE7222_QUAKEF_API UClass* StaticClass<AGun>()
{
	return AGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
AGun::~AGun() {}
// End Class AGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_Gun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 1188031649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_Gun_h_1653309670(TEXT("/Script/GADE7222_QuakeF"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_Gun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
