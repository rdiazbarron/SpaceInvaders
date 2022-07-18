// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/T_Publisher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Publisher() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_Publisher_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AT_Publisher();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AT_Publisher::StaticRegisterNativesAT_Publisher()
	{
	}
	UClass* Z_Construct_UClass_AT_Publisher_NoRegister()
	{
		return AT_Publisher::StaticClass();
	}
	struct Z_Construct_UClass_AT_Publisher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT_Publisher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_Publisher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "T_Publisher.h" },
		{ "ModuleRelativePath", "T_Publisher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers_MetaData[] = {
		{ "Comment", "//The Subscribers of this Publisher\n" },
		{ "ModuleRelativePath", "T_Publisher.h" },
		{ "ToolTip", "The Subscribers of this Publisher" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT_Publisher, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT_Publisher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Publisher_Statics::NewProp_Subscribers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT_Publisher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_Publisher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT_Publisher_Statics::ClassParams = {
		&AT_Publisher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT_Publisher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT_Publisher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT_Publisher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT_Publisher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT_Publisher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT_Publisher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT_Publisher, 1244384964);
	template<> SPACEINVADERS_API UClass* StaticClass<AT_Publisher>()
	{
		return AT_Publisher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT_Publisher(Z_Construct_UClass_AT_Publisher, &AT_Publisher::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AT_Publisher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT_Publisher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
