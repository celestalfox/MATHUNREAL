// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExerciceComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FINNALLY_API UExerciceComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UExerciceComponent();

protected:
    virtual void BeginPlay() override;

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

    //values
    FVector BaseScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scale", meta = (AllowPrivateAccess = "true"))
    float TargetScale;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Scale", meta = (AllowPrivateAccess = "true"))
    float ScaleSpeed;

    bool bIsOscillating;
    float RunTime;

public:
    //functions
    UFUNCTION(BlueprintCallable, Category = "Scale")
    void StartOscillation();

    UFUNCTION(BlueprintCallable, Category = "Scale")
    void StopOscillation();
};
