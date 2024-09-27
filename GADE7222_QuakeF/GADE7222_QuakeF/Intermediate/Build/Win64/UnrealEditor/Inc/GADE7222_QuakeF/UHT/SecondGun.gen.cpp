// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_QuakeF/SecondGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondGun() {}

// Begin Cross Module References
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AGun();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_ASecondGun();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_ASecondGun_NoRegister();
UPackage* Z_Construct_UPackage__Script_GADE7222_QuakeF();
// End Cross Module References

// Begin Class ASecondGun
void ASecondGun::StaticRegisterNativesASecondGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondGun);
UClass* Z_Construct_UClass_ASecondGun_NoRegister()
{
	return ASecondGun::StaticClass();
}
struct Z_Construct_UClass_ASecondGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SecondGun.h" },
		{ "ModuleRelativePath", "SecondGun.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASecondGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGun,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_QuakeF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondGun_Statics::ClassParams = {
	&ASecondGun::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondGun_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondGun()
{
	if (!Z_Registration_Info_UClass_ASecondGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondGun.OuterSingleton, Z_Construct_UClass_ASecondGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondGun.OuterSingleton;
}
template<> GADE7222_QUAKEF_API UClass* StaticClass<ASecondGun>()
{
	return ASecondGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondGun);
ASecondGun::~ASecondGun() {}
// End Class ASecondGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_SecondGun_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondGun, ASecondGun::StaticClass, TEXT("ASecondGun"), &Z_Registration_Info_UClass_ASecondGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondGun), 1342295686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_SecondGun_h_375179115(TEXT("/Script/GADE7222_QuakeF"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_SecondGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_SecondGun_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
