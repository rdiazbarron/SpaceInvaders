// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/KapsuleSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKapsuleSpeed() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsuleSpeed_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsuleSpeed();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsule();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AKapsuleSpeed::StaticRegisterNativesAKapsuleSpeed()
	{
	}
	UClass* Z_Construct_UClass_AKapsuleSpeed_NoRegister()
	{
		return AKapsuleSpeed::StaticClass();
	}
	struct Z_Construct_UClass_AKapsuleSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKapsuleSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsuleSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KapsuleSpeed.h" },
		{ "ModuleRelativePath", "KapsuleSpeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKapsuleSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKapsuleSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKapsuleSpeed_Statics::ClassParams = {
		&AKapsuleSpeed::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKapsuleSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsuleSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKapsuleSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKapsuleSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKapsuleSpeed, 1156181959);
	template<> SPACEINVADERS_API UClass* StaticClass<AKapsuleSpeed>()
	{
		return AKapsuleSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKapsuleSpeed(Z_Construct_UClass_AKapsuleSpeed, &AKapsuleSpeed::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AKapsuleSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKapsuleSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
