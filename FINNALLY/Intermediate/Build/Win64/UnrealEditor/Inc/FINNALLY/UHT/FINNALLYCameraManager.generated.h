// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FINNALLYCameraManager.h"

#ifdef FINNALLY_FINNALLYCameraManager_generated_h
#error "FINNALLYCameraManager.generated.h already included, missing '#pragma once' in FINNALLYCameraManager.h"
#endif
#define FINNALLY_FINNALLYCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFINNALLYCameraManager ***************************************************
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCameraManager_NoRegister();

#define FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFINNALLYCameraManager(); \
	friend struct Z_Construct_UClass_AFINNALLYCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AFINNALLYCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINNALLY"), Z_Construct_UClass_AFINNALLYCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AFINNALLYCameraManager)


#define FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFINNALLYCameraManager(AFINNALLYCameraManager&&) = delete; \
	AFINNALLYCameraManager(const AFINNALLYCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINNALLYCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINNALLYCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFINNALLYCameraManager) \
	NO_API virtual ~AFINNALLYCameraManager();


#define FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_13_PROLOG
#define FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFINNALLYCameraManager;

// ********** End Class AFINNALLYCameraManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
