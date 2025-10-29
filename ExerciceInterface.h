// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExerciceInterface.generated.h"

UINTERFACE(MinimalAPI)
class UExerciceInterface : public UInterface
{
    GENERATED_BODY()
};

class INTRODUCTIONUNREAL_API IExerciceInterface
{
    GENERATED_BODY()

public:

    virtual FVector GetLocation() const = 0;
};