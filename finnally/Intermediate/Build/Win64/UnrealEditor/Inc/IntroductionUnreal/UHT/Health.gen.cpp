// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Health.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealth() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UHealth();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UHealth_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UHealth Function TakeDamage ******************************************
struct Health_eventTakeDamage_Parms
{
	int32 Amount;
};
void IHealth::TakeDamage(int32 Amount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeDamage instead.");
}
static FName NAME_UHealth_TakeDamage = FName(TEXT("TakeDamage"));
void IHealth::Execute_TakeDamage(UObject* O, int32 Amount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHealth::StaticClass()));
	Health_eventTakeDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHealth_TakeDamage);
	if (Func)
	{
		Parms.Amount=Amount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHealth*)(O->GetNativeInterfaceAddress(UHealth::StaticClass())))
	{
		I->TakeDamage_Implementation(Amount);
	}
}
struct Z_Construct_UFunction_UHealth_TakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealth_TakeDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventTakeDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_TakeDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "TakeDamage", Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers), sizeof(Health_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Health_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealth_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHealth::execTakeDamage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Interface UHealth Function TakeDamage ********************************************

// ********** Begin Interface UHealth **************************************************************
void UHealth::StaticRegisterNativesUHealth()
{
	UClass* Class = UHealth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TakeDamage", &IHealth::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealth;
UClass* UHealth::GetPrivateStaticClass()
{
	using TClass = UHealth;
	if (!Z_Registration_Info_UClass_UHealth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Health"),
			Z_Registration_Info_UClass_UHealth.InnerSingleton,
			StaticRegisterNativesUHealth,
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
	return Z_Registration_Info_UClass_UHealth.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealth_NoRegister()
{
	return UHealth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_TakeDamage, "TakeDamage" }, // 1683595333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Statics::ClassParams = {
	&UHealth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealth()
{
	if (!Z_Registration_Info_UClass_UHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth.OuterSingleton, Z_Construct_UClass_UHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealth.OuterSingleton;
}
UHealth::UHealth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth);
// ********** End Interface UHealth ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Health_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealth, UHealth::StaticClass, TEXT("UHealth"), &Z_Registration_Info_UClass_UHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth), 1727921590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Health_h__Script_IntroductionUnreal_3815925617(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Health_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Health_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
