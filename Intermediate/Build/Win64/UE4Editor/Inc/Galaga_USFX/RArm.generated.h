// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_RArm_generated_h
#error "RArm.generated.h already included, missing '#pragma once' in RArm.h"
#endif
#define GALAGA_USFX_RArm_generated_h

#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit);


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit);


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARArm(); \
	friend struct Z_Construct_UClass_ARArm_Statics; \
public: \
	DECLARE_CLASS(ARArm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(ARArm)


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARArm(); \
	friend struct Z_Construct_UClass_ARArm_Statics; \
public: \
	DECLARE_CLASS(ARArm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(ARArm)


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARArm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARArm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARArm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARArm(ARArm&&); \
	NO_API ARArm(const ARArm&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARArm(ARArm&&); \
	NO_API ARArm(const ARArm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARArm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARArm)


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_Source_Galaga_USFX_RArm_h_9_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_INCLASS \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_RArm_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_RArm_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class ARArm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_RArm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
