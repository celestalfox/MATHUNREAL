// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turret.h"

#ifdef INTRODUCTIONUNREAL_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define INTRODUCTIONUNREAL_Turret_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ATurret ******************************************************************
#define FID_finnally_Source_IntroductionUnreal_Turret_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDamage);


INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_ATurret_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_Turret_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_ATurret_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_ATurret_NoRegister) \
	DECLARE_SERIALIZER(ATurret)


#define FID_finnally_Source_IntroductionUnreal_Turret_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurret(ATurret&&) = delete; \
	ATurret(const ATurret&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_finnally_Source_IntroductionUnreal_Turret_h_8_PROLOG
#define FID_finnally_Source_IntroductionUnreal_Turret_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_Turret_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_Turret_h_11_INCLASS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_Turret_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurret;

// ********** End Class ATurret ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_Turret_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
