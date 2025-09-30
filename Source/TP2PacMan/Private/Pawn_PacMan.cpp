// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_PacMan.h"

// Sets default values
APawn_PacMan::APawn_PacMan()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawn_PacMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawn_PacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_PacMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

