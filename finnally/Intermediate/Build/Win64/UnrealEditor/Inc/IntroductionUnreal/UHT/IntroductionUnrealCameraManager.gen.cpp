// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroductionUnrealCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroductionUnrealCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealCameraManager();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroductionUnrealCameraManager *****************************************
void AIntroductionUnrealCameraManager::StaticRegisterNativesAIntroductionUnrealCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroductionUnrealCameraManager;
UClass* AIntroductionUnrealCameraManager::GetPrivateStaticClass()
{
	using TClass = AIntroductionUnrealCameraManager;
	if (!Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroductionUnrealCameraManager"),
			Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.InnerSingleton,
			StaticRegisterNativesAIntroductionUnrealCameraManager,
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
	return Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroductionUnrealCameraManager_NoRegister()
{
	return AIntroductionUnrealCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "IntroductionUnrealCameraManager.h" },
		{ "ModuleRelativePath", "IntroductionUnrealCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroductionUnrealCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::ClassParams = {
	&AIntroductionUnrealCameraManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroductionUnrealCameraManager()
{
	if (!Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.OuterSingleton, Z_Construct_UClass_AIntroductionUnrealCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroductionUnrealCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroductionUnrealCameraManager);
AIntroductionUnrealCameraManager::~AIntroductionUnrealCameraManager() {}
// ********** End Class AIntroductionUnrealCameraManager *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCameraManager_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroductionUnrealCameraManager, AIntroductionUnrealCameraManager::StaticClass, TEXT("AIntroductionUnrealCameraManager"), &Z_Registration_Info_UClass_AIntroductionUnrealCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroductionUnrealCameraManager), 853317461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCameraManager_h__Script_IntroductionUnreal_106941215(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCameraManager_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealCameraManager_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
