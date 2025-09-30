// Fill out your copyright notice in the Description page of Project Settings.


#include "PinkGhost.h"

// Sets default values
APinkGhost::APinkGhost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APinkGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APinkGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

