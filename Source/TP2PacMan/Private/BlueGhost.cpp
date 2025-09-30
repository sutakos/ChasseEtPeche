// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueGhost.h"

// Sets default values
ABlueGhost::ABlueGhost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlueGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlueGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

