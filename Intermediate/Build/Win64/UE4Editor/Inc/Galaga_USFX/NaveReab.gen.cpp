// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveReab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveReab() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveReab_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveReab();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveReab::StaticRegisterNativesANaveReab()
	{
	}
	UClass* Z_Construct_UClass_ANaveReab_NoRegister()
	{
		return ANaveReab::StaticClass();
	}
	struct Z_Construct_UClass_ANaveReab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveReab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveReab_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveReab.h" },
		{ "ModuleRelativePath", "NaveReab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveReab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveReab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveReab_Statics::ClassParams = {
		&ANaveReab::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveReab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveReab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveReab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveReab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveReab, 1114072780);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveReab>()
	{
		return ANaveReab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveReab(Z_Construct_UClass_ANaveReab, &ANaveReab::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveReab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveReab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
