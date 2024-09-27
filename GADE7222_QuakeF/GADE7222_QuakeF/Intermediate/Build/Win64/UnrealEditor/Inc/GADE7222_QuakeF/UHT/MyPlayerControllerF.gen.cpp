// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_QuakeF/MyPlayerControllerF.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerControllerF() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AMyPlayerControllerF();
GADE7222_QUAKEF_API UClass* Z_Construct_UClass_AMyPlayerControllerF_NoRegister();
UPackage* Z_Construct_UPackage__Script_GADE7222_QuakeF();
// End Cross Module References

// Begin Class AMyPlayerControllerF
void AMyPlayerControllerF::StaticRegisterNativesAMyPlayerControllerF()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerControllerF);
UClass* Z_Construct_UClass_AMyPlayerControllerF_NoRegister()
{
	return AMyPlayerControllerF::StaticClass();
}
struct Z_Construct_UClass_AMyPlayerControllerF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerControllerF.h" },
		{ "ModuleRelativePath", "MyPlayerControllerF.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerControllerF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlayerControllerF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_QuakeF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerControllerF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerControllerF_Statics::ClassParams = {
	&AMyPlayerControllerF::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerControllerF_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerControllerF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayerControllerF()
{
	if (!Z_Registration_Info_UClass_AMyPlayerControllerF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerControllerF.OuterSingleton, Z_Construct_UClass_AMyPlayerControllerF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerControllerF.OuterSingleton;
}
template<> GADE7222_QUAKEF_API UClass* StaticClass<AMyPlayerControllerF>()
{
	return AMyPlayerControllerF::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerControllerF);
AMyPlayerControllerF::~AMyPlayerControllerF() {}
// End Class AMyPlayerControllerF

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_MyPlayerControllerF_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerControllerF, AMyPlayerControllerF::StaticClass, TEXT("AMyPlayerControllerF"), &Z_Registration_Info_UClass_AMyPlayerControllerF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerControllerF), 152435855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_MyPlayerControllerF_h_3088959396(TEXT("/Script/GADE7222_QuakeF"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_MyPlayerControllerF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_QuakeF_GADE7222_QuakeF_Source_GADE7222_QuakeF_MyPlayerControllerF_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
