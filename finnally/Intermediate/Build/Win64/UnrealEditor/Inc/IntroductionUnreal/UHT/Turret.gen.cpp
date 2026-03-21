// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Turret.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurret() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_ATurret();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_ATurret_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATurret Function ApplyDamage *********************************************
struct Z_Construct_UFunction_ATurret_ApplyDamage_Statics
{
	struct Turret_eventApplyDamage_Parms
	{
		AActor* Entity;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_ApplyDamage_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventApplyDamage_Parms, Entity), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurret_ApplyDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventApplyDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_ApplyDamage_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_ApplyDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "ApplyDamage", Z_Construct_UFunction_ATurret_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurret_ApplyDamage_Statics::Turret_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurret_ApplyDamage_Statics::Turret_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurret::execApplyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_Entity);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Entity,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ATurret Function ApplyDamage ***********************************************

// ********** Begin Class ATurret ******************************************************************
void ATurret::StaticRegisterNativesATurret()
{
	UClass* Class = ATurret::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &ATurret::execApplyDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATurret;
UClass* ATurret::GetPrivateStaticClass()
{
	using TClass = ATurret;
	if (!Z_Registration_Info_UClass_ATurret.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Turret"),
			Z_Registration_Info_UClass_ATurret.InnerSingleton,
			StaticRegisterNativesATurret,
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
	return Z_Registration_Info_UClass_ATurret.InnerSingleton;
}
UClass* Z_Construct_UClass_ATurret_NoRegister()
{
	return ATurret::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATurret_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurret_ApplyDamage, "ApplyDamage" }, // 3217073008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
	&ATurret::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurret()
{
	if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurret.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
ATurret::~ATurret() {}
// ********** End Class ATurret ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Turret_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 2677934463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Turret_h__Script_IntroductionUnreal_1049174333(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Turret_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_Turret_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
