// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExerciceFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExerciceFunction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FINNALLY_API UClass* Z_Construct_UClass_UExerciceFunction();
FINNALLY_API UClass* Z_Construct_UClass_UExerciceFunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_FINNALLY();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExerciceFunction Function FindShortestVector ****************************
struct Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics
{
	struct ExerciceFunction_eventFindShortestVector_Parms
	{
		TArray<FVector> Vectors;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fonction03 = FindShortestVector\n" },
#endif
		{ "ModuleRelativePath", "ExerciceFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fonction03 = FindShortestVector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceFunction_eventFindShortestVector_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vectors_MetaData), NewProp_Vectors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceFunction_eventFindShortestVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceFunction, nullptr, "FindShortestVector", Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::ExerciceFunction_eventFindShortestVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::ExerciceFunction_eventFindShortestVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExerciceFunction_FindShortestVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceFunction_FindShortestVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExerciceFunction::execFindShortestVector)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UExerciceFunction::FindShortestVector(Z_Param_Out_Vectors);
	P_NATIVE_END;
}
// ********** End Class UExerciceFunction Function FindShortestVector ******************************

// ********** Begin Class UExerciceFunction Function PrintMessage **********************************
struct Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics
{
	struct ExerciceFunction_eventPrintMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fonction01 = print message\n" },
#endif
		{ "ModuleRelativePath", "ExerciceFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fonction01 = print message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceFunction_eventPrintMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceFunction, nullptr, "PrintMessage", Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::ExerciceFunction_eventPrintMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::ExerciceFunction_eventPrintMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExerciceFunction_PrintMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceFunction_PrintMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExerciceFunction::execPrintMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UExerciceFunction::PrintMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UExerciceFunction Function PrintMessage ************************************

// ********** Begin Class UExerciceFunction Function TeleportTo ************************************
struct Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics
{
	struct ExerciceFunction_eventTeleportTo_Parms
	{
		AActor* ActorToTeleport;
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fonction02 = Tp object\n" },
#endif
		{ "ModuleRelativePath", "ExerciceFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fonction02 = Tp object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceFunction_eventTeleportTo_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExerciceFunction_eventTeleportTo_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::NewProp_ActorToTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExerciceFunction, nullptr, "TeleportTo", Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::ExerciceFunction_eventTeleportTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::ExerciceFunction_eventTeleportTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExerciceFunction_TeleportTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExerciceFunction_TeleportTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExerciceFunction::execTeleportTo)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToTeleport);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UExerciceFunction::TeleportTo(Z_Param_ActorToTeleport,Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UExerciceFunction Function TeleportTo **************************************

// ********** Begin Class UExerciceFunction ********************************************************
void UExerciceFunction::StaticRegisterNativesUExerciceFunction()
{
	UClass* Class = UExerciceFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindShortestVector", &UExerciceFunction::execFindShortestVector },
		{ "PrintMessage", &UExerciceFunction::execPrintMessage },
		{ "TeleportTo", &UExerciceFunction::execTeleportTo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExerciceFunction;
UClass* UExerciceFunction::GetPrivateStaticClass()
{
	using TClass = UExerciceFunction;
	if (!Z_Registration_Info_UClass_UExerciceFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExerciceFunction"),
			Z_Registration_Info_UClass_UExerciceFunction.InnerSingleton,
			StaticRegisterNativesUExerciceFunction,
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
	return Z_Registration_Info_UClass_UExerciceFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_UExerciceFunction_NoRegister()
{
	return UExerciceFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExerciceFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ExerciceFunction.h" },
		{ "ModuleRelativePath", "ExerciceFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExerciceFunction_FindShortestVector, "FindShortestVector" }, // 3815924138
		{ &Z_Construct_UFunction_UExerciceFunction_PrintMessage, "PrintMessage" }, // 2985503047
		{ &Z_Construct_UFunction_UExerciceFunction_TeleportTo, "TeleportTo" }, // 3169722860
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExerciceFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExerciceFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FINNALLY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExerciceFunction_Statics::ClassParams = {
	&UExerciceFunction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExerciceFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UExerciceFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExerciceFunction()
{
	if (!Z_Registration_Info_UClass_UExerciceFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExerciceFunction.OuterSingleton, Z_Construct_UClass_UExerciceFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExerciceFunction.OuterSingleton;
}
UExerciceFunction::UExerciceFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExerciceFunction);
UExerciceFunction::~UExerciceFunction() {}
// ********** End Class UExerciceFunction **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h__Script_FINNALLY_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExerciceFunction, UExerciceFunction::StaticClass, TEXT("UExerciceFunction"), &Z_Registration_Info_UClass_UExerciceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExerciceFunction), 292671353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h__Script_FINNALLY_4186375874(TEXT("/Script/FINNALLY"),
	Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h__Script_FINNALLY_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FINNALLY_Source_FINNALLY_ExerciceFunction_h__Script_FINNALLY_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
