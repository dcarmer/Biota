// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNoise() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UPNoise_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UPNoise();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UPNoise_ConstructPNoise();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UPNoise_GetFractalNoiseAt();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UPNoise_GetNoiseAt();
// End Cross Module References
	void UPNoise::StaticRegisterNativesUPNoise()
	{
		UClass* Class = UPNoise::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructPNoise", (Native)&UPNoise::execConstructPNoise },
			{ "GetFractalNoiseAt", (Native)&UPNoise::execGetFractalNoiseAt },
			{ "GetNoiseAt", (Native)&UPNoise::execGetNoiseAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPNoise_ConstructPNoise()
	{
		struct PNoise_eventConstructPNoise_Parms
		{
			int32 seed;
			UObject* Outer;
			UPNoise* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PNoise_eventConstructPNoise_Parms, ReturnValue), Z_Construct_UClass_UPNoise_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer = { UE4CodeGen_Private::EPropertyClass::Object, "Outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventConstructPNoise_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed = { UE4CodeGen_Private::EPropertyClass::Int, "seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventConstructPNoise_Parms, seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Noise" },
				{ "DisplayName", "ConstructPNoise" },
				{ "ModuleRelativePath", "PNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPNoise, "ConstructPNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PNoise_eventConstructPNoise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPNoise_GetFractalNoiseAt()
	{
		struct PNoise_eventGetFractalNoiseAt_Parms
		{
			float x;
			float y;
			float persistence;
			int32 octives;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetFractalNoiseAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_octives = { UE4CodeGen_Private::EPropertyClass::Int, "octives", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetFractalNoiseAt_Parms, octives), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_persistence = { UE4CodeGen_Private::EPropertyClass::Float, "persistence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetFractalNoiseAt_Parms, persistence), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetFractalNoiseAt_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetFractalNoiseAt_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_octives,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_persistence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Noise" },
				{ "DisplayName", "GetFractalNoiseAt" },
				{ "ModuleRelativePath", "PNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPNoise, "GetFractalNoiseAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PNoise_eventGetFractalNoiseAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPNoise_GetNoiseAt()
	{
		struct PNoise_eventGetNoiseAt_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetNoiseAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetNoiseAt_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PNoise_eventGetNoiseAt_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Noise" },
				{ "DisplayName", "GetNoiseAt" },
				{ "ModuleRelativePath", "PNoise.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPNoise, "GetNoiseAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PNoise_eventGetNoiseAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPNoise_NoRegister()
	{
		return UPNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UPNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPNoise_ConstructPNoise, "ConstructPNoise" }, // 1667875850
				{ &Z_Construct_UFunction_UPNoise_GetFractalNoiseAt, "GetFractalNoiseAt" }, // 3747959049
				{ &Z_Construct_UFunction_UPNoise_GetNoiseAt, "GetNoiseAt" }, // 3884609652
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "PNoise.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "PNoise.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPNoise::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPNoise, 4093938330);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPNoise(Z_Construct_UClass_UPNoise, &UPNoise::StaticClass, TEXT("/Script/MyProject"), TEXT("UPNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
