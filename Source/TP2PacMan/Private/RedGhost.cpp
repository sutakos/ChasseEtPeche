// Fill out your copyright notice in the Description page of Project Settings.


#include "RedGhost.h"

// Sets default values
ARedGhost::ARedGhost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARedGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARedGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

