// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExerciceFunction.generated.h"

/**
 * 
 */
UCLASS()
class FINNALLY_API UExerciceFunction : public UObject
{
	GENERATED_BODY()

public:
	
	// fonction01 = print message
	UFUNCTION(BlueprintCallable, Category="Debug")
	static void PrintMessage(const FString& Message);

	// fonction02 = Tp object
	UFUNCTION(BlueprintCallable, Category="Movement")
	static void TeleportTo(AActor* ActorToTeleport, AActor* TargetActor);

	// fonction03 = FindShortestVector
	UFUNCTION(BlueprintCallable, Category = "Vector")
	static FVector FindShortestVector(const TArray<FVector>& Vectors);


	
};
