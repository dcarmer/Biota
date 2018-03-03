// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
		virtual void Init() override;

		UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnPreLoadMap"))
		void OnPreLoadMap(const FString& InMapName);

		UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnPostLoadMapWithWorld"))
		void OnPostLoadMapWithWorld(UWorld* InLoadedWorld);
		

};
