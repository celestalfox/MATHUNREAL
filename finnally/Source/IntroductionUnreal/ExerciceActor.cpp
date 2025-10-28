// Fill out your copyright notice in the Description page of Project Settings.


#include "ExerciceActor.h"
#include "UObject/ConstructorHelpers.h"

AExerciceActor::AExerciceActor()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Engine/EditorMeshes/EditorCube.EditorCube"));
	if (CubeAsset.Succeeded())
	{
		CubeMesh = CubeAsset.Object;
	}


	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("/Engine/EditorMeshes/EditorSphere.EditorSphere"));
	if (SphereAsset.Succeeded())
	{
		SphereMesh = SphereAsset.Object;
	}

	if (CubeMesh)
	{
		MeshComponent->SetStaticMesh(CubeMesh);
	}
}

