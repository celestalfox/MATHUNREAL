#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExerciceInterface.h"
#include "ExerciceActor.generated.h"

UCLASS()
class INTRODUCTIONUNREAL_API AExerciceActor : public AActor, public IExerciceInterface
{
	GENERATED_BODY()

public:
	AExerciceActor();

protected:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditInstanceOnly, Category = "Mesh")
	bool bUseSphereMesh;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	AActor* TargetActor;

private:
	UStaticMesh* CubeMesh;
	UStaticMesh* SphereMesh;

public:
	virtual void OnConstruction(const FTransform& Transform) override;


	virtual FVector GetLocation_Implementation() const override;

protected:
	virtual void BeginPlay() override;
};