// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESCENSION_DescensionCharacter_generated_h
#error "DescensionCharacter.generated.h already included, missing '#pragma once' in DescensionCharacter.h"
#endif
#define DESCENSION_DescensionCharacter_generated_h

#define Descension_Source_Descension_DescensionCharacter_h_12_RPC_WRAPPERS
#define Descension_Source_Descension_DescensionCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Descension_Source_Descension_DescensionCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADescensionCharacter(); \
	friend struct Z_Construct_UClass_ADescensionCharacter_Statics; \
public: \
	DECLARE_CLASS(ADescensionCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Descension"), NO_API) \
	DECLARE_SERIALIZER(ADescensionCharacter)


#define Descension_Source_Descension_DescensionCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADescensionCharacter(); \
	friend struct Z_Construct_UClass_ADescensionCharacter_Statics; \
public: \
	DECLARE_CLASS(ADescensionCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Descension"), NO_API) \
	DECLARE_SERIALIZER(ADescensionCharacter)


#define Descension_Source_Descension_DescensionCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADescensionCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADescensionCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADescensionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADescensionCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADescensionCharacter(ADescensionCharacter&&); \
	NO_API ADescensionCharacter(const ADescensionCharacter&); \
public:


#define Descension_Source_Descension_DescensionCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADescensionCharacter(ADescensionCharacter&&); \
	NO_API ADescensionCharacter(const ADescensionCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADescensionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADescensionCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADescensionCharacter)


#define Descension_Source_Descension_DescensionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADescensionCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADescensionCharacter, FollowCamera); }


#define Descension_Source_Descension_DescensionCharacter_h_9_PROLOG
#define Descension_Source_Descension_DescensionCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Descension_Source_Descension_DescensionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Descension_Source_Descension_DescensionCharacter_h_12_RPC_WRAPPERS \
	Descension_Source_Descension_DescensionCharacter_h_12_INCLASS \
	Descension_Source_Descension_DescensionCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Descension_Source_Descension_DescensionCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Descension_Source_Descension_DescensionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Descension_Source_Descension_DescensionCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Descension_Source_Descension_DescensionCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Descension_Source_Descension_DescensionCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESCENSION_API UClass* StaticClass<class ADescensionCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Descension_Source_Descension_DescensionCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
