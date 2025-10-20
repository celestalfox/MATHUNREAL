// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FINNALLYGameMode.h"

#ifdef FINNALLY_FINNALLYGameMode_generated_h
#error "FINNALLYGameMode.generated.h already included, missing '#pragma once' in FINNALLYGameMode.h"
#endif
#define FINNALLY_FINNALLYGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFINNALLYGameMode ********************************************************
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYGameMode_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFINNALLYGameMode(); \
	friend struct Z_Construct_UClass_AFINNALLYGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFINNALLYGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_AFINNALLYGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFINNALLYGameMode)


#define FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFINNALLYGameMode(AFINNALLYGameMode&&) = delete; \
	AFINNALLYGameMode(const AFINNALLYGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINNALLYGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINNALLYGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFINNALLYGameMode) \
	NO_API virtual ~AFINNALLYGameMode();


#define FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_12_PROLOG
#define FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFINNALLYGameMode;

// ********** End Class AFINNALLYGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
