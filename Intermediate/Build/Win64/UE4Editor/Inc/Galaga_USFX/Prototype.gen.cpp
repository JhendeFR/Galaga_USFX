// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Prototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UPrototype_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UPrototype();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UPrototype::StaticRegisterNativesUPrototype()
	{
	}
	UClass* Z_Construct_UClass_UPrototype_NoRegister()
	{
		return UPrototype::StaticClass();
	}
	struct Z_Construct_UClass_UPrototype_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrototype_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrototype_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Prototype.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrototype_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPrototype>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrototype_Statics::ClassParams = {
		&UPrototype::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPrototype_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrototype_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrototype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrototype_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrototype, 4187357644);
	template<> GALAGA_USFX_API UClass* StaticClass<UPrototype>()
	{
		return UPrototype::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrototype(Z_Construct_UClass_UPrototype, &UPrototype::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UPrototype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrototype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
