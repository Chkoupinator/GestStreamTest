// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaveController.generated.h"

UCLASS()
class GESTSTREAMTEST_API AWaveController : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* HISMComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int GridXWidth = 15;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int GridYLength = 20;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float InstanceXSpacing = 50.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float InstanceYSpacing = 50.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float WaveLengthFactor = 2.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float HeightVarianceMultiplier = 50.f;

	// Sets default values for this actor's properties
	AWaveController();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
