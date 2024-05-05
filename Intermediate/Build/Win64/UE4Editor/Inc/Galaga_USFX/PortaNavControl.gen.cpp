// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/PortaNavControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortaNavControl() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_APortaNavControl_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_APortaNavControl();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void APortaNavControl::StaticRegisterNativesAPortaNavControl()
	{
	}
	UClass* Z_Construct_UClass_APortaNavControl_NoRegister()
	{
		return APortaNavControl::StaticClass();
	}
	struct Z_Construct_UClass_APortaNavControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortaNavControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortaNavControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortaNavControl.h" },
		{ "ModuleRelativePath", "PortaNavControl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortaNavControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortaNavControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortaNavControl_Statics::ClassParams = {
		&APortaNavControl::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APortaNavControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortaNavControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortaNavControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortaNavControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortaNavControl, 4054370799);
	template<> GALAGA_USFX_API UClass* StaticClass<APortaNavControl>()
	{
		return APortaNavControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortaNavControl(Z_Construct_UClass_APortaNavControl, &APortaNavControl::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("APortaNavControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortaNavControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
