// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESCENSION_DSCamera_generated_h
#error "DSCamera.generated.h already included, missing '#pragma once' in DSCamera.h"
#endif
#define DESCENSION_DSCamera_generated_h

#define Descension_Source_Descension_Camera_DSCamera_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleUpdateZOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleUpdateZOffset(); \
		P_NATIVE_END; \
	}


#define Descension_Source_Descension_Camera_DSCamera_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleUpdateZOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleUpdateZOffset(); \
		P_NATIVE_END; \
	}


#define Descension_Source_Descension_Camera_DSCamera_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADSCamera(); \
	friend struct Z_Construct_UClass_ADSCamera_Statics; \
public: \
	DECLARE_CLASS(ADSCamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Descension"), NO_API) \
	DECLARE_SERIALIZER(ADSCamera)


#define Descension_Source_Descension_Camera_DSCamera_h_9_INCLASS \
private: \
	static void StaticRegisterNativesADSCamera(); \
	friend struct Z_Construct_UClass_ADSCamera_Statics; \
public: \
	DECLARE_CLASS(ADSCamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Descension"), NO_API) \
	DECLARE_SERIALIZER(ADSCamera)


#define Descension_Source_Descension_Camera_DSCamera_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADSCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADSCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADSCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADSCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADSCamera(ADSCamera&&); \
	NO_API ADSCamera(const ADSCamera&); \
public:


#define Descension_Source_Descension_Camera_DSCamera_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADSCamera(ADSCamera&&); \
	NO_API ADSCamera(const ADSCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADSCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADSCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADSCamera)


#define Descension_Source_Descension_Camera_DSCamera_h_9_PRIVATE_PROPERTY_OFFSET
#define Descension_Source_Descension_Camera_DSCamera_h_6_PROLOG
#define Descension_Source_Descension_Camera_DSCamera_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Descension_Source_Descension_Camera_DSCamera_h_9_PRIVATE_PROPERTY_OFFSET \
	Descension_Source_Descension_Camera_DSCamera_h_9_RPC_WRAPPERS \
	Descension_Source_Descension_Camera_DSCamera_h_9_INCLASS \
	Descension_Source_Descension_Camera_DSCamera_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Descension_Source_Descension_Camera_DSCamera_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Descension_Source_Descension_Camera_DSCamera_h_9_PRIVATE_PROPERTY_OFFSET \
	Descension_Source_Descension_Camera_DSCamera_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Descension_Source_Descension_Camera_DSCamera_h_9_INCLASS_NO_PURE_DECLS \
	Descension_Source_Descension_Camera_DSCamera_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESCENSION_API UClass* StaticClass<class ADSCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Descension_Source_Descension_Camera_DSCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
