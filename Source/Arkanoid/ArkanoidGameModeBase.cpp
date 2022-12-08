// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"
#include "CreationOfTheFinalBoos.h"
#include "NivelFinal.h"
#include "FinalBricks.h"
#include "FiringBrick.h"
#include "ProjectileEnemy.h"

AArkanoidGameModeBase::AArkanoidGameModeBase()
{
}

void AArkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawn del boss y del nivel
	BossFinal = GetWorld()->SpawnActor<ACreationOfTheFinalBoos>(ACreationOfTheFinalBoos::StaticClass());

	NivelFinal = GetWorld()->SpawnActor<ANivelFinal>(ANivelFinal::StaticClass());

	//Establece el constructor para el nivel final y crea al boos
	NivelFinal->SetBossInterfaces(BossFinal);
	NivelFinal->ConstructFinalBricks();

	//Obtiene el boss del nivel final y registra las partes del boss
	AFinalBricks* FinalBricks = NivelFinal->GetFinalBricks();
	FinalBricks->BossCharacteristics();

}

void AArkanoidGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
