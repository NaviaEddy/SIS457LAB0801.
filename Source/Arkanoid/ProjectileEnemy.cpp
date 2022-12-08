// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileEnemy.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AProjectileEnemy::AProjectileEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Assets/Meshes/SM_Projectile.SM_Projectile'"));
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);	
	RootComponent = ProjectileMesh;


}

// Called when the game starts or when spawned
void AProjectileEnemy::BeginPlay()
{
	Super::BeginPlay();

	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectileEnemy::OnHit);
	
}

// Called every frame
void AProjectileEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Creo la direccion y el vector movimiento
	/*const FVector MoveDirection = FVector(0.0f, 0.0f, -1.0f);
	const FVector Movement = MoveDirection * Speed * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);

	}*/

}

void AProjectileEnemy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	/*if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}*/

	//Destroy();
}

