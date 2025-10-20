// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExerciceComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExerciceComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FINNALLY_API UClass* Z_Construct_UClass_UExerciceComponent();
FINNALLY_API UClass* Z_Construct_UClass_UExerciceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FINNALLY();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExerciceComponent Function StartOscillation *****************************
struct Z_Construct_UFunction_UExerciceComponent_StartOscillation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "ExerciceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceComponent_StartOscillation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceComponent, nullptr, "StartOscillation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceComponent_StartOscillation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceComponent_StartOscillation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UExerciceComponent_StartOscillation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceComponent_StartOscillation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExerciceComponent::execStartOscillation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartOscillation();
	P_NATIVE_END;
}
// ********** End Class UExerciceComponent Function StartOscillation *******************************

// ********** Begin Class UExerciceComponent Function StopOscillation ******************************
struct Z_Construct_UFunction_UExerciceComponent_StopOscillation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "ExerciceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceComponent_StopOscillation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceComponent, nullptr, "StopOscillation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceComponent_StopOscillation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceComponent_StopOscillation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UExerciceComponent_StopOscillation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceComponent_StopOscillation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExerciceComponent::execStopOscillation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopOscillation();
	P_NATIVE_END;
}
// ********** End Class UExerciceComponent Function StopOscillation ********************************

// ********** Begin Class UExerciceComponent *******************************************************
void UExerciceComponent::StaticRegisterNativesUExerciceComponent()
{
	UClass* Class = UExerciceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartOscillation", &UExerciceComponent::execStartOscillation },
		{ "StopOscillation", &UExerciceComponent::execStopOscillation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExerciceComponent;
UClass* UExerciceComponent::GetPrivateStaticClass()
{
	using TClass = UExerciceComponent;
	if (!Z_Registration_Info_UClass_UExerciceComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExerciceComponent"),
			Z_Registration_Info_UClass_UExerciceComponent.InnerSingleton,
			StaticRegisterNativesUExerciceComponent,
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
	return Z_Registration_Info_UClass_UExerciceComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UExerciceComponent_NoRegister()
{
	return UExerciceComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExerciceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ExerciceComponent.h" },
		{ "ModuleRelativePath", "ExerciceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "ExerciceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "ExerciceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExerciceComponent_StartOscillation, "StartOscillation" }, // 765740637
		{ &Z_Construct_UFunction_UExerciceComponent_StopOscillation, "StopOscillation" }, // 3339052289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExerciceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExerciceComponent_Statics::NewProp_TargetScale = { "TargetScale", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExerciceComponent, TargetScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetScale_MetaData), NewProp_TargetScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExerciceComponent_Statics::NewProp_ScaleSpeed = { "ScaleSpeed", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExerciceComponent, ScaleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSpeed_MetaData), NewProp_ScaleSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExerciceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExerciceComponent_Statics::NewProp_TargetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExerciceComponent_Statics::NewProp_ScaleSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExerciceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FINNALLY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExerciceComponent_Statics::ClassParams = {
	&UExerciceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExerciceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExerciceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExerciceComponent()
{
	if (!Z_Registration_Info_UClass_UExerciceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExerciceComponent.OuterSingleton, Z_Construct_UClass_UExerciceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExerciceComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExerciceComponent);
UExerciceComponent::~UExerciceComponent() {}
// ********** End Class UExerciceComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h__Script_FINNALLY_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExerciceComponent, UExerciceComponent::StaticClass, TEXT("UExerciceComponent"), &Z_Registration_Info_UClass_UExerciceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExerciceComponent), 2006788884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h__Script_FINNALLY_4033744443(TEXT("/Script/FINNALLY"),
	Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h__Script_FINNALLY_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceComponent_h__Script_FINNALLY_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
