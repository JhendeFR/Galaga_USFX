// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EspiaGen01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspiaGen01() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspiaGen01_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspiaGen01();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEspiaGen01::StaticRegisterNativesAEspiaGen01()
	{
	}
	UClass* Z_Construct_UClass_AEspiaGen01_NoRegister()
	{
		return AEspiaGen01::StaticClass();
	}
	struct Z_Construct_UClass_AEspiaGen01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspiaGen01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspiaGen01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EspiaGen01.h" },
		{ "ModuleRelativePath", "EspiaGen01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspiaGen01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspiaGen01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspiaGen01_Statics::ClassParams = {
		&AEspiaGen01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspiaGen01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspiaGen01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspiaGen01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspiaGen01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspiaGen01, 1298229652);
	template<> GALAGA_USFX_API UClass* StaticClass<AEspiaGen01>()
	{
		return AEspiaGen01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspiaGen01(Z_Construct_UClass_AEspiaGen01, &AEspiaGen01::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEspiaGen01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspiaGen01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
