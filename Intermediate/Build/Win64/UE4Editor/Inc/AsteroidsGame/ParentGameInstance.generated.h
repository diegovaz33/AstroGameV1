// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDSGAME_ParentGameInstance_generated_h
#error "ParentGameInstance.generated.h already included, missing '#pragma once' in ParentGameInstance.h"
#endif
#define ASTEROIDSGAME_ParentGameInstance_generated_h

#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS
#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParentGameInstance(); \
	friend struct Z_Construct_UClass_UParentGameInstance_Statics; \
public: \
	DECLARE_CLASS(UParentGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UParentGameInstance)


#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUParentGameInstance(); \
	friend struct Z_Construct_UClass_UParentGameInstance_Statics; \
public: \
	DECLARE_CLASS(UParentGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UParentGameInstance)


#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParentGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParentGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParentGameInstance(UParentGameInstance&&); \
	NO_API UParentGameInstance(const UParentGameInstance&); \
public:


#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParentGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParentGameInstance(UParentGameInstance&&); \
	NO_API UParentGameInstance(const UParentGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParentGameInstance)


#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Astros_Source_AsteroidsGame_ParentGameInstance_h_12_PROLOG
#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astros_Source_AsteroidsGame_ParentGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	Astros_Source_AsteroidsGame_ParentGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class UParentGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astros_Source_AsteroidsGame_ParentGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
