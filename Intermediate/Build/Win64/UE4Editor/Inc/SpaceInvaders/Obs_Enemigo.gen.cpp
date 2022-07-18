// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/Obs_Enemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObs_Enemigo() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AObs_Enemigo_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AObs_Enemigo();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AMyFlyingSpaceship_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UMySubscribers_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UObs_Tareas_NoRegister();
// End Cross Module References
	void AObs_Enemigo::StaticRegisterNativesAObs_Enemigo()
	{
	}
	UClass* Z_Construct_UClass_AObs_Enemigo_NoRegister()
	{
		return AObs_Enemigo::StaticClass();
	}
	struct Z_Construct_UClass_AObs_Enemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObs_Enemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObs_Enemigo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Obs_Enemigo.h" },
		{ "ModuleRelativePath", "Obs_Enemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ShipMeshEnemy_MetaData[] = {
		{ "Category", "Nave Enemiga" },
		{ "Comment", "// mesh de la nave enemiga\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obs_Enemigo.h" },
		{ "ToolTip", "mesh de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ShipMeshEnemy = { "ShipMeshEnemy", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObs_Enemigo, ShipMeshEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ShipMeshEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ShipMeshEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ControlTower_MetaData[] = {
		{ "ModuleRelativePath", "Obs_Enemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ControlTower = { "ControlTower", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObs_Enemigo, ControlTower), Z_Construct_UClass_AMyFlyingSpaceship_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ControlTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ControlTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObs_Enemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ShipMeshEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObs_Enemigo_Statics::NewProp_ControlTower,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AObs_Enemigo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMySubscribers_NoRegister, (int32)VTABLE_OFFSET(AObs_Enemigo, IMySubscribers), false },
			{ Z_Construct_UClass_UObs_Tareas_NoRegister, (int32)VTABLE_OFFSET(AObs_Enemigo, IObs_Tareas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObs_Enemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObs_Enemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObs_Enemigo_Statics::ClassParams = {
		&AObs_Enemigo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObs_Enemigo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObs_Enemigo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObs_Enemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObs_Enemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObs_Enemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObs_Enemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObs_Enemigo, 760100667);
	template<> SPACEINVADERS_API UClass* StaticClass<AObs_Enemigo>()
	{
		return AObs_Enemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObs_Enemigo(Z_Construct_UClass_AObs_Enemigo, &AObs_Enemigo::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AObs_Enemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObs_Enemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
