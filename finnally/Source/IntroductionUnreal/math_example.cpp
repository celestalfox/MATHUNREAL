// Fill out your copyright notice in the Description page of Project Settings.


#include "math_example.h"

// Sets default values
Amath_example::Amath_example()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Amath_example::BeginPlay()
{
	Super::BeginPlay();

	FVector;
	Fquaternion;
	FRotator;

	FQuat fromEuler = FQuat::MakeFromEuler(FVector(0, 90, 0));
	quat = quat.inverse();
	quat = quat * quat.inverse();
	quat = FQuat::identity;

	FRotator rotator = FRotator(0, 0, 0);
	rotator = rotator.getinverse();
	rotator = FRotator::zerorotator;

	FVector vector = FVector();
	vector = quat.rotateVector(vector);
	vector = quat * vector;

	vector = rotator.RotateVector(vector);

	Fmatrix transformatrix = GetTransform().tomatrixwithscale();
	Fvector vector4 = FVector();
	vector4 = transformatrix.transformvector(vector4);

	
}

// Called every frame
void Amath_example::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

