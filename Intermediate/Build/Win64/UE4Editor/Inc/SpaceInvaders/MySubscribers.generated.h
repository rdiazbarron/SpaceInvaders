// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADERS_MySubscribers_generated_h
#error "MySubscribers.generated.h already included, missing '#pragma once' in MySubscribers.h"
#endif
#define SPACEINVADERS_MySubscribers_generated_h

#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_SPARSE_DATA
#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_RPC_WRAPPERS
#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEINVADERS_API UMySubscribers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySubscribers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEINVADERS_API, UMySubscribers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySubscribers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEINVADERS_API UMySubscribers(UMySubscribers&&); \
	SPACEINVADERS_API UMySubscribers(const UMySubscribers&); \
public:


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEINVADERS_API UMySubscribers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEINVADERS_API UMySubscribers(UMySubscribers&&); \
	SPACEINVADERS_API UMySubscribers(const UMySubscribers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEINVADERS_API, UMySubscribers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySubscribers); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySubscribers)


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMySubscribers(); \
	friend struct Z_Construct_UClass_UMySubscribers_Statics; \
public: \
	DECLARE_CLASS(UMySubscribers, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SpaceInvaders"), SPACEINVADERS_API) \
	DECLARE_SERIALIZER(UMySubscribers)


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_GENERATED_UINTERFACE_BODY() \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_GENERATED_UINTERFACE_BODY() \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMySubscribers() {} \
public: \
	typedef UMySubscribers UClassType; \
	typedef IMySubscribers ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMySubscribers() {} \
public: \
	typedef UMySubscribers UClassType; \
	typedef IMySubscribers ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_10_PROLOG
#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_RPC_WRAPPERS \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_SPARSE_DATA \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpaceInvaders_MySubscribers_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERS_API UClass* StaticClass<class UMySubscribers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpaceInvaders_MySubscribers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
