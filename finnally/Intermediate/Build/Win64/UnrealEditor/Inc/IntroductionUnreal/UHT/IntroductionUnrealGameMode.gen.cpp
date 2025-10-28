// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroductionUnrealGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroductionUnrealGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealGameMode();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AIntroductionUnrealGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroductionUnrealGameMode **********************************************
void AIntroductionUnrealGameMode::StaticRegisterNativesAIntroductionUnrealGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroductionUnrealGameMode;
UClass* AIntroductionUnrealGameMode::GetPrivateStaticClass()
{
	using TClass = AIntroductionUnrealGameMode;
	if (!Z_Registration_Info_UClass_AIntroductionUnrealGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroductionUnrealGameMode"),
			Z_Registration_Info_UClass_AIntroductionUnrealGameMode.InnerSingleton,
			StaticRegisterNativesAIntroductionUnrealGameMode,
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
	return Z_Registration_Info_UClass_AIntroductionUnrealGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroductionUnrealGameMode_NoRegister()
{
	return AIntroductionUnrealGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroductionUnrealGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IntroductionUnrealGameMode.h" },
		{ "ModuleRelativePath", "IntroductionUnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroductionUnrealGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::ClassParams = {
	&AIntroductionUnrealGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroductionUnrealGameMode()
{
	if (!Z_Registration_Info_UClass_AIntroductionUnrealGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroductionUnrealGameMode.OuterSingleton, Z_Construct_UClass_AIntroductionUnrealGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroductionUnrealGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroductionUnrealGameMode);
AIntroductionUnrealGameMode::~AIntroductionUnrealGameMode() {}
// ********** End Class AIntroductionUnrealGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealGameMode_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroductionUnrealGameMode, AIntroductionUnrealGameMode::StaticClass, TEXT("AIntroductionUnrealGameMode"), &Z_Registration_Info_UClass_AIntroductionUnrealGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroductionUnrealGameMode), 312863335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealGameMode_h__Script_IntroductionUnreal_1963026918(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealGameMode_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_IntroductionUnrealGameMode_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
