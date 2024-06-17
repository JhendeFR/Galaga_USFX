// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ControlEscuadFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlEscuadFacade() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AControlEscuadFacade_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AControlEscuadFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AControlEscuadFacade::execNaveDestruida)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NaveDestruida(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void AControlEscuadFacade::StaticRegisterNativesAControlEscuadFacade()
	{
		UClass* Class = AControlEscuadFacade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NaveDestruida", &AControlEscuadFacade::execNaveDestruida },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics
	{
		struct ControlEscuadFacade_eventNaveDestruida_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlEscuadFacade_eventNaveDestruida_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ControlEscuadFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlEscuadFacade, nullptr, "NaveDestruida", nullptr, nullptr, sizeof(ControlEscuadFacade_eventNaveDestruida_Parms), Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AControlEscuadFacade_NoRegister()
	{
		return AControlEscuadFacade::StaticClass();
	}
	struct Z_Construct_UClass_AControlEscuadFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlEscuadFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AControlEscuadFacade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AControlEscuadFacade_NaveDestruida, "NaveDestruida" }, // 3915011162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlEscuadFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControlEscuadFacade.h" },
		{ "ModuleRelativePath", "ControlEscuadFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlEscuadFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlEscuadFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControlEscuadFacade_Statics::ClassParams = {
		&AControlEscuadFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControlEscuadFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControlEscuadFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlEscuadFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControlEscuadFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControlEscuadFacade, 2944031570);
	template<> GALAGA_USFX_API UClass* StaticClass<AControlEscuadFacade>()
	{
		return AControlEscuadFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControlEscuadFacade(Z_Construct_UClass_AControlEscuadFacade, &AControlEscuadFacade::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AControlEscuadFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlEscuadFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
