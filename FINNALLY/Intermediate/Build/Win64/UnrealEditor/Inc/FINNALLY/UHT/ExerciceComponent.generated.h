// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExerciceComponent.h"

#ifdef FINNALLY_ExerciceComponent_generated_h
#error "ExerciceComponent.generated.h already included, missing '#pragma once' in ExerciceComponent.h"
#endif
#define FINNALLY_ExerciceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExerciceComponent *******************************************************
#define FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopOscillation); \
	DECLARE_FUNCTION(execStartOscillation);


FINNALLY_API UClass* Z_Construct_UClass_UExerciceComponent_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExerciceComponent(); \
	friend struct Z_Construct_UClass_UExerciceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_UExerciceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UExerciceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_UExerciceComponent_NoRegister) \
	DECLARE_SERIALIZER(UExerciceComponent)


#define FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExerciceComponent(UExerciceComponent&&) = delete; \
	UExerciceComponent(const UExerciceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExerciceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExerciceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExerciceComponent) \
	NO_API virtual ~UExerciceComponent();


#define FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_9_PROLOG
#define FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExerciceComponent;

// ********** End Class UExerciceComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
