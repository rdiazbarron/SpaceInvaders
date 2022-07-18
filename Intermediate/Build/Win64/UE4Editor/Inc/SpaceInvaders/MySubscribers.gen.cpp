// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/MySubscribers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySubscribers() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_UMySubscribers_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UMySubscribers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void UMySubscribers::StaticRegisterNativesUMySubscribers()
	{
	}
	UClass* Z_Construct_UClass_UMySubscribers_NoRegister()
	{
		return UMySubscribers::StaticClass();
	}
	struct Z_Construct_UClass_UMySubscribers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySubscribers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySubscribers_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MySubscribers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySubscribers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMySubscribers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySubscribers_Statics::ClassParams = {
		&UMySubscribers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMySubscribers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySubscribers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySubscribers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySubscribers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySubscribers, 3333337714);
	template<> SPACEINVADERS_API UClass* StaticClass<UMySubscribers>()
	{
		return UMySubscribers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySubscribers(Z_Construct_UClass_UMySubscribers, &UMySubscribers::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("UMySubscribers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySubscribers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
