// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_Spaceship_generated_h
#error "Spaceship.generated.h already included, missing '#pragma once' in Spaceship.h"
#endif
#define SPACEINVADERS_Spaceship_generated_h

#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceship(); \
	friend struct Z_Construct_UClass_ASpaceship_Statics; \
public: \
	DECLARE_CLASS(ASpaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(ASpaceship)


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpaceship(); \
	friend struct Z_Construct_UClass_ASpaceship_Statics; \
public: \
	DECLARE_CLASS(ASpaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(ASpaceship)


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceship(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceship) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceship); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceship); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceship(ASpaceship&&); \
	NO_API ASpaceship(const ASpaceship&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceship(ASpaceship&&); \
	NO_API ASpaceship(const ASpaceship&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceship); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceship); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceship)


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpaceshipMeshComponent() { return STRUCT_OFFSET(ASpaceship, SpaceshipMeshComponent); }


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_9_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_INCLASS \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_Spaceship_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class ASpaceship>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_Spaceship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
