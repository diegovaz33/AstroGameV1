// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidsGame/ParentGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentGameInstance() {}
// Cross Module References
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_UParentGameInstance_NoRegister();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_UParentGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AsteroidsGame();
// End Cross Module References
	void UParentGameInstance::StaticRegisterNativesUParentGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UParentGameInstance_NoRegister()
	{
		return UParentGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UParentGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParentGameInstance.h" },
		{ "ModuleRelativePath", "ParentGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentGameInstance_Statics::NewProp_CameraHeight_MetaData[] = {
		{ "Category", "ParentGameInstance" },
		{ "ModuleRelativePath", "ParentGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParentGameInstance_Statics::NewProp_CameraHeight = { "CameraHeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentGameInstance, CameraHeight), METADATA_PARAMS(Z_Construct_UClass_UParentGameInstance_Statics::NewProp_CameraHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParentGameInstance_Statics::NewProp_CameraHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentGameInstance_Statics::NewProp_CameraHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParentGameInstance_Statics::ClassParams = {
		&UParentGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParentGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParentGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParentGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParentGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParentGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentGameInstance, 4280065390);
	template<> ASTEROIDSGAME_API UClass* StaticClass<UParentGameInstance>()
	{
		return UParentGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentGameInstance(Z_Construct_UClass_UParentGameInstance, &UParentGameInstance::StaticClass, TEXT("/Script/AsteroidsGame"), TEXT("UParentGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
