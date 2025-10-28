// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExerciceActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExerciceActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AExerciceActor();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AExerciceActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExerciceActor ***********************************************************
void AExerciceActor::StaticRegisterNativesAExerciceActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AExerciceActor;
UClass* AExerciceActor::GetPrivateStaticClass()
{
	using TClass = AExerciceActor;
	if (!Z_Registration_Info_UClass_AExerciceActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExerciceActor"),
			Z_Registration_Info_UClass_AExerciceActor.InnerSingleton,
			StaticRegisterNativesAExerciceActor,
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
	return Z_Registration_Info_UClass_AExerciceActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AExerciceActor_NoRegister()
{
	return AExerciceActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExerciceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExerciceActor.h" },
		{ "ModuleRelativePath", "ExerciceActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExerciceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExerciceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExerciceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExerciceActor_Statics::ClassParams = {
	&AExerciceActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExerciceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AExerciceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExerciceActor()
{
	if (!Z_Registration_Info_UClass_AExerciceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExerciceActor.OuterSingleton, Z_Construct_UClass_AExerciceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExerciceActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExerciceActor);
AExerciceActor::~AExerciceActor() {}
// ********** End Class AExerciceActor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExerciceActor, AExerciceActor::StaticClass, TEXT("AExerciceActor"), &Z_Registration_Info_UClass_AExerciceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExerciceActor), 2771610145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_2365616046(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
