// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NavControlInt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavControlInt() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNavControlInt_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UNavControlInt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UNavControlInt::StaticRegisterNativesUNavControlInt()
	{
	}
	UClass* Z_Construct_UClass_UNavControlInt_NoRegister()
	{
		return UNavControlInt::StaticClass();
	}
	struct Z_Construct_UClass_UNavControlInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavControlInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavControlInt_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "NavControlInt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavControlInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavControlInt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavControlInt_Statics::ClassParams = {
		&UNavControlInt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavControlInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavControlInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavControlInt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavControlInt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavControlInt, 3559393214);
	template<> GALAGA_USFX_API UClass* StaticClass<UNavControlInt>()
	{
		return UNavControlInt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavControlInt(Z_Construct_UClass_UNavControlInt, &UNavControlInt::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UNavControlInt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavControlInt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
