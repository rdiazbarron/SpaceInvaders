// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/KapsuleWormHole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKapsuleWormHole() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsuleWormHole_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsuleWormHole();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AKapsule();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AKapsuleWormHole::StaticRegisterNativesAKapsuleWormHole()
	{
	}
	UClass* Z_Construct_UClass_AKapsuleWormHole_NoRegister()
	{
		return AKapsuleWormHole::StaticClass();
	}
	struct Z_Construct_UClass_AKapsuleWormHole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKapsuleWormHole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKapsuleWormHole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KapsuleWormHole.h" },
		{ "ModuleRelativePath", "KapsuleWormHole.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKapsuleWormHole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKapsuleWormHole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKapsuleWormHole_Statics::ClassParams = {
		&AKapsuleWormHole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKapsuleWormHole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKapsuleWormHole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKapsuleWormHole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKapsuleWormHole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKapsuleWormHole, 4187508557);
	template<> SPACEINVADERS_API UClass* StaticClass<AKapsuleWormHole>()
	{
		return AKapsuleWormHole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKapsuleWormHole(Z_Construct_UClass_AKapsuleWormHole, &AKapsuleWormHole::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AKapsuleWormHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKapsuleWormHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
