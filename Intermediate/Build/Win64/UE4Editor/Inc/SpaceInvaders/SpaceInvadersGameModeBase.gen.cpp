// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/SpaceInvadersGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceInvadersGameModeBase() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_ASpaceInvadersGameModeBase_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ASpaceInvadersGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveEnemigaEspecializada_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveDirector_NoRegister();
// End Cross Module References
	void ASpaceInvadersGameModeBase::StaticRegisterNativesASpaceInvadersGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpaceInvadersGameModeBase_NoRegister()
	{
		return ASpaceInvadersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemigaEspecializadaBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveEnemigaEspecializadaBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Director1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Director1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceInvadersGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceInvadersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_NaveEnemigaEspecializadaBuilder_MetaData[] = {
		{ "Category", "Nave Enemiga Patron Builder" },
		{ "Comment", "//PATRON BUILDER\n" },
		{ "ModuleRelativePath", "SpaceInvadersGameModeBase.h" },
		{ "ToolTip", "PATRON BUILDER" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_NaveEnemigaEspecializadaBuilder = { "NaveEnemigaEspecializadaBuilder", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceInvadersGameModeBase, NaveEnemigaEspecializadaBuilder), Z_Construct_UClass_ANaveEnemigaEspecializada_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_NaveEnemigaEspecializadaBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_NaveEnemigaEspecializadaBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_Director1_MetaData[] = {
		{ "Category", "Nave Enemiga Patron Builder" },
		{ "ModuleRelativePath", "SpaceInvadersGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_Director1 = { "Director1", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceInvadersGameModeBase, Director1), Z_Construct_UClass_ANaveDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_Director1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_Director1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_NaveEnemigaEspecializadaBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::NewProp_Director1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvadersGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::ClassParams = {
		&ASpaceInvadersGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceInvadersGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceInvadersGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceInvadersGameModeBase, 2943544866);
	template<> SPACEINVADERS_API UClass* StaticClass<ASpaceInvadersGameModeBase>()
	{
		return ASpaceInvadersGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceInvadersGameModeBase(Z_Construct_UClass_ASpaceInvadersGameModeBase, &ASpaceInvadersGameModeBase::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("ASpaceInvadersGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvadersGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
