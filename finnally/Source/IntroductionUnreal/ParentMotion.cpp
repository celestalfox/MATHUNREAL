#include "ParentMotion.h"
#include "Components/StaticMeshComponent.h"

AParentMotion::AParentMotion()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

void AParentMotion::BeginPlay()
{
	Super::BeginPlay();
}

void AParentMotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DeltaAngle = RotationSpeed * DeltaTime;
	CurrentAngle += DeltaAngle;

	FRotator Rot = GetActorRotation();

	switch (Axis)
	{
	case ERotationAxis::X: Rot.Pitch += DeltaAngle; break;
	case ERotationAxis::Y: Rot.Roll += DeltaAngle; break;
	case ERotationAxis::Z: Rot.Yaw += DeltaAngle; break;
	}

	SetActorRotation(Rot);


	if (TargetActor &&
		TargetActor->GetClass()->ImplementsInterface(UCustomMotion::StaticClass()))
	{
		ICustomMotion::Execute_HorizontalLookAtActor(TargetActor, this);
	}


	if (CurrentAngle >= 360.f)
	{
		if (TargetActor &&
			TargetActor->GetClass()->ImplementsInterface(UCustomMotion::StaticClass()))
		{
			ICustomMotion::Execute_TranslateFromRotationForward(
				TargetActor,
				GetActorRotation(),
				100.f
			);
		}

		CurrentAngle = 0.f;
	}
}