// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ObservadorNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObservadorNotify() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AObservadorNotify_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AObservadorNotify();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AObservadorNotify::StaticRegisterNativesAObservadorNotify()
	{
	}
	UClass* Z_Construct_UClass_AObservadorNotify_NoRegister()
	{
		return AObservadorNotify::StaticClass();
	}
	struct Z_Construct_UClass_AObservadorNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observadores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observadores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Observadores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObservadorNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObservadorNotify_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObservadorNotify.h" },
		{ "ModuleRelativePath", "ObservadorNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores_Inner = { "Observadores", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores_MetaData[] = {
		{ "Category", "Publicador Observer" },
		{ "ModuleRelativePath", "ObservadorNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores = { "Observadores", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObservadorNotify, Observadores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObservadorNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObservadorNotify_Statics::NewProp_Observadores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObservadorNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObservadorNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObservadorNotify_Statics::ClassParams = {
		&AObservadorNotify::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObservadorNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObservadorNotify_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObservadorNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObservadorNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObservadorNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObservadorNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObservadorNotify, 4034731850);
	template<> GALAGA_USFX_API UClass* StaticClass<AObservadorNotify>()
	{
		return AObservadorNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObservadorNotify(Z_Construct_UClass_AObservadorNotify, &AObservadorNotify::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AObservadorNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObservadorNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
