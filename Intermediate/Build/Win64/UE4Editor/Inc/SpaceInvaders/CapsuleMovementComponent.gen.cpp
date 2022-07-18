// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvaders/CapsuleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleMovementComponent() {}
// Cross Module References
	SPACEINVADERS_API UClass* Z_Construct_UClass_UCapsuleMovementComponent_NoRegister();
	SPACEINVADERS_API UClass* Z_Construct_UClass_UCapsuleMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpaceInvaders();
// End Cross Module References
	void UCapsuleMovementComponent::StaticRegisterNativesUCapsuleMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UCapsuleMovementComponent_NoRegister()
	{
		return UCapsuleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCapsuleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aux_MetaData[];
#endif
		static void NewProp_aux_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_aux;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapsuleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CapsuleMovementComponent.h" },
		{ "ModuleRelativePath", "CapsuleMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_MovementRadius_MetaData[] = {
		{ "ModuleRelativePath", "CapsuleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_MovementRadius = { "MovementRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleMovementComponent, MovementRadius), METADATA_PARAMS(Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_MovementRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_MovementRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux_MetaData[] = {
		{ "ModuleRelativePath", "CapsuleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux_SetBit(void* Obj)
	{
		((UCapsuleMovementComponent*)Obj)->aux = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux = { "aux", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCapsuleMovementComponent), &Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapsuleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_MovementRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleMovementComponent_Statics::NewProp_aux,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapsuleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapsuleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCapsuleMovementComponent_Statics::ClassParams = {
		&UCapsuleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCapsuleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCapsuleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCapsuleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCapsuleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapsuleMovementComponent, 978246400);
	template<> SPACEINVADERS_API UClass* StaticClass<UCapsuleMovementComponent>()
	{
		return UCapsuleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapsuleMovementComponent(Z_Construct_UClass_UCapsuleMovementComponent, &UCapsuleMovementComponent::StaticClass, TEXT("/Script/SpaceInvaders"), TEXT("UCapsuleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsuleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
