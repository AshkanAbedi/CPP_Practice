// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseActor.h"

ABaseActor::ABaseActor()
{
	PrimaryActorTick.bCanEverTick = true;
	Health = 100.0f;

}

void ABaseActor::MultiplyHealth(float Factor)
{
	Health *= Factor;
}

void ABaseActor::BeginPlay()
{
	Super::BeginPlay();
	MultiplyHealth(3);
}

void ABaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

