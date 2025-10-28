// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTools.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UMyTools();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UMyTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyTools Function BezierInterp *******************************************
struct Z_Construct_UFunction_UMyTools_BezierInterp_Statics
{
	struct MyTools_eventBezierInterp_Parms
	{
		TArray<FVector> Points;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTools" },
		{ "ModuleRelativePath", "MyTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventBezierInterp_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventBezierInterp_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventBezierInterp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTools_BezierInterp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_BezierInterp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_BezierInterp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTools_BezierInterp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyTools, nullptr, "BezierInterp", Z_Construct_UFunction_UMyTools_BezierInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_BezierInterp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTools_BezierInterp_Statics::MyTools_eventBezierInterp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_BezierInterp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTools_BezierInterp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyTools_BezierInterp_Statics::MyTools_eventBezierInterp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTools_BezierInterp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTools_BezierInterp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTools::execBezierInterp)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMyTools::BezierInterp(Z_Param_Out_Points,Z_Param_Alpha);
	P_NATIVE_END;
}
// ********** End Class UMyTools Function BezierInterp *********************************************

// ********** Begin Class UMyTools Function MyClamp ************************************************
struct Z_Construct_UFunction_UMyTools_MyClamp_Statics
{
	struct MyTools_eventMyClamp_Parms
	{
		float Value;
		float Min;
		float Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTools" },
		{ "ModuleRelativePath", "MyTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyClamp_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyClamp_Parms, Min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyClamp_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyClamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTools_MyClamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyClamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyClamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTools_MyClamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyTools, nullptr, "MyClamp", Z_Construct_UFunction_UMyTools_MyClamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyClamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTools_MyClamp_Statics::MyTools_eventMyClamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyClamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTools_MyClamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyTools_MyClamp_Statics::MyTools_eventMyClamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTools_MyClamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTools_MyClamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTools::execMyClamp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMyTools::MyClamp(Z_Param_Value,Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UMyTools Function MyClamp **************************************************

// ********** Begin Class UMyTools Function MyLerp *************************************************
struct Z_Construct_UFunction_UMyTools_MyLerp_Statics
{
	struct MyTools_eventMyLerp_Parms
	{
		FVector A;
		FVector B;
		float T;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTools" },
		{ "ModuleRelativePath", "MyTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyLerp_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyLerp_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyLerp_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyLerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTools_MyLerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyLerp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyLerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTools_MyLerp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyTools, nullptr, "MyLerp", Z_Construct_UFunction_UMyTools_MyLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyLerp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTools_MyLerp_Statics::MyTools_eventMyLerp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyLerp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTools_MyLerp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyTools_MyLerp_Statics::MyTools_eventMyLerp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTools_MyLerp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTools_MyLerp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTools::execMyLerp)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMyTools::MyLerp(Z_Param_A,Z_Param_B,Z_Param_T);
	P_NATIVE_END;
}
// ********** End Class UMyTools Function MyLerp ***************************************************

// ********** Begin Class UMyTools Function MyUnclampedLerp ****************************************
struct Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics
{
	struct MyTools_eventMyUnclampedLerp_Parms
	{
		FVector A;
		FVector B;
		float T;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTools" },
		{ "ModuleRelativePath", "MyTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyUnclampedLerp_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyUnclampedLerp_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyUnclampedLerp_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTools_eventMyUnclampedLerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyTools, nullptr, "MyUnclampedLerp", Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::MyTools_eventMyUnclampedLerp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::MyTools_eventMyUnclampedLerp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTools_MyUnclampedLerp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTools_MyUnclampedLerp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTools::execMyUnclampedLerp)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_GET_STRUCT(FVector,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMyTools::MyUnclampedLerp(Z_Param_A,Z_Param_B,Z_Param_T);
	P_NATIVE_END;
}
// ********** End Class UMyTools Function MyUnclampedLerp ******************************************

// ********** Begin Class UMyTools *****************************************************************
void UMyTools::StaticRegisterNativesUMyTools()
{
	UClass* Class = UMyTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BezierInterp", &UMyTools::execBezierInterp },
		{ "MyClamp", &UMyTools::execMyClamp },
		{ "MyLerp", &UMyTools::execMyLerp },
		{ "MyUnclampedLerp", &UMyTools::execMyUnclampedLerp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyTools;
UClass* UMyTools::GetPrivateStaticClass()
{
	using TClass = UMyTools;
	if (!Z_Registration_Info_UClass_UMyTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyTools"),
			Z_Registration_Info_UClass_UMyTools.InnerSingleton,
			StaticRegisterNativesUMyTools,
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
	return Z_Registration_Info_UClass_UMyTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyTools_NoRegister()
{
	return UMyTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTools.h" },
		{ "ModuleRelativePath", "MyTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyTools_BezierInterp, "BezierInterp" }, // 577393054
		{ &Z_Construct_UFunction_UMyTools_MyClamp, "MyClamp" }, // 1861661440
		{ &Z_Construct_UFunction_UMyTools_MyLerp, "MyLerp" }, // 1719931083
		{ &Z_Construct_UFunction_UMyTools_MyUnclampedLerp, "MyUnclampedLerp" }, // 3688607768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTools_Statics::ClassParams = {
	&UMyTools::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTools()
{
	if (!Z_Registration_Info_UClass_UMyTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTools.OuterSingleton, Z_Construct_UClass_UMyTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTools.OuterSingleton;
}
UMyTools::UMyTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTools);
UMyTools::~UMyTools() {}
// ********** End Class UMyTools *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MyTools_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTools, UMyTools::StaticClass, TEXT("UMyTools"), &Z_Registration_Info_UClass_UMyTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTools), 91271975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MyTools_h__Script_IntroductionUnreal_3549834189(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MyTools_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MyTools_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
