// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "math_example.generated.h"

UCLASS()
class INTRODUCTIONUNREAL_API Amath_example : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Amath_example();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
