// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionObject.h"

#ifdef INTRODUCTIONUNREAL_MotionObject_generated_h
#error "MotionObject.generated.h already included, missing '#pragma once' in MotionObject.h"
#endif
#define INTRODUCTIONUNREAL_MotionObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMotionObject ************************************************************
#define FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScaleTo); \
	DECLARE_FUNCTION(execRotateTo); \
	DECLARE_FUNCTION(execStartBezierInterpolation);


INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AMotionObject_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMotionObject(); \
	friend struct Z_Construct_UClass_AMotionObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AMotionObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AMotionObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_AMotionObject_NoRegister) \
	DECLARE_SERIALIZER(AMotionObject)


#define FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMotionObject(AMotionObject&&) = delete; \
	AMotionObject(const AMotionObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMotionObject) \
	NO_API virtual ~AMotionObject();


#define FID_finnally_Source_IntroductionUnreal_MotionObject_h_8_PROLOG
#define FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_INCLASS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_MotionObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMotionObject;

// ********** End Class AMotionObject **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_MotionObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
