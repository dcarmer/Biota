// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CPP_FunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_FunctionLibrary() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UCPP_FunctionLibrary_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCPP_FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetAudioQualities();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyDistinguishedName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCopyrightNotice();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCPUName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCustomConfigProperty();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetDescription();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetGPUName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetHomepage();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetLicensingTerms();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetPrivacyPolicy();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectID();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectVersion();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetSupportContact();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SetCustomConfigProperty();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmootherStep();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothestStep();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothStep();
// End Cross Module References
	void UCPP_FunctionLibrary::StaticRegisterNativesUCPP_FunctionLibrary()
	{
		UClass* Class = UCPP_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioQualities", (Native)&UCPP_FunctionLibrary::execGetAudioQualities },
			{ "GetCompanyDistinguishedName", (Native)&UCPP_FunctionLibrary::execGetCompanyDistinguishedName },
			{ "GetCompanyName", (Native)&UCPP_FunctionLibrary::execGetCompanyName },
			{ "GetCopyrightNotice", (Native)&UCPP_FunctionLibrary::execGetCopyrightNotice },
			{ "GetCPUName", (Native)&UCPP_FunctionLibrary::execGetCPUName },
			{ "GetCustomConfigProperty", (Native)&UCPP_FunctionLibrary::execGetCustomConfigProperty },
			{ "GetDescription", (Native)&UCPP_FunctionLibrary::execGetDescription },
			{ "GetGPUName", (Native)&UCPP_FunctionLibrary::execGetGPUName },
			{ "GetHomepage", (Native)&UCPP_FunctionLibrary::execGetHomepage },
			{ "GetLicensingTerms", (Native)&UCPP_FunctionLibrary::execGetLicensingTerms },
			{ "GetPrivacyPolicy", (Native)&UCPP_FunctionLibrary::execGetPrivacyPolicy },
			{ "GetProjectID", (Native)&UCPP_FunctionLibrary::execGetProjectID },
			{ "GetProjectName", (Native)&UCPP_FunctionLibrary::execGetProjectName },
			{ "GetProjectVersion", (Native)&UCPP_FunctionLibrary::execGetProjectVersion },
			{ "GetSupportContact", (Native)&UCPP_FunctionLibrary::execGetSupportContact },
			{ "SetCustomConfigProperty", (Native)&UCPP_FunctionLibrary::execSetCustomConfigProperty },
			{ "SmootherStep", (Native)&UCPP_FunctionLibrary::execSmootherStep },
			{ "SmoothestStep", (Native)&UCPP_FunctionLibrary::execSmoothestStep },
			{ "SmoothStep", (Native)&UCPP_FunctionLibrary::execSmoothStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetAudioQualities()
	{
		struct CPP_FunctionLibrary_eventGetAudioQualities_Parms
		{
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetAudioQualities_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio Quality" },
				{ "DisplayName", "Audio Qualities(TODO)" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetAudioQualities", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetAudioQualities_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyDistinguishedName()
	{
		struct CPP_FunctionLibrary_eventGetCompanyDistinguishedName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCompanyDistinguishedName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Publisher" },
				{ "DisplayName", "Company Distinguished Name" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetCompanyDistinguishedName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetCompanyDistinguishedName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyName()
	{
		struct CPP_FunctionLibrary_eventGetCompanyName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCompanyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Publisher" },
				{ "DisplayName", "Company Name" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetCompanyName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetCompanyName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCopyrightNotice()
	{
		struct CPP_FunctionLibrary_eventGetCopyrightNotice_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCopyrightNotice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Legal" },
				{ "DisplayName", "Copyright Notice" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetCopyrightNotice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetCopyrightNotice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCPUName()
	{
		struct CPP_FunctionLibrary_eventGetCPUName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCPUName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Hardware|CPU" },
				{ "DisplayName", "CPU Name" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetCPUName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetCPUName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetCustomConfigProperty()
	{
		struct CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms
		{
			FString Key;
			bool exists;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_exists_SetBit = [](void* Obj){ ((CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms*)Obj)->exists = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_exists = { UE4CodeGen_Private::EPropertyClass::Bool, "exists", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_exists_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_exists,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Config" },
				{ "DisplayName", "Get Custom Config(Float)" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetCustomConfigProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(CPP_FunctionLibrary_eventGetCustomConfigProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetDescription()
	{
		struct CPP_FunctionLibrary_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|About" },
				{ "DisplayName", "Project Description" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetDescription", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetDescription_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetGPUName()
	{
		struct CPP_FunctionLibrary_eventGetGPUName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetGPUName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Hardware|GPU" },
				{ "DisplayName", "GPU Name" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetGPUName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetGPUName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetHomepage()
	{
		struct CPP_FunctionLibrary_eventGetHomepage_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetHomepage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Publisher" },
				{ "DisplayName", "Homepage" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetHomepage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetHomepage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetLicensingTerms()
	{
		struct CPP_FunctionLibrary_eventGetLicensingTerms_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetLicensingTerms_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Legal" },
				{ "DisplayName", "Licensing Terms" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetLicensingTerms", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetLicensingTerms_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetPrivacyPolicy()
	{
		struct CPP_FunctionLibrary_eventGetPrivacyPolicy_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetPrivacyPolicy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Legal" },
				{ "DisplayName", "Privacy Policy" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetPrivacyPolicy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetPrivacyPolicy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectID()
	{
		struct CPP_FunctionLibrary_eventGetProjectID_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetProjectID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|About" },
				{ "DisplayName", "Project ID" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetProjectID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetProjectID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectName()
	{
		struct CPP_FunctionLibrary_eventGetProjectName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|About" },
				{ "DisplayName", "Project Name" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetProjectName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetProjectName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectVersion()
	{
		struct CPP_FunctionLibrary_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|About" },
				{ "DisplayName", "Project Version" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetProjectVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetProjectVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_GetSupportContact()
	{
		struct CPP_FunctionLibrary_eventGetSupportContact_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventGetSupportContact_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Project Settings|Publisher" },
				{ "DisplayName", "Support Contact" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "GetSupportContact", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventGetSupportContact_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SetCustomConfigProperty()
	{
		struct CPP_FunctionLibrary_eventSetCustomConfigProperty_Parms
		{
			FString Key;
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSetCustomConfigProperty_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSetCustomConfigProperty_Parms, Key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Config" },
				{ "DisplayName", "Set Custom Config(Float)" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "SetCustomConfigProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CPP_FunctionLibrary_eventSetCustomConfigProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmootherStep()
	{
		struct CPP_FunctionLibrary_eventSmootherStep_Parms
		{
			float x;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmootherStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmootherStep_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "DisplayName", "SmootherStep" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "SmootherStep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventSmootherStep_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothestStep()
	{
		struct CPP_FunctionLibrary_eventSmoothestStep_Parms
		{
			float x;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmoothestStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmoothestStep_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "DisplayName", "SmoothestStep" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "SmoothestStep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventSmoothestStep_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothStep()
	{
		struct CPP_FunctionLibrary_eventSmoothStep_Parms
		{
			float x;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmoothStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CPP_FunctionLibrary_eventSmoothStep_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Curves" },
				{ "DisplayName", "SmoothStep" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_FunctionLibrary, "SmoothStep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CPP_FunctionLibrary_eventSmoothStep_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPP_FunctionLibrary_NoRegister()
	{
		return UCPP_FunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCPP_FunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetAudioQualities, "GetAudioQualities" }, // 1072093117
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyDistinguishedName, "GetCompanyDistinguishedName" }, // 2902769149
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetCompanyName, "GetCompanyName" }, // 3659997928
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetCopyrightNotice, "GetCopyrightNotice" }, // 1202406974
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetCPUName, "GetCPUName" }, // 2325473475
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetCustomConfigProperty, "GetCustomConfigProperty" }, // 1642004530
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetDescription, "GetDescription" }, // 2075335276
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetGPUName, "GetGPUName" }, // 3975720250
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetHomepage, "GetHomepage" }, // 2110705551
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetLicensingTerms, "GetLicensingTerms" }, // 3836609734
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetPrivacyPolicy, "GetPrivacyPolicy" }, // 2513292410
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectID, "GetProjectID" }, // 4209083343
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectName, "GetProjectName" }, // 4137654215
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetProjectVersion, "GetProjectVersion" }, // 215348768
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_GetSupportContact, "GetSupportContact" }, // 1093523438
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_SetCustomConfigProperty, "SetCustomConfigProperty" }, // 3691312559
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_SmootherStep, "SmootherStep" }, // 2716628175
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothestStep, "SmoothestStep" }, // 635560748
				{ &Z_Construct_UFunction_UCPP_FunctionLibrary_SmoothStep, "SmoothStep" }, // 1203674609
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CPP_FunctionLibrary.h" },
				{ "ModuleRelativePath", "CPP_FunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCPP_FunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCPP_FunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UCPP_FunctionLibrary, 1396555665);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPP_FunctionLibrary(Z_Construct_UClass_UCPP_FunctionLibrary, &UCPP_FunctionLibrary::StaticClass, TEXT("/Script/MyProject"), TEXT("UCPP_FunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_FunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
