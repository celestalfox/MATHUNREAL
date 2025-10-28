// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health.h"

#ifdef INTRODUCTIONUNREAL_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define INTRODUCTIONUNREAL_Health_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UHealth **************************************************************
#define FID_finnally_Source_IntroductionUnreal_Health_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TakeDamage_Implementation(int32 Amount) {}; \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_finnally_Source_IntroductionUnreal_Health_h_10_CALLBACK_WRAPPERS
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UHealth_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_Health_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTRODUCTIONUNREAL_API UHealth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealth(UHealth&&) = delete; \
	UHealth(const UHealth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTRODUCTIONUNREAL_API, UHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealth) \
	virtual ~UHealth() = default;


#define FID_finnally_Source_IntroductionUnreal_Health_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UHealth_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealth, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_UHealth_NoRegister) \
	DECLARE_SERIALIZER(UHealth)


#define FID_finnally_Source_IntroductionUnreal_Health_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_finnally_Source_IntroductionUnreal_Health_h_10_GENERATED_UINTERFACE_BODY() \
	FID_finnally_Source_IntroductionUnreal_Health_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_finnally_Source_IntroductionUnreal_Health_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHealth() {} \
public: \
	typedef UHealth UClassType; \
	typedef IHealth ThisClass; \
	static void Execute_TakeDamage(UObject* O, int32 Amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_finnally_Source_IntroductionUnreal_Health_h_7_PROLOG
#define FID_finnally_Source_IntroductionUnreal_Health_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_Health_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_Health_h_10_CALLBACK_WRAPPERS \
	FID_finnally_Source_IntroductionUnreal_Health_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealth;

// ********** End Interface UHealth ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_Health_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
