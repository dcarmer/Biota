// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_FunctionLibrary.h"

float UCPP_FunctionLibrary::SmoothStep(float x)
{
	return (3-(x+x))*x*x; //-2x^3 + 3x^2
}
float UCPP_FunctionLibrary::SmootherStep(float x)
{
	return ((((6 * x) - 15)*x) + 10)*x*x*x; //6x^5 - 15x^4 + 10x^3
}
float UCPP_FunctionLibrary::SmoothestStep(float x)
{
	return (((((70 - (20 * x)) * x) - 84) * x) + 35) * x * x * x * x; //-20x^7 + 70x^6 - 84x^5 + 35x^4
}



FString UCPP_FunctionLibrary::GetCompanyName()
{
	return GetGeneralProjectSettings(TEXT("CompanyName"));
}
FString UCPP_FunctionLibrary::GetCompanyDistinguishedName()
{
	return GetGeneralProjectSettings(TEXT("CompanyDistinguishedName"));
}
FString UCPP_FunctionLibrary::GetCopyrightNotice()
{
	return GetGeneralProjectSettings(TEXT("CopyrightNotice"));
}
FString UCPP_FunctionLibrary::GetDescription()
{
	return GetGeneralProjectSettings(TEXT("Description"));
}
FString UCPP_FunctionLibrary::GetLicensingTerms()
{
	return GetGeneralProjectSettings(TEXT("LicensingTerms"));
}
FString UCPP_FunctionLibrary::GetPrivacyPolicy()
{
	return GetGeneralProjectSettings(TEXT("PrivacyPolicy"));
}
FString UCPP_FunctionLibrary::GetProjectName()
{
	return GetGeneralProjectSettings(TEXT("ProjectName"));
}
FString UCPP_FunctionLibrary::GetProjectVersion()
{
	return GetGeneralProjectSettings(TEXT("ProjectVersion"));
}
FString UCPP_FunctionLibrary::GetHomepage()
{
	return GetGeneralProjectSettings(TEXT("Homepage"));
}
FString UCPP_FunctionLibrary::GetSupportContact()
{
	return GetGeneralProjectSettings(TEXT("SupportContact"));
}
FString UCPP_FunctionLibrary::GetProjectID()
{
	return GetGeneralProjectSettings(TEXT("ProjectID"));
}

TArray<FString> UCPP_FunctionLibrary::GetAudioQualities()
{
	TArray<FString> Qualities;
	GConfig->GetArray(TEXT("/Script/Engine.AudioSettings"), TEXT("QualityLevels"), Qualities, GEngineIni);
	//TODO IMPROVE PARSING RETURNED DATA FOR NAME(MAYBE RETURN AS CUSTOM STRUCT ARRAY)
	for(auto& str : Qualities)
	{
		TArray<FString> temp;
		str.ParseIntoArray(temp, TEXT(","));
		str = temp[temp.Num() - 2].Trim().Replace(TEXT(")"), TEXT("")).Replace(TEXT("\""), TEXT(""));
	}
	return Qualities;
}

FString UCPP_FunctionLibrary::GetGPUName()
{
	return FPlatformMisc::GetPrimaryGPUBrand();
}

FString UCPP_FunctionLibrary::GetCPUName()
{
	return FPlatformMisc::GetCPUBrand();
}

void UCPP_FunctionLibrary::SetCustomConfigProperty(FString Key, float value)
{
	GConfig->SetFloat(TEXT("MyCustomSettings"), *Key, value, GGameIni);
	GConfig->Flush(false, GGameIni);
}

float UCPP_FunctionLibrary::GetCustomConfigProperty(const FString& Key, bool& exists)
{
	float value = 0;
	exists = GetSafeFloat(GConfig,TEXT("MyCustomSettings"), *Key, value, GGameIni);
	return value;
}



FString UCPP_FunctionLibrary::GetGeneralProjectSettings(const TCHAR * SettingName)
{
	FString SettingValue;
	GConfig->GetString(TEXT("/Script/EngineSettings.GeneralProjectSettings"), SettingName, SettingValue, GGameIni);
	return SettingValue;
}

/* Basically the exact same thing as "FConfigCacheIni::GetFloat" but my own version to correctly handle conversion */
bool UCPP_FunctionLibrary::GetSafeFloat(FConfigCacheIni* INI, const TCHAR* Section, const TCHAR* Key, float& Value, const FString& Filename)
{
	FString Text;
	if (INI->GetString(Section, Key, Text, Filename) && FCString::IsNumeric(*Text))
	{
		Value = FCString::Atof(*Text);
		return true;
	}
	Value = 0;
	return false;
}


