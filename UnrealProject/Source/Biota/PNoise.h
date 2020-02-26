// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PNoise.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BIOTA_API UPNoise : public UObject
{
	GENERATED_BODY()
	UPNoise();

private: //Private variables
	static constexpr int HASH_SIZE = 256;
	FVector2D Gradient[HASH_SIZE];

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ConstructPNoise"), Category = "Math|Noise")
	static UPNoise* ConstructPNoise(int seed, UObject* Outer = nullptr);
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetNoiseAt"), Category = "Math|Noise")
	float GetNoiseAt(float x, float y);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetFractalNoiseAt"), Category = "Math|Noise")
	float GetFractalNoiseAt(float x, float y, float persistence, int octives);

private:
	int Hash(int x, int y);
	void GenerateWithSeed(int seed);
};
