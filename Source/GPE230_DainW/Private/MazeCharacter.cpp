// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeCharacter.h"

// Sets default values
AMazeCharacter::AMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMazeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMazeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMazeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// W and S - Move forward and backward
	PlayerInputComponent->BindAxis(
		TEXT("MoveFB"), this, &AMazeCharacter::MoveFB);

	// A and D - Move left and right
	PlayerInputComponent->BindAxis(
		TEXT("MoveLR"), this, &AMazeCharacter::MoveLR);

	// Mouse - Rotate the character
	PlayerInputComponent->BindAxis(
		TEXT("Rotate"), this, &AMazeCharacter::Rotate);
}

void AMazeCharacter::MoveFB(float value)
{
	// Move forward or backward
	AddMovementInput(GetActorForwardVector(), value * moveSpeed);
}

void AMazeCharacter::MoveLR(float value)
{
	// Move left or right
	AddMovementInput(GetActorRightVector(), value * moveSpeed);
}

void AMazeCharacter::Rotate(float value)
{
	// Turn the player using mouse movement
	AddControllerYawInput(value * rotationSpeed);
}

