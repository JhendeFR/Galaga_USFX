// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveTransp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTransp() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveTransp_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveTransp();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveTransp::StaticRegisterNativesANaveTransp()
	{
	}
	UClass* Z_Construct_UClass_ANaveTransp_NoRegister()
	{
		return ANaveTransp::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTransp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTransp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTransp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveTransp.h" },
		{ "ModuleRelativePath", "NaveTransp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTransp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTransp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTransp_Statics::ClassParams = {
		&ANaveTransp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTransp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTransp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTransp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTransp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTransp, 1979537702);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveTransp>()
	{
		return ANaveTransp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTransp(Z_Construct_UClass_ANaveTransp, &ANaveTransp::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveTransp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTransp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
