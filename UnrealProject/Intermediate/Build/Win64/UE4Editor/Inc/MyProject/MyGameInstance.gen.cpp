// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_OnPostLoadMapWithWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_OnPreLoadMap();
// End Cross Module References
	static FName NAME_UMyGameInstance_OnPostLoadMapWithWorld = FName(TEXT("OnPostLoadMapWithWorld"));
	void UMyGameInstance::OnPostLoadMapWithWorld(UWorld* InLoadedWorld)
	{
		MyGameInstance_eventOnPostLoadMapWithWorld_Parms Parms;
		Parms.InLoadedWorld=InLoadedWorld;
		ProcessEvent(FindFunctionChecked(NAME_UMyGameInstance_OnPostLoadMapWithWorld),&Parms);
	}
	static FName NAME_UMyGameInstance_OnPreLoadMap = FName(TEXT("OnPreLoadMap"));
	void UMyGameInstance::OnPreLoadMap(const FString& InMapName)
	{
		MyGameInstance_eventOnPreLoadMap_Parms Parms;
		Parms.InMapName=InMapName;
		ProcessEvent(FindFunctionChecked(NAME_UMyGameInstance_OnPreLoadMap),&Parms);
	}
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_OnPostLoadMapWithWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLoadedWorld = { UE4CodeGen_Private::EPropertyClass::Object, "InLoadedWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventOnPostLoadMapWithWorld_Parms, InLoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLoadedWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnPostLoadMapWithWorld" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "OnPostLoadMapWithWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(MyGameInstance_eventOnPostLoadMapWithWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_OnPreLoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMapName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InMapName = { UE4CodeGen_Private::EPropertyClass::Str, "InMapName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventOnPreLoadMap_Parms, InMapName), METADATA_PARAMS(NewProp_InMapName_MetaData, ARRAY_COUNT(NewProp_InMapName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMapName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnPreLoadMap" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "OnPreLoadMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(MyGameInstance_eventOnPreLoadMap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMyGameInstance_OnPostLoadMapWithWorld, "OnPostLoadMapWithWorld" }, // 2475539957
				{ &Z_Construct_UFunction_UMyGameInstance_OnPreLoadMap, "OnPreLoadMap" }, // 2899084075
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyGameInstance.h" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UMyGameInstance, 372954158);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
