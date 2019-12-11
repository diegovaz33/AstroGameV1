// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidsGame/ParentAsteroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentAsteroid() {}
// Cross Module References
	ASTEROIDSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FAsteroidsInfoStruct();
	UPackage* Z_Construct_UPackage__Script_AsteroidsGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentAsteroid_NoRegister();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_AParentAsteroid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAsteroidsInfoStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTEROIDSGAME_API uint32 Get_Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsteroidsInfoStruct, Z_Construct_UPackage__Script_AsteroidsGame(), TEXT("AsteroidsInfoStruct"), sizeof(FAsteroidsInfoStruct), Get_Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Hash());
	}
	return Singleton;
}
template<> ASTEROIDSGAME_API UScriptStruct* StaticStruct<FAsteroidsInfoStruct>()
{
	return FAsteroidsInfoStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAsteroidsInfoStruct(FAsteroidsInfoStruct::StaticStruct, TEXT("/Script/AsteroidsGame"), TEXT("AsteroidsInfoStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AsteroidsGame_StaticRegisterNativesFAsteroidsInfoStruct
{
	FScriptStruct_AsteroidsGame_StaticRegisterNativesFAsteroidsInfoStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AsteroidsInfoStruct")),new UScriptStruct::TCppStructOps<FAsteroidsInfoStruct>);
	}
} ScriptStruct_AsteroidsGame_StaticRegisterNativesFAsteroidsInfoStruct;
	struct Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Max_Children;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Min_Children;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsteroidsInfoStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_HP_MetaData[] = {
		{ "Category", "AsteroidsInfoStruct" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_HP = { "Max_HP", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAsteroidsInfoStruct, Max_HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_HP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_Children_MetaData[] = {
		{ "Category", "AsteroidsInfoStruct" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_Children = { "Max_Children", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAsteroidsInfoStruct, Max_Children), METADATA_PARAMS(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_Children_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_Children_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Min_Children_MetaData[] = {
		{ "Category", "AsteroidsInfoStruct" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Min_Children = { "Min_Children", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAsteroidsInfoStruct, Min_Children), METADATA_PARAMS(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Min_Children_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Min_Children_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AsteroidsInfoStruct" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAsteroidsInfoStruct, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Max_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Min_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AsteroidsInfoStruct",
		sizeof(FAsteroidsInfoStruct),
		alignof(FAsteroidsInfoStruct),
		Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAsteroidsInfoStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AsteroidsGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AsteroidsInfoStruct"), sizeof(FAsteroidsInfoStruct), Get_Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAsteroidsInfoStruct_Hash() { return 3554149473U; }
	void AParentAsteroid::StaticRegisterNativesAParentAsteroid()
	{
	}
	UClass* Z_Construct_UClass_AParentAsteroid_NoRegister()
	{
		return AParentAsteroid::StaticClass();
	}
	struct Z_Construct_UClass_AParentAsteroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentAsteroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentAsteroid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParentAsteroid.h" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentAsteroid_Statics::NewProp_RotationMaxSpeed_MetaData[] = {
		{ "Category", "ParentAsteroid" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentAsteroid_Statics::NewProp_RotationMaxSpeed = { "RotationMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentAsteroid, RotationMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_RotationMaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_RotationMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentAsteroid_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ParentAsteroid" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentAsteroid_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentAsteroid, Speed), METADATA_PARAMS(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentAsteroid_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "ParentAsteroid" },
		{ "Comment", "/*\n\x09* Depending on the Asteroid's level, the HP will be different. This is the Current HP of the Asteroid as the \n\x09* MAX HP can be calculated using the Data Table and the Level of the Asteroid.\n\x09*/" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
		{ "ToolTip", "* Depending on the Asteroid's level, the HP will be different. This is the Current HP of the Asteroid as the\n* MAX HP can be calculated using the Data Table and the Level of the Asteroid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentAsteroid_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentAsteroid, HP), METADATA_PARAMS(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentAsteroid_Statics::NewProp_AsteroidMesh_MetaData[] = {
		{ "Category", "ParentAsteroid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParentAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentAsteroid_Statics::NewProp_AsteroidMesh = { "AsteroidMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentAsteroid, AsteroidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_AsteroidMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::NewProp_AsteroidMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParentAsteroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentAsteroid_Statics::NewProp_RotationMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentAsteroid_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentAsteroid_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentAsteroid_Statics::NewProp_AsteroidMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParentAsteroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParentAsteroid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParentAsteroid_Statics::ClassParams = {
		&AParentAsteroid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParentAsteroid_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParentAsteroid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParentAsteroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParentAsteroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParentAsteroid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParentAsteroid, 1869434368);
	template<> ASTEROIDSGAME_API UClass* StaticClass<AParentAsteroid>()
	{
		return AParentAsteroid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParentAsteroid(Z_Construct_UClass_AParentAsteroid, &AParentAsteroid::StaticClass, TEXT("/Script/AsteroidsGame"), TEXT("AParentAsteroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParentAsteroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
