// Fill out your copyright notice in the Description page of Project Settings.

#include "ExerciceComponent.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"


//value setup

UExerciceComponent::UExerciceComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    TargetScale = 2.0f;
    ScaleSpeed = 1.0f;
    bIsOscillating = false;
    RunTime = 0.0f;
}

void UExerciceComponent::BeginPlay()
{
    Super::BeginPlay();

    if (AActor* Owner = GetOwner())
    {
        BaseScale = Owner->GetActorScale3D();
    }
}

//functions

void UExerciceComponent::StartOscillation()
{
    bIsOscillating = true;
    RunTime = 0.0f;
}

void UExerciceComponent::StopOscillation()
{
    bIsOscillating = false;
    RunTime = 0.0f;

    if (AActor* Owner = GetOwner())
    {
        Owner->SetActorScale3D(BaseScale);
    }
}



//apply the oscillation effect every frame

void UExerciceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bIsOscillating) return;

    RunTime += DeltaTime;

    float ScaleFactor = 1.0f + FMath::Sin(RunTime * ScaleSpeed) * (TargetScale - 1.0f);

    if (AActor* Owner = GetOwner())
    {
        Owner->SetActorScale3D(BaseScale * ScaleFactor);
    }
}