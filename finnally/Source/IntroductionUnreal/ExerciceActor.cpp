#include "ExerciceActor.h"
#include "UObject/ConstructorHelpers.h"
#include "ExerciceInterface.h"

AExerciceActor::AExerciceActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(Root);
	MeshComponent->SetMobility(EComponentMobility::Movable);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Engine/EditorMeshes/EditorCube.EditorCube"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("/Engine/EditorMeshes/EditorSphere.EditorSphere"));

	if (CubeAsset.Succeeded()) CubeMesh = CubeAsset.Object;
	if (SphereAsset.Succeeded()) SphereMesh = SphereAsset.Object;

	if (CubeMesh) MeshComponent->SetStaticMesh(CubeMesh);

	bUseSphereMesh = false;
}

void AExerciceActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (bUseSphereMesh && SphereMesh)
	{
		MeshComponent->SetStaticMesh(SphereMesh);
	}
	else if (CubeMesh)
	{
		MeshComponent->SetStaticMesh(CubeMesh);
	}
}

void AExerciceActor::BeginPlay()
{
	Super::BeginPlay();

	if (TargetActor && TargetActor->GetClass()->ImplementsInterface(UExerciceInterface::StaticClass()))
	{
		FVector TargetLocation = IExerciceInterface::Execute_GetLocation(TargetActor);
		MeshComponent->SetWorldLocation(TargetLocation);
	}
}

FVector AExerciceActor::GetLocation_Implementation() const
{
	return MeshComponent ? MeshComponent->GetComponentLocation() : FVector::ZeroVector;
}