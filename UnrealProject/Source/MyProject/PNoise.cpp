// Fill out your copyright notice in the Description page of Project Settings.

#include "PNoise.h"
#include "RandomStream.h"
#include "CPP_FunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UPNoise::UPNoise(){}
void UPNoise::GenerateWithSeed(int seed)
{
	FRandomStream RStream(seed);
	for (int i = 0; i < HASH_SIZE; ++i)
	{
		FMath::SinCos(&(Gradient[i].Y), &(Gradient[i].X), RStream.FRandRange(0, 2 * PI));//NOTE[IMPROVE]: Inclusive, so 0=360 counted twice
	}
}
UPNoise* UPNoise::ConstructPNoise(int seed, UObject* Outer)
{
	if (!Outer) { Outer = (UObject*)GetTransientPackage(); }

	UPNoise* noise = NewObject<UPNoise>(Outer, UPNoise::StaticClass());
	noise->GenerateWithSeed(seed);
	return noise;
}
int UPNoise::Hash(int x, int y)
{
	return FMath::Abs((x * 786433) ^ (y * 1572869)) % (HASH_SIZE - 1); //Common has function for multiple ints, uses arbitrary large primes
}
float UPNoise::GetNoiseAt(float x, float y)
{
	int x0 = FMath::FloorToInt(x), y0 = FMath::FloorToInt(y);
	int x1 = x0 + 1, y1 = y0 + 1;
	float dx0 = x - x0, dy0 = y - y0;
	float dx1 = dx0 - 1, dy1 = dy0 - 1;
	float u = UCPP_FunctionLibrary::SmootherStep(dx0), v = UCPP_FunctionLibrary::SmootherStep(dy0);

	return FMath::Lerp(
		FMath::Lerp(
			FVector2D::DotProduct(Gradient[Hash(x0, y0)], { dx0,dy0 }),
			FVector2D::DotProduct(Gradient[Hash(x1, y0)], { dx1,dy0 }),
			u),
		FMath::Lerp(
			FVector2D::DotProduct(Gradient[Hash(x0, y1)], { dx0,dy1 }),
			FVector2D::DotProduct(Gradient[Hash(x1, y1)], { dx1,dy1 }),
			u),
		v)*FMath::Sqrt(2); //Scaled by [2/sqrt(N) where N is dimensions] to put back in +/- 1 range
}
float UPNoise::GetFractalNoiseAt(float x, float y, float persistence, int octives)
{
	float amplitude = FMath::Pow(persistence, octives), total = 0, range = 0;
	int frequency = 1;
	for (int i = 0; i < octives; ++i)
	{
		total += GetNoiseAt(x / frequency, y / frequency)*amplitude;
		range += amplitude;
		amplitude /= persistence;
		frequency *= 2;
	}
	return total / range;
}