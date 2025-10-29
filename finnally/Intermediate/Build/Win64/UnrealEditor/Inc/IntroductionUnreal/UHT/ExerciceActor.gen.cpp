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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AExerciceActor();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_AExerciceActor_NoRegister();
INTRODUCTIONUNREAL_API UClass* Z_Construct_UClass_UExerciceInterface_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "ExerciceActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExerciceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ExerciceActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExerciceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphereMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ExerciceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ExerciceActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static void NewProp_bUseSphereMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphereMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExerciceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExerciceActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExerciceActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExerciceActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExerciceActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
void Z_Construct_UClass_AExerciceActor_Statics::NewProp_bUseSphereMesh_SetBit(void* Obj)
{
	((AExerciceActor*)Obj)->bUseSphereMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExerciceActor_Statics::NewProp_bUseSphereMesh = { "bUseSphereMesh", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AExerciceActor), &Z_Construct_UClass_AExerciceActor_Statics::NewProp_bUseSphereMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSphereMesh_MetaData), NewProp_bUseSphereMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExerciceActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExerciceActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExerciceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExerciceActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExerciceActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExerciceActor_Statics::NewProp_bUseSphereMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExerciceActor_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExerciceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AExerciceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroductionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExerciceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExerciceActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UExerciceInterface_NoRegister, (int32)VTABLE_OFFSET(AExerciceActor, IExerciceInterface), false },  // 1223303877
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExerciceActor_Statics::ClassParams = {
	&AExerciceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExerciceActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExerciceActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AExerciceActor, AExerciceActor::StaticClass, TEXT("AExerciceActor"), &Z_Registration_Info_UClass_AExerciceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExerciceActor), 3497742731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_2368242612(TEXT("/Script/IntroductionUnreal"),
	Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_finnally_Source_IntroductionUnreal_ExerciceActor_h__Script_IntroductionUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
