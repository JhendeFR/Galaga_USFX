// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_Observer_generated_h
#error "Observer.generated.h already included, missing '#pragma once' in Observer.h"
#endif
#define GALAGA_USFX_Observer_generated_h

#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_RPC_WRAPPERS
#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UObserver(UObserver&&); \
	GALAGA_USFX_API UObserver(const UObserver&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UObserver(UObserver&&); \
	GALAGA_USFX_API UObserver(const UObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver)


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObserver(); \
	friend struct Z_Construct_UClass_UObserver_Statics; \
public: \
	DECLARE_CLASS(UObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(UObserver)


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_11_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_Observer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Observer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Observer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
