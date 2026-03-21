#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomMotion.h"
#include "ParentMotion.generated.h"

UENUM(BlueprintType)
enum class ERotationAxis : uint8
{
	X,
	Y,
	Z
};

UCLASS()
class INTRODUCTIONUNREAL_API AParentMotion : public AActor
{
	GENERATED_BODY()

public:
	AParentMotion();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	AActor* TargetActor;

	UPROPERTY(EditAnywhere)
	ERotationAxis Axis = ERotationAxis::Z;

	UPROPERTY(EditAnywhere)
	float RotationSpeed = 90.f;

private:
	float CurrentAngle = 0.f;
};