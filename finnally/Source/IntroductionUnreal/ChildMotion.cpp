// Fill out your copyright notice in the Description page of Project Settings.



#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "ChildMotion.h"

// Sets default values
AChildMotion::AChildMotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	UStaticMesh* SphereMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	if (SphereMesh)
	{
		Mesh->SetStaticMesh(SphereMesh);
	}
}

// Called when the game starts or when spawned
void AChildMotion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChildMotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChildMotion::TranslateFromRotationForward(FRotator Rotation, float Distance)
{

	FVector ForwardVector = Rotation.Vector();

	
	FVector NewLocation = GetActorLocation() + (ForwardVector * Distance);

	SetActorLocation(NewLocation);
}

void AChildMotion::HorizontalLookAtActor(AActor* Actor)
{
	if (!Actor) return;

	FVector MyLocation = GetActorLocation();
	FVector TargetLocation = Actor->GetActorLocation();

	
	TargetLocation.Z = MyLocation.Z;

	
	FVector Direction = (TargetLocation - MyLocation).GetSafeNormal();
	FRotator LookAtRotation = Direction.Rotation();

	SetActorRotation(LookAtRotation);
}

