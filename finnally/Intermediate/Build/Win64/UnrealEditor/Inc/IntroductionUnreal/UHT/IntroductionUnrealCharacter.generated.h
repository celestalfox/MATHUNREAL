// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroductionUnrealCharacter.h"

#ifdef INTRODUCTIONUNREAL_IntroductionUnrealCharacter_generated_h
#error "IntroductionUnrealCharacter.generated.h already included, missing '#pragma once' in IntroductionUnrealCharacter.h"
#endif
#define INTRODUCTIONUNREAL_IntroductionUnrealCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroductionUnrealCharacter *********************************************
#define FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealCharacter_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroductionUnrealCharacter(); \
	friend struct Z_Construct_UClass_AIntroductionUnrealCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroductionUnrealCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_AIntroductionUnrealCharacter_NoRegister) \
	DECLARE_SERIALIZER(AIntroductionUnrealCharacter)


#define FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroductionUnrealCharacter(AIntroductionUnrealCharacter&&) = delete; \
	AIntroductionUnrealCharacter(const AIntroductionUnrealCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroductionUnrealCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroductionUnrealCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroductionUnrealCharacter) \
	NO_API virtual ~AIntroductionUnrealCharacter();


#define FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_21_PROLOG
#define FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroductionUnrealCharacter;

// ********** End Class AIntroductionUnrealCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
