// Fill out your copyright notice in the Description page of Project Settings.


#include "ClueGameTurnBasedSystem.h"

// Sets default values for this component's properties
UClueGameTurnBasedSystem::UClueGameTurnBasedSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UClueGameTurnBasedSystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UClueGameTurnBasedSystem::OnGameInit()
{
	UE_LOG(LogTemp, Warning, TEXT("[ClueGameTurnBasedSystem] Game Initialized"));

	// Spawn Cards

	// Spawn Player Character


}

