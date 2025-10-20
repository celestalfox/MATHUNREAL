// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExerciceFunction.h"

#ifdef FINNALLY_ExerciceFunction_generated_h
#error "ExerciceFunction.generated.h already included, missing '#pragma once' in ExerciceFunction.h"
#endif
#define FINNALLY_ExerciceFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UExerciceFunction ********************************************************
#define FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindShortestVector); \
	DECLARE_FUNCTION(execTeleportTo); \
	DECLARE_FUNCTION(execPrintMessage);


FINNALLY_API UClass* Z_Construct_UClass_UExerciceFunction_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExerciceFunction(); \
	friend struct Z_Construct_UClass_UExerciceFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_UExerciceFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UExerciceFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_UExerciceFunction_NoRegister) \
	DECLARE_SERIALIZER(UExerciceFunction)


#define FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExerciceFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExerciceFunction(UExerciceFunction&&) = delete; \
	UExerciceFunction(const UExerciceFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExerciceFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExerciceFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExerciceFunction) \
	NO_API virtual ~UExerciceFunction();


#define FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_12_PROLOG
#define FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExerciceFunction;

// ********** End Class UExerciceFunction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
