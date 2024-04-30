// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Power_Up.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Up() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_APower_Up_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_APower_Up();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APower_Up::StaticRegisterNativesAPower_Up()
	{
	}
	UClass* Z_Construct_UClass_APower_Up_NoRegister()
	{
		return APower_Up::StaticClass();
	}
	struct Z_Construct_UClass_APower_Up_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Up_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Power_Up.h" },
		{ "ModuleRelativePath", "Power_Up.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Up_Statics::NewProp_Power_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Power_Up.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APower_Up_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APower_Up, Power), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APower_Up_Statics::NewProp_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APower_Up_Statics::NewProp_Power_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APower_Up_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APower_Up_Statics::NewProp_Power,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Up_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Up>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Up_Statics::ClassParams = {
		&APower_Up::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APower_Up_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APower_Up_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Up()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Up_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Up, 2047390131);
	template<> GALAGA_USFX_API UClass* StaticClass<APower_Up>()
	{
		return APower_Up::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Up(Z_Construct_UClass_APower_Up, &APower_Up::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("APower_Up"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Up);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
