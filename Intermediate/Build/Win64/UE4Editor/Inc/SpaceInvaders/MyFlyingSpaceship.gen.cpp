// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/MyFlyingSpaceship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFlyingSpaceship() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_AMyFlyingSpaceship_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_AMyFlyingSpaceship();
	SPACEINVADERS_API UClass* Z_Construct_UClass_ASpaceship();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UInventoryComponent2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void AMyFlyingSpaceship::StaticRegisterNativesAMyFlyingSpaceship()
	{
	}
	UClass* Z_Construct_UClass_AMyFlyingSpaceship_NoRegister()
	{
		return AMyFlyingSpaceship::StaticClass();
	}
	struct Z_Construct_UClass_AMyFlyingSpaceship_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipExplosionPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipExplosionPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyShipInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyShipInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFlyingSpaceship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpaceship,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyFlyingSpaceship.h" },
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_ShipExplosionPlayer_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_ShipExplosionPlayer = { "ShipExplosionPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFlyingSpaceship, ShipExplosionPlayer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_ShipExplosionPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_ShipExplosionPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFlyingSpaceship, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* How fast the weapon will fire */" },
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFlyingSpaceship, FireRate), METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_MyShipInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_MyShipInventory = { "MyShipInventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFlyingSpaceship, MyShipInventory), Z_Construct_UClass_UInventoryComponent2_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_MyShipInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_MyShipInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers_MetaData[] = {
		{ "ModuleRelativePath", "MyFlyingSpaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyFlyingSpaceship, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyFlyingSpaceship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_ShipExplosionPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_MyShipInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFlyingSpaceship_Statics::NewProp_Subscribers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFlyingSpaceship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFlyingSpaceship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFlyingSpaceship_Statics::ClassParams = {
		&AMyFlyingSpaceship::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyFlyingSpaceship_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyFlyingSpaceship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFlyingSpaceship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFlyingSpaceship()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFlyingSpaceship_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFlyingSpaceship, 2371418520);
	template<> SPACEINVADERS_API UClass* StaticClass<AMyFlyingSpaceship>()
	{
		return AMyFlyingSpaceship::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFlyingSpaceship(Z_Construct_UClass_AMyFlyingSpaceship, &AMyFlyingSpaceship::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("AMyFlyingSpaceship"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFlyingSpaceship);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
