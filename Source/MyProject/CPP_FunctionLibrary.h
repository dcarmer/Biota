// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GenericPlatform/GenericPlatformDriver.h"
#include "CPP_FunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UCPP_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (DisplayName = "SmoothStep"), Category = "Math|Curves")
	static float SmoothStep(float x);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "SmootherStep"), Category = "Math|Curves")
	static float SmootherStep(float x);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "SmoothestStep"), Category = "Math|Curves")
	static float SmoothestStep(float x);
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Description"), Category = "Project Settings|About")
	static FString GetDescription();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project ID"), Category = "Project Settings|About")
	static FString GetProjectID();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Name"), Category = "Project Settings|About")
	static FString GetProjectName();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Version"), Category = "Project Settings|About")
	static FString GetProjectVersion();
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Company Name"), Category = "Project Settings|Publisher")
	static FString GetCompanyName();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Company Distinguished Name"), Category = "Project Settings|Publisher")
	static FString GetCompanyDistinguishedName();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Homepage"), Category = "Project Settings|Publisher")
	static FString GetHomepage();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Support Contact"), Category = "Project Settings|Publisher")
	static FString GetSupportContact();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Copyright Notice"), Category = "Project Settings|Legal")
	static FString GetCopyrightNotice();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Licensing Terms"), Category = "Project Settings|Legal")
	static FString GetLicensingTerms();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Privacy Policy"), Category = "Project Settings|Legal")
	static FString GetPrivacyPolicy();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Audio Qualities(TODO)"), Category = "Audio Quality")
	static TArray<FString> GetAudioQualities();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "GPU Name"), Category = "Hardware|GPU")
	static FString GetGPUName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "CPU Name"), Category = "Hardware|CPU")
	static FString GetCPUName();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Custom Config(Float)"), Category = "Config")
	static void SetCustomConfigProperty(FString Key, float value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Custom Config(Float)"), Category = "Config")
	static float GetCustomConfigProperty(const FString& Key, bool& exists);

	

private:
	static FString GetGeneralProjectSettings(const TCHAR *);

	static bool GetSafeFloat(FConfigCacheIni * INI, const TCHAR * Section, const TCHAR * Key, float & Value, const FString & Filename);
	
};
