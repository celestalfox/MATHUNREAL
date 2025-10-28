// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UTestComponent();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UTestComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTestComponent ***********************************************************
void UTestComponent::StaticRegisterNativesUTestComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTestComponent;
UClass* UTestComponent::GetPrivateStaticClass()
{
	using TClass = UTestComponent;
	if (!Z_Registration_Info_UClass_UTestComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestComponent"),
			Z_Registration_Info_UClass_UTestComponent.InnerSingleton,
			StaticRegisterNativesUTestComponent,
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
	return Z_Registration_Info_UClass_UTestComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestComponent_NoRegister()
{
	return UTestComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TestComponent.h" },
		{ "ModuleRelativePath", "TestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "TestComponent" },
		{ "ModuleRelativePath", "TestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_number_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TestComponent" },
		{ "ModuleRelativePath", "TestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestComponent, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestComponent_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestComponent, number), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_number_MetaData), NewProp_number_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestComponent_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestComponent_Statics::NewProp_number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestComponent_Statics::ClassParams = {
	&UTestComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestComponent()
{
	if (!Z_Registration_Info_UClass_UTestComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestComponent.OuterSingleton, Z_Construct_UClass_UTestComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestComponent);
UTestComponent::~UTestComponent() {}
// ********** End Class UTestComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_TestComponent_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestComponent, UTestComponent::StaticClass, TEXT("UTestComponent"), &Z_Registration_Info_UClass_UTestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestComponent), 3236781524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_TestComponent_h__Script_IntroductionUnreal_1257343855(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_TestComponent_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_TestComponent_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
