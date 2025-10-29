// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExerciceInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExerciceInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UExerciceInterface();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UExerciceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UExerciceInterface Function GetLocation ******************************
struct ExerciceInterface_eventGetLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ExerciceInterface_eventGetLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IExerciceInterface::GetLocation() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLocation instead.");
	ExerciceInterface_eventGetLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UExerciceInterface_GetLocation = FName(TEXT("GetLocation"));
FVector IExerciceInterface::Execute_GetLocation(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UExerciceInterface::StaticClass()));
	ExerciceInterface_eventGetLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UExerciceInterface_GetLocation);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IExerciceInterface*)(O->GetNativeInterfaceAddress(UExerciceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLocation_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Exercise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unreal-style interface declaration\n" },
#endif
		{ "ModuleRelativePath", "ExerciceInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unreal-style interface declaration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceInterface_eventGetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceInterface, nullptr, "GetLocation", Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::PropPointers), sizeof(ExerciceInterface_eventGetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ExerciceInterface_eventGetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExerciceInterface_GetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceInterface_GetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IExerciceInterface::execGetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLocation_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UExerciceInterface Function GetLocation ********************************

// ********** Begin Interface UExerciceInterface ***************************************************
void UExerciceInterface::StaticRegisterNativesUExerciceInterface()
{
	UClass* Class = UExerciceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocation", &IExerciceInterface::execGetLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExerciceInterface;
UClass* UExerciceInterface::GetPrivateStaticClass()
{
	using TClass = UExerciceInterface;
	if (!Z_Registration_Info_UClass_UExerciceInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExerciceInterface"),
			Z_Registration_Info_UClass_UExerciceInterface.InnerSingleton,
			StaticRegisterNativesUExerciceInterface,
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
	return Z_Registration_Info_UClass_UExerciceInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UExerciceInterface_NoRegister()
{
	return UExerciceInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExerciceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExerciceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExerciceInterface_GetLocation, "GetLocation" }, // 70821356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExerciceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExerciceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExerciceInterface_Statics::ClassParams = {
	&UExerciceInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UExerciceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExerciceInterface()
{
	if (!Z_Registration_Info_UClass_UExerciceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExerciceInterface.OuterSingleton, Z_Construct_UClass_UExerciceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExerciceInterface.OuterSingleton;
}
UExerciceInterface::UExerciceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExerciceInterface);
// ********** End Interface UExerciceInterface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExerciceInterface, UExerciceInterface::StaticClass, TEXT("UExerciceInterface"), &Z_Registration_Info_UClass_UExerciceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExerciceInterface), 1223303877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h__Script_IntroductionUnreal_1905020790(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceInterface_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
