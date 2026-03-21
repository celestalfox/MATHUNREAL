// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomMotion.h"
#include "components/staticmeshcomponent.h"
#include "ChildMotion.generated.h"

UCLASS()
class INTRODUCTIONUNREAL_API AChildMotion : public AActor, public ICustomMotion
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChildMotion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;


	virtual void TranslateFromRotationForward(FRotator Rotation, float Distance) override;
	virtual	void HorizontalLookAtActor(AActor* Actor) override;
};
