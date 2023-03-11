// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelLoader.generated.h"

UCLASS()
class GESTSTREAMTEST_API ALevelLoader : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UWorld> LevelToLoad;
	
	UFUNCTION(BlueprintCallable)
	void LoadLevel();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLevelLoaded();
};
