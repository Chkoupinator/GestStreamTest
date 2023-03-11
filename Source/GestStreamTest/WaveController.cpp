// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveController.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"


// Sets default values
AWaveController::AWaveController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HISMComp = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("HISMComp");
	SetRootComponent(HISMComp);
}

void AWaveController::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	HISMComp->ClearInstances();
	for (int i = 0; i < GridYLength; ++i)
	{
		for (int j = 0; j < GridXWidth; ++j)
		{
			HISMComp->AddInstance(FTransform(FVector(j * InstanceXSpacing, i * InstanceYSpacing, 0.f)));
		}
	}
}

// Called every frame
void AWaveController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const float NowTime = GetWorld()->TimeSeconds;
	for (int i = 0; i < GridYLength; ++i)
	{
		for (int j = 0; j < GridXWidth; ++j)
		{
			HISMComp->UpdateInstanceTransform(i * GridXWidth + j,
				FTransform(FVector(j * InstanceXSpacing, i * InstanceYSpacing,
					FMath::Sin(NowTime + i * 1.0f / GridYLength * PI * WaveLengthFactor ) * HeightVarianceMultiplier)), false);
		}
	}
}

