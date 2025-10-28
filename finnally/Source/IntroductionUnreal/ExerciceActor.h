// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExerciceActor.generated.h"

UCLASS()
class EXERCICEACTOR_API AExerciceActor : public AActor
{
	GENERATED_BODY()

public:
	AExerciceActor();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

private:
	// Meshes internes non exposés à l’éditeur
	UStaticMesh* CubeMesh;
	UStaticMesh* SphereMesh;
};
