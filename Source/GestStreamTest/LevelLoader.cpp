// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelLoader.h"

#include "Kismet/GameplayStatics.h"


void ALevelLoader::LoadLevel()
{
	FLatentActionInfo ActionInfo;
	ActionInfo.CallbackTarget = this;
	ActionInfo.ExecutionFunction = "OnLevelLoaded";
	
	UGameplayStatics::LoadStreamLevelBySoftObjectPtr(this, LevelToLoad, true, true, ActionInfo);
}
