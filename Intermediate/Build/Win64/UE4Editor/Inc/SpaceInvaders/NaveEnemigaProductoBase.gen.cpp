// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/NaveEnemigaProductoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaProductoBase() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveEnemigaProductoBase_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ANaveEnemigaProductoBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigaProductoBase::StaticRegisterNativesANaveEnemigaProductoBase()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaProductoBase_NoRegister()
	{
		return ANaveEnemigaProductoBase::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaProductoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoGeneracionBala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuntoGeneracionBala;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovimientoNave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveEnemigaProductoBase.h" },
		{ "ModuleRelativePath", "NaveEnemigaProductoBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MeshEnemigo_MetaData[] = {
		{ "Category", "Nave enemiga patron builder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaProductoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MeshEnemigo = { "MeshEnemigo", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaProductoBase, MeshEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MeshEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MeshEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_PuntoGeneracionBala_MetaData[] = {
		{ "Category", "Nave enemiga patron builder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaProductoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_PuntoGeneracionBala = { "PuntoGeneracionBala", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaProductoBase, PuntoGeneracionBala), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_PuntoGeneracionBala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_PuntoGeneracionBala_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MovimientoNave_MetaData[] = {
		{ "Category", "Nave enemiga patron builder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaProductoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MovimientoNave = { "MovimientoNave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaProductoBase, MovimientoNave), Z_Construct_UClass_URandomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MovimientoNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MovimientoNave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MeshEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_PuntoGeneracionBala,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::NewProp_MovimientoNave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaProductoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::ClassParams = {
		&ANaveEnemigaProductoBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaProductoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaProductoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaProductoBase, 2016731795);
	template<> SPACEINVADERS_API UClass* StaticClass<ANaveEnemigaProductoBase>()
	{
		return ANaveEnemigaProductoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaProductoBase(Z_Construct_UClass_ANaveEnemigaProductoBase, &ANaveEnemigaProductoBase::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("ANaveEnemigaProductoBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaProductoBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
