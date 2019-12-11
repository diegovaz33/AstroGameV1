// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidsGame/MyCPPBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCPPBlueprintLibrary() {}
// Cross Module References
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_UMyCPPBlueprintLibrary_NoRegister();
	ASTEROIDSGAME_API UClass* Z_Construct_UClass_UMyCPPBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AsteroidsGame();
	ASTEROIDSGAME_API UFunction* Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMyCPPBlueprintLibrary::StaticRegisterNativesUMyCPPBlueprintLibrary()
	{
		UClass* Class = UMyCPPBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInView", &UMyCPPBlueprintLibrary::execIsInView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics
	{
		struct MyCPPBlueprintLibrary_eventIsInView_Parms
		{
			AActor* Actor;
			APlayerController* ObservingView;
			bool InView;
		};
		static void NewProp_InView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InView;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObservingView;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_InView_SetBit(void* Obj)
	{
		((MyCPPBlueprintLibrary_eventIsInView_Parms*)Obj)->InView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_InView = { "InView", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyCPPBlueprintLibrary_eventIsInView_Parms), &Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_InView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_ObservingView = { "ObservingView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPBlueprintLibrary_eventIsInView_Parms, ObservingView), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPBlueprintLibrary_eventIsInView_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_InView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_ObservingView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Frustum Checker Source: https://answers.unrealengine.com/questions/65488/perform-frustum-check.html */" },
		{ "ModuleRelativePath", "MyCPPBlueprintLibrary.h" },
		{ "ToolTip", "Frustum Checker Source: https://answers.unrealengine.com/questions/65488/perform-frustum-check.html" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCPPBlueprintLibrary, nullptr, "IsInView", nullptr, nullptr, sizeof(MyCPPBlueprintLibrary_eventIsInView_Parms), Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyCPPBlueprintLibrary_NoRegister()
	{
		return UMyCPPBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCPPBlueprintLibrary_IsInView, "IsInView" }, // 1302114710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyCPPBlueprintLibrary.h" },
		{ "ModuleRelativePath", "MyCPPBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCPPBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::ClassParams = {
		&UMyCPPBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCPPBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCPPBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCPPBlueprintLibrary, 1293524440);
	template<> ASTEROIDSGAME_API UClass* StaticClass<UMyCPPBlueprintLibrary>()
	{
		return UMyCPPBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCPPBlueprintLibrary(Z_Construct_UClass_UMyCPPBlueprintLibrary, &UMyCPPBlueprintLibrary::StaticClass, TEXT("/Script/AsteroidsGame"), TEXT("UMyCPPBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCPPBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
