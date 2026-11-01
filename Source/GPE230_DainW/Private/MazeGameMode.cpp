// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGameMode.h"

#include "GameFramework/DefaultPawn.h"

void AMazeGameMode::InitGameState()
{
	Super::InitGameState();
	
	// If no override
	if (DefaultPawnClass == ADefaultPawn::StaticClass())
	{
		DefaultPawnClass = DefaultPlayerCharacter;
	}
}
