// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINNALLYCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFINNALLYCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCameraManager();
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FINNALLY();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFINNALLYCameraManager ***************************************************
void AFINNALLYCameraManager::StaticRegisterNativesAFINNALLYCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFINNALLYCameraManager;
UClass* AFINNALLYCameraManager::GetPrivateStaticClass()
{
	using TClass = AFINNALLYCameraManager;
	if (!Z_Registration_Info_UClass_AFINNALLYCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FINNALLYCameraManager"),
			Z_Registration_Info_UClass_AFINNALLYCameraManager.InnerSingleton,
			StaticRegisterNativesAFINNALLYCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFINNALLYCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFINNALLYCameraManager_NoRegister()
{
	return AFINNALLYCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFINNALLYCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FINNALLYCameraManager.h" },
		{ "ModuleRelativePath", "FINNALLYCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFINNALLYCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFINNALLYCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FINNALLY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFINNALLYCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFINNALLYCameraManager_Statics::ClassParams = {
	&AFINNALLYCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFINNALLYCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFINNALLYCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFINNALLYCameraManager()
{
	if (!Z_Registration_Info_UClass_AFINNALLYCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFINNALLYCameraManager.OuterSingleton, Z_Construct_UClass_AFINNALLYCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFINNALLYCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFINNALLYCameraManager);
AFINNALLYCameraManager::~AFINNALLYCameraManager() {}
// ********** End Class AFINNALLYCameraManager *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h__Script_FINNALLY_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFINNALLYCameraManager, AFINNALLYCameraManager::StaticClass, TEXT("AFINNALLYCameraManager"), &Z_Registration_Info_UClass_AFINNALLYCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFINNALLYCameraManager), 959279234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h__Script_FINNALLY_1382162964(TEXT("/Script/FINNALLY"),
	Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h__Script_FINNALLY_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYCameraManager_h__Script_FINNALLY_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
