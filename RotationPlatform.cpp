// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationPlatform.h"

// Sets default values
ARotationPlatform::ARotationPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotationPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotationPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotationPlatform(DeltaTime);

}

void ARotationPlatform::RotationPlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

