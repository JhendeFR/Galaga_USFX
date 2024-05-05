// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/RVel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVel() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ARVel_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ARVel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARVel::StaticRegisterNativesARVel()
	{
	}
	UClass* Z_Construct_UClass_ARVel_NoRegister()
	{
		return ARVel::StaticClass();
	}
	struct Z_Construct_UClass_ARVel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RVel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARVel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARVel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RVel.h" },
		{ "ModuleRelativePath", "RVel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARVel_Statics::NewProp_RVel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RVel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARVel_Statics::NewProp_RVel = { "RVel", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARVel, RVel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARVel_Statics::NewProp_RVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARVel_Statics::NewProp_RVel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARVel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARVel_Statics::NewProp_RVel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARVel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARVel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARVel_Statics::ClassParams = {
		&ARVel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARVel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARVel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARVel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARVel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARVel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARVel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARVel, 561776440);
	template<> GALAGA_USFX_API UClass* StaticClass<ARVel>()
	{
		return ARVel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARVel(Z_Construct_UClass_ARVel, &ARVel::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ARVel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARVel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
