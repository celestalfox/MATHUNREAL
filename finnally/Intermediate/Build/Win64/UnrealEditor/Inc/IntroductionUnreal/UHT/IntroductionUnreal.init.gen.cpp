// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroductionUnreal_init() {}
	INTRODUCTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_IntroductionUnreal_BulletCountUpdatedDelegate__DelegateSignature();
	INTRODUCTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_IntroductionUnreal_DamagedDelegate__DelegateSignature();
	INTRODUCTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_IntroductionUnreal_PawnDeathDelegate__DelegateSignature();
	INTRODUCTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_IntroductionUnreal_SprintStateChangedDelegate__DelegateSignature();
	INTRODUCTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_IntroductionUnreal_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IntroductionUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IntroductionUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_IntroductionUnreal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroductionUnreal_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroductionUnreal_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroductionUnreal_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroductionUnreal_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroductionUnreal_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IntroductionUnreal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9544CD68,
				0x4C781222,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IntroductionUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IntroductionUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IntroductionUnreal(Z_Construct_UPackage__Script_IntroductionUnreal, TEXT("/Script/IntroductionUnreal"), Z_Registration_Info_UPackage__Script_IntroductionUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9544CD68, 0x4C781222));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
