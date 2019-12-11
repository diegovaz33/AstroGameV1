// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDSGAME_AsteroidSpawner_generated_h
#error "AsteroidSpawner.generated.h already included, missing '#pragma once' in AsteroidSpawner.h"
#endif
#define ASTEROIDSGAME_AsteroidSpawner_generated_h

#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroidSpawner(); \
	friend struct Z_Construct_UClass_AAsteroidSpawner_Statics; \
public: \
	DECLARE_CLASS(AAsteroidSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AAsteroidSpawner)


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroidSpawner(); \
	friend struct Z_Construct_UClass_AAsteroidSpawner_Statics; \
public: \
	DECLARE_CLASS(AAsteroidSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AAsteroidSpawner)


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroidSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroidSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroidSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroidSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroidSpawner(AAsteroidSpawner&&); \
	NO_API AAsteroidSpawner(const AAsteroidSpawner&); \
public:


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroidSpawner(AAsteroidSpawner&&); \
	NO_API AAsteroidSpawner(const AAsteroidSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroidSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroidSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroidSpawner)


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_PRIVATE_PROPERTY_OFFSET
#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_11_PROLOG
#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_RPC_WRAPPERS \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_INCLASS \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_INCLASS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_AsteroidSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class AAsteroidSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astros_Source_AsteroidsGame_AsteroidSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
