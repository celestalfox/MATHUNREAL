// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTools.h"

#ifdef INTRODUCTIONUNREAL_MyTools_generated_h
#error "MyTools.generated.h already included, missing '#pragma once' in MyTools.h"
#endif
#define INTRODUCTIONUNREAL_MyTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyTools *****************************************************************
#define FID_finnally_Source_IntroductionUnreal_MyTools_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBezierInterp); \
	DECLARE_FUNCTION(execMyLerp); \
	DECLARE_FUNCTION(execMyClamp); \
	DECLARE_FUNCTION(execMyUnclampedLerp);


INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UMyTools_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_MyTools_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyTools(); \
	friend struct Z_Construct_UClass_UMyTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UMyTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyTools, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_UMyTools_NoRegister) \
	DECLARE_SERIALIZER(UMyTools)


#define FID_finnally_Source_IntroductionUnreal_MyTools_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyTools(UMyTools&&) = delete; \
	UMyTools(const UMyTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTools) \
	NO_API virtual ~UMyTools();


#define FID_finnally_Source_IntroductionUnreal_MyTools_h_7_PROLOG
#define FID_finnally_Source_IntroductionUnreal_MyTools_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_MyTools_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_MyTools_h_11_INCLASS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_MyTools_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyTools;

// ********** End Class UMyTools *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_MyTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
