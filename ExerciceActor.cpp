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

	if (CubeAsset.Succeeded())
		CubeMesh = CubeAsset.Object;

	if (SphereAsset.Succeeded())
		SphereMesh = SphereAsset.Object;

	if (CubeMesh)
		MeshComponent->SetStaticMesh(CubeMesh);

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

	// Check if TargetActor implements the interface
	if (TargetActor && TargetActor->GetClass()->ImplementsInterface(UExerciceInterface::StaticClass()))
	{
		// Cast to the interface
		IExerciceInterface* InterfacePtr = Cast<IExerciceInterface>(TargetActor);
		if (InterfacePtr)
		{
			// Get the location from the interface and teleport the mesh
			FVector TargetLocation = InterfacePtr->GetLocation();
			MeshComponent->SetWorldLocation(TargetLocation);
		}
	}
}
