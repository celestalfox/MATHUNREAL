// Fill out your copyright notice in the Description page of Project Settings.


#include "ExerciceFunction.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
 
//01 print message piece

void UExerciceFunction::PrintMessage(const FString& Message)
{
	UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
}

//02 teleport piece
void UExerciceFunction::TeleportTo(AActor* ActorToTeleport, AActor* TargetActor)
{
	if (!ActorToTeleport || !TargetActor)
	{
		return;
	}

	
	ActorToTeleport->SetActorLocation(TargetActor->GetActorLocation());


	
}

//03 find shortest vector piece
FVector UExerciceFunction::FindShortestVector(const TArray<FVector>& Vectors)
{
	if (Vectors.Num() == 0)
	{
		return FVector::ZeroVector;

	}

	FVector Shortest = Vectors[0];
	float ShortestLength = Shortest.Size();

	for (const FVector& V : Vectors)
	{
		float Len = V.Size();
		if (Len < ShortestLength)
		{
			Shortest = V;
			ShortestLength = Len;
		}
	}

	return Shortest;
}

