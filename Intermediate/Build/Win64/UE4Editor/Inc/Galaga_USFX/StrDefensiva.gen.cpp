// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StrDefensiva.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrDefensiva() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrDefensiva_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStrDefensiva();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategy_NoRegister();
// End Cross Module References
	void AStrDefensiva::StaticRegisterNativesAStrDefensiva()
	{
	}
	UClass* Z_Construct_UClass_AStrDefensiva_NoRegister()
	{
		return AStrDefensiva::StaticClass();
	}
	struct Z_Construct_UClass_AStrDefensiva_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrDefensiva_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrDefensiva_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrDefensiva.h" },
		{ "ModuleRelativePath", "StrDefensiva.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrDefensiva_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrDefensiva, IStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrDefensiva_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrDefensiva>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrDefensiva_Statics::ClassParams = {
		&AStrDefensiva::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrDefensiva_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrDefensiva_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrDefensiva()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrDefensiva_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrDefensiva, 90167256);
	template<> GALAGA_USFX_API UClass* StaticClass<AStrDefensiva>()
	{
		return AStrDefensiva::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrDefensiva(Z_Construct_UClass_AStrDefensiva, &AStrDefensiva::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStrDefensiva"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrDefensiva);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
