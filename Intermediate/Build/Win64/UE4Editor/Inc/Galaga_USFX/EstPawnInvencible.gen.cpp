// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EstPawnInvencible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstPawnInvencible() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEstPawnInvencible_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEstPawnInvencible();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UEstadosP_NoRegister();
// End Cross Module References
	void AEstPawnInvencible::StaticRegisterNativesAEstPawnInvencible()
	{
	}
	UClass* Z_Construct_UClass_AEstPawnInvencible_NoRegister()
	{
		return AEstPawnInvencible::StaticClass();
	}
	struct Z_Construct_UClass_AEstPawnInvencible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstPawnInvencible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstPawnInvencible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstPawnInvencible.h" },
		{ "ModuleRelativePath", "EstPawnInvencible.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstPawnInvencible_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "PawnInvisible" },
		{ "ModuleRelativePath", "EstPawnInvencible.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstPawnInvencible_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstPawnInvencible, Pawn), Z_Construct_UClass_AGalaga_USFXPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstPawnInvencible_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstPawnInvencible_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstPawnInvencible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstPawnInvencible_Statics::NewProp_Pawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstPawnInvencible_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadosP_NoRegister, (int32)VTABLE_OFFSET(AEstPawnInvencible, IEstadosP), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstPawnInvencible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstPawnInvencible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstPawnInvencible_Statics::ClassParams = {
		&AEstPawnInvencible::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstPawnInvencible_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstPawnInvencible_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstPawnInvencible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstPawnInvencible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstPawnInvencible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstPawnInvencible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstPawnInvencible, 769956960);
	template<> GALAGA_USFX_API UClass* StaticClass<AEstPawnInvencible>()
	{
		return AEstPawnInvencible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstPawnInvencible(Z_Construct_UClass_AEstPawnInvencible, &AEstPawnInvencible::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEstPawnInvencible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstPawnInvencible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
