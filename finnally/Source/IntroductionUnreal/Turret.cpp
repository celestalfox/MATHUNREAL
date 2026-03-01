#include "Turret.h"

ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshFinder(TEXT("/Engine/EditorMeshes/EditorSphere.EditorSphere"));
	if (SphereMeshFinder.Succeeded())
		SphereMesh = SphereMeshFinder.Object;
	else
		SphereMesh = nullptr;


	MeshRenderer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Renderer"));
	MeshRenderer->SetStaticMesh(SphereMesh);
}

void ATurret::BeginPlay()
{
	Super::BeginPlay();
}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATurret::ApplyDamage(AActor* Entity, int Amount)
{
	if (Entity->GetClass()->ImplementsInterface(UHealth::StaticClass()))
		IHealth::Execute_TakeDamage(Entity, Amount);
}

