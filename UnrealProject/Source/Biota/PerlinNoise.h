// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
//UCLASS()
class BIOTA_API PerlinNoise : public UObject
{
	//GENERATED_BODY()
	//GENERATED_BODY()
private:
	static constexpr int HASH_SIZE = 256;
	FVector2D Gradient[HASH_SIZE];
	int Hash(int x, int y);
public:
	PerlinNoise(int seed);
	float GetNoiseAt(float x, float y);
	float GetFractalNoiseAt(float x, float y, float persistence, int octives);
	~PerlinNoise();
};
