// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NavEstrategica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavEstrategica() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANavEstrategica_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANavEstrategica();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANavEstrategica::StaticRegisterNativesANavEstrategica()
	{
	}
	UClass* Z_Construct_UClass_ANavEstrategica_NoRegister()
	{
		return ANavEstrategica::StaticClass();
	}
	struct Z_Construct_UClass_ANavEstrategica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavEstMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavEstMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavEstrategica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavEstrategica_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavEstrategica.h" },
		{ "ModuleRelativePath", "NavEstrategica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavEstrategica_Statics::NewProp_NavEstMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NavEstrategica.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavEstrategica_Statics::NewProp_NavEstMesh = { "NavEstMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavEstrategica, NavEstMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavEstrategica_Statics::NewProp_NavEstMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavEstrategica_Statics::NewProp_NavEstMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavEstrategica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavEstrategica_Statics::NewProp_NavEstMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavEstrategica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavEstrategica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavEstrategica_Statics::ClassParams = {
		&ANavEstrategica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavEstrategica_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavEstrategica_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavEstrategica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavEstrategica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavEstrategica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavEstrategica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavEstrategica, 11186436);
	template<> GALAGA_USFX_API UClass* StaticClass<ANavEstrategica>()
	{
		return ANavEstrategica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavEstrategica(Z_Construct_UClass_ANavEstrategica, &ANavEstrategica::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANavEstrategica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavEstrategica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
