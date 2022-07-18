// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/T_ClockTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_ClockTower() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_ClockTower_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_ClockTower();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_Publisher();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void AT_ClockTower::StaticRegisterNativesAT_ClockTower()
	{
	}
	UClass* Z_Construct_UClass_AT_ClockTower_NoRegister()
	{
		return AT_ClockTower::StaticClass();
	}
	struct Z_Construct_UClass_AT_ClockTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT_ClockTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT_Publisher,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_ClockTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "T_ClockTower.h" },
		{ "ModuleRelativePath", "T_ClockTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT_ClockTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_ClockTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT_ClockTower_Statics::ClassParams = {
		&AT_ClockTower::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AT_ClockTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT_ClockTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT_ClockTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT_ClockTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT_ClockTower, 953066802);
	template<> SPACEINVADERS_API UClass* StaticClass<AT_ClockTower>()
	{
		return AT_ClockTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT_ClockTower(Z_Construct_UClass_AT_ClockTower, &AT_ClockTower::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AT_ClockTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT_ClockTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
