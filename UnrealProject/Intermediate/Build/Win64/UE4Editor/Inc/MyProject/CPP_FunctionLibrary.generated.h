// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CPP_FunctionLibrary_generated_h
#error "CPP_FunctionLibrary.generated.h already included, missing '#pragma once' in CPP_FunctionLibrary.h"
#endif
#define MYPROJECT_CPP_FunctionLibrary_generated_h

#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCustomConfigProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_exists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::GetCustomConfigProperty(Z_Param_Key,Z_Param_Out_exists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCPP_FunctionLibrary::SetCustomConfigProperty(Z_Param_Key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCPUName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCPUName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetGPUName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioQualities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCPP_FunctionLibrary::GetAudioQualities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrivacyPolicy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetPrivacyPolicy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLicensingTerms) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetLicensingTerms(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCopyrightNotice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCopyrightNotice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportContact) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetSupportContact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHomepage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetHomepage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompanyDistinguishedName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCompanyDistinguishedName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompanyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCompanyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmoothestStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmoothestStep(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmootherStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmootherStep(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmoothStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmoothStep(Z_Param_x); \
		P_NATIVE_END; \
	}


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomConfigProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_exists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::GetCustomConfigProperty(Z_Param_Key,Z_Param_Out_exists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCPP_FunctionLibrary::SetCustomConfigProperty(Z_Param_Key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCPUName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCPUName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetGPUName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioQualities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCPP_FunctionLibrary::GetAudioQualities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrivacyPolicy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetPrivacyPolicy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLicensingTerms) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetLicensingTerms(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCopyrightNotice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCopyrightNotice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportContact) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetSupportContact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHomepage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetHomepage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompanyDistinguishedName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCompanyDistinguishedName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompanyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetCompanyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetProjectID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCPP_FunctionLibrary::GetDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmoothestStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmoothestStep(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmootherStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmootherStep(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmoothStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCPP_FunctionLibrary::SmoothStep(Z_Param_x); \
		P_NATIVE_END; \
	}


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_FunctionLibrary(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCPP_FunctionLibrary(); \
public: \
	DECLARE_CLASS(UCPP_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCPP_FunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCPP_FunctionLibrary(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCPP_FunctionLibrary(); \
public: \
	DECLARE_CLASS(UCPP_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCPP_FunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_FunctionLibrary(UCPP_FunctionLibrary&&); \
	NO_API UCPP_FunctionLibrary(const UCPP_FunctionLibrary&); \
public:


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_FunctionLibrary(UCPP_FunctionLibrary&&); \
	NO_API UCPP_FunctionLibrary(const UCPP_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_FunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_FunctionLibrary)


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Biota_Source_MyProject_CPP_FunctionLibrary_h_14_PROLOG
#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_RPC_WRAPPERS \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_INCLASS \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Biota_Source_MyProject_CPP_FunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Biota_Source_MyProject_CPP_FunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Biota_Source_MyProject_CPP_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
