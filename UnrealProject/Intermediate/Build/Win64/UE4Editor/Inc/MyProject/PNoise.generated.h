// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPNoise;
#ifdef MYPROJECT_PNoise_generated_h
#error "PNoise.generated.h already included, missing '#pragma once' in PNoise.h"
#endif
#define MYPROJECT_PNoise_generated_h

#define Biota_Source_MyProject_PNoise_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFractalNoiseAt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persistence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFractalNoiseAt(Z_Param_x,Z_Param_y,Z_Param_persistence,Z_Param_octives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoiseAt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoiseAt(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructPNoise) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPNoise**)Z_Param__Result=UPNoise::ConstructPNoise(Z_Param_seed,Z_Param_Outer); \
		P_NATIVE_END; \
	}


#define Biota_Source_MyProject_PNoise_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFractalNoiseAt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persistence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_octives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFractalNoiseAt(Z_Param_x,Z_Param_y,Z_Param_persistence,Z_Param_octives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoiseAt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoiseAt(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructPNoise) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPNoise**)Z_Param__Result=UPNoise::ConstructPNoise(Z_Param_seed,Z_Param_Outer); \
		P_NATIVE_END; \
	}


#define Biota_Source_MyProject_PNoise_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPNoise(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UPNoise(); \
public: \
	DECLARE_CLASS(UPNoise, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UPNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Biota_Source_MyProject_PNoise_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPNoise(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UPNoise(); \
public: \
	DECLARE_CLASS(UPNoise, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UPNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Biota_Source_MyProject_PNoise_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPNoise(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPNoise(UPNoise&&); \
	NO_API UPNoise(const UPNoise&); \
public:


#define Biota_Source_MyProject_PNoise_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPNoise(UPNoise&&); \
	NO_API UPNoise(const UPNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPNoise); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPNoise)


#define Biota_Source_MyProject_PNoise_h_15_PRIVATE_PROPERTY_OFFSET
#define Biota_Source_MyProject_PNoise_h_12_PROLOG
#define Biota_Source_MyProject_PNoise_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biota_Source_MyProject_PNoise_h_15_PRIVATE_PROPERTY_OFFSET \
	Biota_Source_MyProject_PNoise_h_15_RPC_WRAPPERS \
	Biota_Source_MyProject_PNoise_h_15_INCLASS \
	Biota_Source_MyProject_PNoise_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Biota_Source_MyProject_PNoise_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biota_Source_MyProject_PNoise_h_15_PRIVATE_PROPERTY_OFFSET \
	Biota_Source_MyProject_PNoise_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Biota_Source_MyProject_PNoise_h_15_INCLASS_NO_PURE_DECLS \
	Biota_Source_MyProject_PNoise_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Biota_Source_MyProject_PNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
