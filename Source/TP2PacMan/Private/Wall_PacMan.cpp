// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall_PacMan.h"

// Sets default values
AWall_PacMan::AWall_PacMan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWall_PacMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWall_PacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

