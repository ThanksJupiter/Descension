// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Descension/Camera/DSCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDSCamera() {}
// Cross Module References
	DESCENSION_API UClass* Z_Construct_UClass_ADSCamera_NoRegister();
	DESCENSION_API UClass* Z_Construct_UClass_ADSCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Descension();
	DESCENSION_API UFunction* Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ADSCamera::StaticRegisterNativesADSCamera()
	{
		UClass* Class = ADSCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleUpdateZOffset", &ADSCamera::execToggleUpdateZOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADSCamera, nullptr, "ToggleUpdateZOffset", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADSCamera_NoRegister()
	{
		return ADSCamera::StaticClass();
	}
	struct Z_Construct_UClass_ADSCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMoveSpeedIncreaseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMoveSpeedIncreaseMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseSpeedZThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncreaseSpeedZThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustHeightOnLanding_MetaData[];
#endif
		static void NewProp_bAdjustHeightOnLanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustHeightOnLanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADSCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Descension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADSCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADSCamera_ToggleUpdateZOffset, "ToggleUpdateZOffset" }, // 3047770042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/DSCamera.h" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_MaximumVerticalOffset_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_MaximumVerticalOffset = { "MaximumVerticalOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, MaximumVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_MaximumVerticalOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_MaximumVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_HorizontalMoveSpeed_MetaData[] = {
		{ "Category", "Horizontal Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_HorizontalMoveSpeed = { "HorizontalMoveSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, HorizontalMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_HorizontalMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_HorizontalMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeedIncreaseMultiplier_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeedIncreaseMultiplier = { "VerticalMoveSpeedIncreaseMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, VerticalMoveSpeedIncreaseMultiplier), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeedIncreaseMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeedIncreaseMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_IncreaseSpeedZThreshold_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_IncreaseSpeedZThreshold = { "IncreaseSpeedZThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, IncreaseSpeedZThreshold), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_IncreaseSpeedZThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_IncreaseSpeedZThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeed_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeed = { "VerticalMoveSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, VerticalMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_CameraZOffset_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_CameraZOffset = { "CameraZOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, CameraZOffset), METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_CameraZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_CameraZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding_MetaData[] = {
		{ "Category", "Vertical Movement" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	void Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding_SetBit(void* Obj)
	{
		((ADSCamera*)Obj)->bAdjustHeightOnLanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding = { "bAdjustHeightOnLanding", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADSCamera), &Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	void Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((ADSCamera*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADSCamera), &Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "DSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADSCamera_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "DSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/DSCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADSCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADSCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADSCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_MaximumVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_HorizontalMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeedIncreaseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_IncreaseSpeedZThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_VerticalMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_CameraZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_bAdjustHeightOnLanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADSCamera_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADSCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADSCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADSCamera_Statics::ClassParams = {
		&ADSCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADSCamera_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADSCamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADSCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADSCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADSCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADSCamera, 2737475913);
	template<> DESCENSION_API UClass* StaticClass<ADSCamera>()
	{
		return ADSCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADSCamera(Z_Construct_UClass_ADSCamera, &ADSCamera::StaticClass, TEXT("/Script/Descension"), TEXT("ADSCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADSCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
