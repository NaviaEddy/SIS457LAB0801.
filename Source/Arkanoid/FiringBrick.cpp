// Fill out your copyright notice in the Description page of Project Settings.


#include "FiringBrick.h"
#include "ProjectileEnemy.h"

void AFiringBrick::BeginPlay()
{
	Super::BeginPlay();

	//ProjectileNaveEnemiga();
}

void AFiringBrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//ProjectileNaveEnemiga();
}

void AFiringBrick::ProjectileNaveEnemiga()
{
	//if (Disparo)
	//{
	//	// Spawn de projectiles
	//	const FVector SpawnLocation = GetActorLocation();
	//	GetWorld()->SpawnActor<AProjectileEnemy>(SpawnLocation, FRotator(90.0f, 0.0f, 0.0f));
	//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("Spawn de bala")));
	//	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	//}
}
