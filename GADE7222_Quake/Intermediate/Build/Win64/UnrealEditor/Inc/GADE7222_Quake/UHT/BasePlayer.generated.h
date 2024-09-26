// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GADE7222_QUAKE_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define GADE7222_QUAKE_BasePlayer_generated_h

#define FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickupArmor); \
	DECLARE_FUNCTION(execPickupHealth); \
	DECLARE_FUNCTION(execPickupAmmo); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execDie);


#define FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GADE7222_Quake"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlayer(ABasePlayer&&); \
	ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	NO_API virtual ~ABasePlayer();


#define FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_7_PROLOG
#define FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GADE7222_QUAKE_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ASUS_Documents_GitHub_GADE7222_GADE7222_Quake_Source_GADE7222_Quake_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
