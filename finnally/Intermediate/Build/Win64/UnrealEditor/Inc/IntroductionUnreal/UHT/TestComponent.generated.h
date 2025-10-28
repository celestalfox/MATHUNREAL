// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestComponent.h"

#ifdef INTRODUCTIONUNREAL_TestComponent_generated_h
#error "TestComponent.generated.h already included, missing '#pragma once' in TestComponent.h"
#endif
#define INTRODUCTIONUNREAL_TestComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestComponent ***********************************************************
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UTestComponent_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_TestComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestComponent(); \
	friend struct Z_Construct_UClass_UTestComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UTestComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_UTestComponent_NoRegister) \
	DECLARE_SERIALIZER(UTestComponent)


#define FID_finnally_Source_IntroductionUnreal_TestComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestComponent(UTestComponent&&) = delete; \
	UTestComponent(const UTestComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestComponent) \
	NO_API virtual ~UTestComponent();


#define FID_finnally_Source_IntroductionUnreal_TestComponent_h_8_PROLOG
#define FID_finnally_Source_IntroductionUnreal_TestComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_TestComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_TestComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestComponent;

// ********** End Class UTestComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_TestComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
