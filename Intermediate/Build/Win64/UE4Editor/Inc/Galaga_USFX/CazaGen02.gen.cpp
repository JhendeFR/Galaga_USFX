// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CazaGen02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCazaGen02() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACazaGen02_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACazaGen02();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ACazaGen02::StaticRegisterNativesACazaGen02()
	{
	}
	UClass* Z_Construct_UClass_ACazaGen02_NoRegister()
	{
		return ACazaGen02::StaticClass();
	}
	struct Z_Construct_UClass_ACazaGen02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BombDist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACazaGen02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACazaGen02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CazaGen02.h" },
		{ "ModuleRelativePath", "CazaGen02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACazaGen02_Statics::NewProp_BombDist_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "CazaGen02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACazaGen02_Statics::NewProp_BombDist = { "BombDist", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACazaGen02, BombDist), METADATA_PARAMS(Z_Construct_UClass_ACazaGen02_Statics::NewProp_BombDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACazaGen02_Statics::NewProp_BombDist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACazaGen02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACazaGen02_Statics::NewProp_BombDist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACazaGen02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACazaGen02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACazaGen02_Statics::ClassParams = {
		&ACazaGen02::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACazaGen02_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACazaGen02_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACazaGen02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACazaGen02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACazaGen02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACazaGen02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACazaGen02, 447218537);
	template<> GALAGA_USFX_API UClass* StaticClass<ACazaGen02>()
	{
		return ACazaGen02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACazaGen02(Z_Construct_UClass_ACazaGen02, &ACazaGen02::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACazaGen02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACazaGen02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
