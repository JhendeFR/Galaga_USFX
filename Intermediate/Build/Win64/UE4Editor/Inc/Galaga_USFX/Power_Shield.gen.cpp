// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Power_Shield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Shield() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_APower_Shield_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_APower_Shield();
	GALAGA_USFX_API UClass* Z_Construct_UClass_APower_Up();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void APower_Shield::StaticRegisterNativesAPower_Shield()
	{
	}
	UClass* Z_Construct_UClass_APower_Shield_NoRegister()
	{
		return APower_Shield::StaticClass();
	}
	struct Z_Construct_UClass_APower_Shield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Shield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APower_Up,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Shield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Power_Shield.h" },
		{ "ModuleRelativePath", "Power_Shield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Shield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Shield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Shield_Statics::ClassParams = {
		&APower_Shield::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APower_Shield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APower_Shield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Shield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Shield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Shield, 3301750951);
	template<> GALAGA_USFX_API UClass* StaticClass<APower_Shield>()
	{
		return APower_Shield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Shield(Z_Construct_UClass_APower_Shield, &APower_Shield::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("APower_Shield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Shield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
