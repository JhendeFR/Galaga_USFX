// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ReabGen01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReabGen01() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AReabGen01_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AReabGen01();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveReab();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AReabGen01::StaticRegisterNativesAReabGen01()
	{
	}
	UClass* Z_Construct_UClass_AReabGen01_NoRegister()
	{
		return AReabGen01::StaticClass();
	}
	struct Z_Construct_UClass_AReabGen01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReabGen01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveReab,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReabGen01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ReabGen01.h" },
		{ "ModuleRelativePath", "ReabGen01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReabGen01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReabGen01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReabGen01_Statics::ClassParams = {
		&AReabGen01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReabGen01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReabGen01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReabGen01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReabGen01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReabGen01, 2411992099);
	template<> GALAGA_USFX_API UClass* StaticClass<AReabGen01>()
	{
		return AReabGen01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReabGen01(Z_Construct_UClass_AReabGen01, &AReabGen01::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AReabGen01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReabGen01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
