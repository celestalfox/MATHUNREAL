// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FINNALLYCharacter.h"

#ifdef FINNALLY_FINNALLYCharacter_generated_h
#error "FINNALLYCharacter.generated.h already included, missing '#pragma once' in FINNALLYCharacter.h"
#endif
#define FINNALLY_FINNALLYCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFINNALLYCharacter *******************************************************
#define FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCharacter_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFINNALLYCharacter(); \
	friend struct Z_Construct_UClass_AFINNALLYCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFINNALLYCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_AFINNALLYCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFINNALLYCharacter)


#define FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFINNALLYCharacter(AFINNALLYCharacter&&) = delete; \
	AFINNALLYCharacter(const AFINNALLYCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINNALLYCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINNALLYCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFINNALLYCharacter) \
	NO_API virtual ~AFINNALLYCharacter();


#define FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_21_PROLOG
#define FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFINNALLYCharacter;

// ********** End Class AFINNALLYCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_FINNALLYCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
