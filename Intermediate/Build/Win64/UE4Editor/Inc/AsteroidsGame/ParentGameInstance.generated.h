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

#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS
#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParentGameInstance(); \
	friend struct Z_Construct_UClass_UParentGameInstance_Statics; \
public: \
	DECLARE_CLASS(UParentGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UParentGameInstance)


#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUParentGameInstance(); \
	friend struct Z_Construct_UClass_UParentGameInstance_Statics; \
public: \
	DECLARE_CLASS(UParentGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AsteroidsGame"), NO_API) \
	DECLARE_SERIALIZER(UParentGameInstance)


#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_STANDARD_CONSTRUCTORS \
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


#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_ENHANCED_CONSTRUCTORS \
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


#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_12_PROLOG
#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDSGAME_API UClass* StaticClass<class UParentGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AstroGameV1_Source_AsteroidsGame_ParentGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
