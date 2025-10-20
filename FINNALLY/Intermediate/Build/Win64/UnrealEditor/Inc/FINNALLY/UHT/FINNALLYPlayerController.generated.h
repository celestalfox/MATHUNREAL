// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FINNALLYPlayerController.h"

#ifdef FINNALLY_FINNALLYPlayerController_generated_h
#error "FINNALLYPlayerController.generated.h already included, missing '#pragma once' in FINNALLYPlayerController.h"
#endif
#define FINNALLY_FINNALLYPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFINNALLYPlayerController ************************************************
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYPlayerController_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFINNALLYPlayerController(); \
	friend struct Z_Construct_UClass_AFINNALLYPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFINNALLYPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_AFINNALLYPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFINNALLYPlayerController)


#define FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFINNALLYPlayerController(AFINNALLYPlayerController&&) = delete; \
	AFINNALLYPlayerController(const AFINNALLYPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINNALLYPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINNALLYPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFINNALLYPlayerController) \
	NO_API virtual ~AFINNALLYPlayerController();


#define FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_17_PROLOG
#define FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFINNALLYPlayerController;

// ********** End Class AFINNALLYPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_FINNALLYPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
