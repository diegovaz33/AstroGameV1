// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDSGAME_StaticCamera_generated_h
#error "StaticCamera.generated.h already included, missing '#pragma once' in StaticCamera.h"
#endif
#define ASTEROIDSGAME_StaticCamera_generated_h

#define Astros_Source_AsteroidsGame_StaticCamera_h_13_RPC_WRAPPERS
#define Astros_Source_AsteroidsGame_StaticCamera_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Astros_Source_AsteroidsGame_StaticCamera_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStaticCamera(); \
	friend struct Z_Construct_UClass_AStaticCamera_Statics; \
public: \
	DECLARE_CLASS(AStaticCamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AStaticCamera)


#define Astros_Source_AsteroidsGame_StaticCamera_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStaticCamera(); \
	friend struct Z_Construct_UClass_AStaticCamera_Statics; \
public: \
	DECLARE_CLASS(AStaticCamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(AStaticCamera)


#define Astros_Source_AsteroidsGame_StaticCamera_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticCamera(AStaticCamera&&); \
	NO_API AStaticCamera(const AStaticCamera&); \
public:


#define Astros_Source_AsteroidsGame_StaticCamera_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticCamera(AStaticCamera&&); \
	NO_API AStaticCamera(const AStaticCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStaticCamera)


#define Astros_Source_AsteroidsGame_StaticCamera_h_13_PRIVATE_PROPERTY_OFFSET
#define Astros_Source_AsteroidsGame_StaticCamera_h_10_PROLOG
#define Astros_Source_AsteroidsGame_StaticCamera_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_RPC_WRAPPERS \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_INCLASS \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astros_Source_AsteroidsGame_StaticCamera_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_INCLASS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_StaticCamera_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class AStaticCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astros_Source_AsteroidsGame_StaticCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
