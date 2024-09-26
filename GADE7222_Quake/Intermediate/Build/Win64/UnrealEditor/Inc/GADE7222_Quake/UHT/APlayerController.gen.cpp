// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GADE7222_Quake/APlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GADE7222_QUAKE_API UClass* Z_Construct_UClass_AYourPlayerController();
GADE7222_QUAKE_API UClass* Z_Construct_UClass_AYourPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GADE7222_Quake();
// End Cross Module References

// Begin Class AYourPlayerController
void AYourPlayerController::StaticRegisterNativesAYourPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYourPlayerController);
UClass* Z_Construct_UClass_AYourPlayerController_NoRegister()
{
	return AYourPlayerController::StaticClass();
}
struct Z_Construct_UClass_AYourPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "APlayerController.h" },
		{ "ModuleRelativePath", "APlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYourPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYourPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GADE7222_Quake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYourPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYourPlayerController_Statics::ClassParams = {
	&AYourPlayerController::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYourPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AYourPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYourPlayerController()
{
	if (!Z_Registration_Info_UClass_AYourPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYourPlayerController.OuterSingleton, Z_Construct_UClass_AYourPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYourPlayerController.OuterSingleton;
}
template<> GADE7222_QUAKE_API UClass* StaticClass<AYourPlayerController>()
{
	return AYourPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYourPlayerController);
AYourPlayerController::~AYourPlayerController() {}
// End Class AYourPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_APlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYourPlayerController, AYourPlayerController::StaticClass, TEXT("AYourPlayerController"), &Z_Registration_Info_UClass_AYourPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYourPlayerController), 3455300250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_APlayerController_h_1700811783(TEXT("/Script/GADE7222_Quake"),
	Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_APlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_APlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
