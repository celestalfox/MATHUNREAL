// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExerciceInterface.h"

#ifdef INTRODUCTIONUNREAL_ExerciceInterface_generated_h
#error "ExerciceInterface.generated.h already included, missing '#pragma once' in ExerciceInterface.h"
#endif
#define INTRODUCTIONUNREAL_ExerciceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UExerciceInterface ***************************************************
#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetLocation_Implementation() const { return FVector(ForceInit); }; \
	DECLARE_FUNCTION(execGetLocation);


#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_CALLBACK_WRAPPERS
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UExerciceInterface_NoRegister();

#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTRODUCTIONUNREAL_API UExerciceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExerciceInterface(UExerciceInterface&&) = delete; \
	UExerciceInterface(const UExerciceInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTRODUCTIONUNREAL_API, UExerciceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExerciceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExerciceInterface) \
	virtual ~UExerciceInterface() = default;


#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExerciceInterface(); \
	friend struct Z_Construct_UClass_UExerciceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UExerciceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UExerciceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IntroductionUnreal"), Z_Construct_UClass_UExerciceInterface_NoRegister) \
	DECLARE_SERIALIZER(UExerciceInterface)


#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExerciceInterface() {} \
public: \
	typedef UExerciceInterface UClassType; \
	typedef IExerciceInterface ThisClass; \
	static FVector Execute_GetLocation(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_7_PROLOG
#define FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_CALLBACK_WRAPPERS \
	FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExerciceInterface;

// ********** End Interface UExerciceInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
