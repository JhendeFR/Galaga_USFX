// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/FacObsBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacObsBuild() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacObsBuild_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacObsBuild();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AFacObsBuild::StaticRegisterNativesAFacObsBuild()
	{
	}
	UClass* Z_Construct_UClass_AFacObsBuild_NoRegister()
	{
		return AFacObsBuild::StaticClass();
	}
	struct Z_Construct_UClass_AFacObsBuild_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacObsBuild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacObsBuild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacObsBuild.h" },
		{ "ModuleRelativePath", "FacObsBuild.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacObsBuild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacObsBuild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacObsBuild_Statics::ClassParams = {
		&AFacObsBuild::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacObsBuild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacObsBuild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacObsBuild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacObsBuild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacObsBuild, 215085697);
	template<> GALAGA_USFX_API UClass* StaticClass<AFacObsBuild>()
	{
		return AFacObsBuild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacObsBuild(Z_Construct_UClass_AFacObsBuild, &AFacObsBuild::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AFacObsBuild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacObsBuild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
