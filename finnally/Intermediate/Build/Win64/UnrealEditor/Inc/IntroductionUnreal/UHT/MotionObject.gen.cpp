// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMotionObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AMotionObject();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AMotionObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroductionUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMotionObject Function RotateTo ******************************************
struct Z_Construct_UFunction_AMotionObject_RotateTo_Statics
{
	struct MotionObject_eventRotateTo_Parms
	{
		FRotator Rotation;
		float InterpDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MotionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionObject_RotateTo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionObject_eventRotateTo_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionObject_RotateTo_Statics::NewProp_InterpDuration = { "InterpDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionObject_eventRotateTo_Parms, InterpDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionObject_RotateTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionObject_RotateTo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionObject_RotateTo_Statics::NewProp_InterpDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_RotateTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionObject_RotateTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMotionObject, nullptr, "RotateTo", Z_Construct_UFunction_AMotionObject_RotateTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_RotateTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotionObject_RotateTo_Statics::MotionObject_eventRotateTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_RotateTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotionObject_RotateTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMotionObject_RotateTo_Statics::MotionObject_eventRotateTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotionObject_RotateTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotionObject_RotateTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotionObject::execRotateTo)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateTo(Z_Param_Rotation,Z_Param_InterpDuration);
	P_NATIVE_END;
}
// ********** End Class AMotionObject Function RotateTo ********************************************

// ********** Begin Class AMotionObject Function ScaleTo *******************************************
struct Z_Construct_UFunction_AMotionObject_ScaleTo_Statics
{
	struct MotionObject_eventScaleTo_Parms
	{
		FVector Scale;
		float InterpDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MotionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionObject_eventScaleTo_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::NewProp_InterpDuration = { "InterpDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionObject_eventScaleTo_Parms, InterpDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::NewProp_InterpDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMotionObject, nullptr, "ScaleTo", Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::MotionObject_eventScaleTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::MotionObject_eventScaleTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotionObject_ScaleTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotionObject_ScaleTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotionObject::execScaleTo)
{
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScaleTo(Z_Param_Scale,Z_Param_InterpDuration);
	P_NATIVE_END;
}
// ********** End Class AMotionObject Function ScaleTo *********************************************

// ********** Begin Class AMotionObject Function StartBezierInterpolation **************************
struct Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics
{
	struct MotionObject_eventStartBezierInterpolation_Parms
	{
		float InterpDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MotionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::NewProp_InterpDuration = { "InterpDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionObject_eventStartBezierInterpolation_Parms, InterpDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::NewProp_InterpDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMotionObject, nullptr, "StartBezierInterpolation", Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::MotionObject_eventStartBezierInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::MotionObject_eventStartBezierInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotionObject_StartBezierInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotionObject_StartBezierInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotionObject::execStartBezierInterpolation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBezierInterpolation(Z_Param_InterpDuration);
	P_NATIVE_END;
}
// ********** End Class AMotionObject Function StartBezierInterpolation ****************************

// ********** Begin Class AMotionObject ************************************************************
void AMotionObject::StaticRegisterNativesAMotionObject()
{
	UClass* Class = AMotionObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RotateTo", &AMotionObject::execRotateTo },
		{ "ScaleTo", &AMotionObject::execScaleTo },
		{ "StartBezierInterpolation", &AMotionObject::execStartBezierInterpolation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMotionObject;
UClass* AMotionObject::GetPrivateStaticClass()
{
	using TClass = AMotionObject;
	if (!Z_Registration_Info_UClass_AMotionObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MotionObject"),
			Z_Registration_Info_UClass_AMotionObject.InnerSingleton,
			StaticRegisterNativesAMotionObject,
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
	return Z_Registration_Info_UClass_AMotionObject.InnerSingleton;
}
UClass* Z_Construct_UClass_AMotionObject_NoRegister()
{
	return AMotionObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMotionObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MotionObject.h" },
		{ "ModuleRelativePath", "MotionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MotionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BezierPointList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bezier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MotionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "MotionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BezierPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bezier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MotionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BezierPointList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BezierPoint_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BezierPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionObject_RotateTo, "RotateTo" }, // 3494311558
		{ &Z_Construct_UFunction_AMotionObject_ScaleTo, "ScaleTo" }, // 104063544
		{ &Z_Construct_UFunction_AMotionObject_StartBezierInterpolation, "StartBezierInterpolation" }, // 3443613202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionObject_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotionObject, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPointList = { "BezierPointList", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotionObject, BezierPointList), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BezierPointList_MetaData), NewProp_BezierPointList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionObject_Statics::NewProp_PointCount = { "PointCount", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotionObject, PointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointCount_MetaData), NewProp_PointCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPoint_Inner = { "BezierPoint", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPoint = { "BezierPoint", nullptr, (EPropertyFlags)0x004000800000080d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotionObject, BezierPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BezierPoint_MetaData), NewProp_BezierPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionObject_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPointList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionObject_Statics::NewProp_PointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPoint_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionObject_Statics::NewProp_BezierPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMotionObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMotionObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMotionObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMotionObject_Statics::ClassParams = {
	&AMotionObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMotionObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMotionObject_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMotionObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AMotionObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMotionObject()
{
	if (!Z_Registration_Info_UClass_AMotionObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMotionObject.OuterSingleton, Z_Construct_UClass_AMotionObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMotionObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionObject);
AMotionObject::~AMotionObject() {}
// ********** End Class AMotionObject **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MotionObject_h__Script_IntroductionUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMotionObject, AMotionObject::StaticClass, TEXT("AMotionObject"), &Z_Registration_Info_UClass_AMotionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMotionObject), 3341862048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MotionObject_h__Script_IntroductionUnreal_4273859752(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MotionObject_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_MotionObject_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
