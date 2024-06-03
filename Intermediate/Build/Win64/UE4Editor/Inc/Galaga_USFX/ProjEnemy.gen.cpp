// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProjEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjEnemy() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjEnemy_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProjEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjEnemy::execNotifyHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_UBOOL(Z_Param_bSelfMoved);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjEnemy::execOnHit13)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit13(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AProjEnemy::StaticRegisterNativesAProjEnemy()
	{
		UClass* Class = AProjEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyHit", &AProjEnemy::execNotifyHit },
			{ "OnHit13", &AProjEnemy::execOnHit13 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics
	{
		struct ProjEnemy_eventNotifyHit_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static void NewProp_bSelfMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_OtherComp_MetaData)) };
	void Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
	{
		((ProjEnemy_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProjEnemy_eventNotifyHit_Parms), &Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_MyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_bSelfMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjEnemy, nullptr, "NotifyHit", nullptr, nullptr, sizeof(ProjEnemy_eventNotifyHit_Parms), Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjEnemy_NotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjEnemy_NotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjEnemy_OnHit13_Statics
	{
		struct ProjEnemy_eventOnHit13_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventOnHit13_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventOnHit13_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventOnHit13_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventOnHit13_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjEnemy_eventOnHit13_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjEnemy, nullptr, "OnHit13", nullptr, nullptr, sizeof(ProjEnemy_eventOnHit13_Parms), Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjEnemy_OnHit13()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjEnemy_OnHit13_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjEnemy_NoRegister()
	{
		return AProjEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AProjEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyecEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyecEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjEnemy_NotifyHit, "NotifyHit" }, // 3328872648
		{ &Z_Construct_UFunction_AProjEnemy_OnHit13, "OnHit13" }, // 3228019590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjEnemy.h" },
		{ "ModuleRelativePath", "ProjEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjEnemy_Statics::NewProp_ProyecEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "// Sets default values for this actor's properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjEnemy.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjEnemy_Statics::NewProp_ProyecEnemy = { "ProyecEnemy", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjEnemy, ProyecEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjEnemy_Statics::NewProp_ProyecEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjEnemy_Statics::NewProp_ProyecEnemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjEnemy_Statics::NewProp_ProyecEnemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjEnemy_Statics::ClassParams = {
		&AProjEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjEnemy, 657643661);
	template<> GALAGA_USFX_API UClass* StaticClass<AProjEnemy>()
	{
		return AProjEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjEnemy(Z_Construct_UClass_AProjEnemy, &AProjEnemy::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProjEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
