// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINNALLYGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFINNALLYGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYGameMode();
FINNALLY_API UClass* Z_Construct_UClass_AFINNALLYGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FINNALLY();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFINNALLYGameMode ********************************************************
void AFINNALLYGameMode::StaticRegisterNativesAFINNALLYGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFINNALLYGameMode;
UClass* AFINNALLYGameMode::GetPrivateStaticClass()
{
	using TClass = AFINNALLYGameMode;
	if (!Z_Registration_Info_UClass_AFINNALLYGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FINNALLYGameMode"),
			Z_Registration_Info_UClass_AFINNALLYGameMode.InnerSingleton,
			StaticRegisterNativesAFINNALLYGameMode,
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
	return Z_Registration_Info_UClass_AFINNALLYGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFINNALLYGameMode_NoRegister()
{
	return AFINNALLYGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFINNALLYGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FINNALLYGameMode.h" },
		{ "ModuleRelativePath", "FINNALLYGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFINNALLYGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFINNALLYGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FINNALLY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFINNALLYGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFINNALLYGameMode_Statics::ClassParams = {
	&AFINNALLYGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFINNALLYGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFINNALLYGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFINNALLYGameMode()
{
	if (!Z_Registration_Info_UClass_AFINNALLYGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFINNALLYGameMode.OuterSingleton, Z_Construct_UClass_AFINNALLYGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFINNALLYGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFINNALLYGameMode);
AFINNALLYGameMode::~AFINNALLYGameMode() {}
// ********** End Class AFINNALLYGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h__Script_FINNALLY_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFINNALLYGameMode, AFINNALLYGameMode::StaticClass, TEXT("AFINNALLYGameMode"), &Z_Registration_Info_UClass_AFINNALLYGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFINNALLYGameMode), 3406051937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h__Script_FINNALLY_2005496344(TEXT("/Script/FINNALLY"),
	Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h__Script_FINNALLY_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_FINNALLYGameMode_h__Script_FINNALLY_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
