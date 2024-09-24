// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseActor.generated.h"

UCLASS()
class CPP_PRACTICE_API ABaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseActor();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Actor")
	float Health;

	UFUNCTION(BlueprintCallable, Category = "Base Actor")
	void MultiplyHealth(float Factor);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
