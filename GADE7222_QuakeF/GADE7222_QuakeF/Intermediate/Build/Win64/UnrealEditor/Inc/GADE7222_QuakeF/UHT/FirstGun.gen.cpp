// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_QuakeF/FirstGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGun() {}

// Begin Cross Module References
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AFirstGun();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AFirstGun_NoRegister();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AGun();
UPackage* Z_Construct_UPackage__Script_GADE7222_QuakeF();
// End Cross Module References

// Begin Class AFirstGun
void AFirstGun::StaticRegisterNativesAFirstGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstGun);
UClass* Z_Construct_UClass_AFirstGun_NoRegister()
{
	return AFirstGun::StaticClass();
}
struct Z_Construct_UClass_AFirstGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FirstGun.h" },
		{ "ModuleRelativePath", "FirstGun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGun,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_QuakeF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstGun_Statics::ClassParams = {
	&AFirstGun::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstGun()
{
	if (!Z_Registration_Info_UClass_AFirstGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstGun.OuterSingleton, Z_Construct_UClass_AFirstGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstGun.OuterSingleton;
}
template<> GADE7222_QUAKEF_API UClass* StaticClass<AFirstGun>()
{
	return AFirstGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGun);
AFirstGun::~AFirstGun() {}
// End Class AFirstGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_FirstGun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstGun, AFirstGun::StaticClass, TEXT("AFirstGun"), &Z_Registration_Info_UClass_AFirstGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstGun), 3478469410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_FirstGun_h_2458806437(TEXT("/Script/GADE7222_QuakeF"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_FirstGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_FirstGun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
