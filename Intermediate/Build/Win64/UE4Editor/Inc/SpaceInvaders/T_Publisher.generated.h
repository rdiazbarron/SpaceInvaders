// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_T_Publisher_generated_h
#error "T_Publisher.generated.h already included, missing '#pragma once' in T_Publisher.h"
#endif
#define SPACEINVADERS_T_Publisher_generated_h

#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_Publisher(); \
	friend struct Z_Construct_UClass_AT_Publisher_Statics; \
public: \
	DECLARE_CLASS(AT_Publisher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(AT_Publisher)


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAT_Publisher(); \
	friend struct Z_Construct_UClass_AT_Publisher_Statics; \
public: \
	DECLARE_CLASS(AT_Publisher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), NO_API) \
	DECLARE_SERIALIZER(AT_Publisher)


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT_Publisher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT_Publisher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_Publisher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_Publisher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT_Publisher(AT_Publisher&&); \
	NO_API AT_Publisher(const AT_Publisher&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT_Publisher(AT_Publisher&&); \
	NO_API AT_Publisher(const AT_Publisher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_Publisher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_Publisher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_Publisher)


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Subscribers() { return STRUCT_OFFSET(AT_Publisher, Subscribers); }


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_10_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_INCLASS \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_T_Publisher_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class AT_Publisher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_T_Publisher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
