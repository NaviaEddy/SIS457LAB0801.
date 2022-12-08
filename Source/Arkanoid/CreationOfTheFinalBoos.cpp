// Fill out your copyright notice in the Description page of Project Settings.


#include "CreationOfTheFinalBoos.h"
#include "Brick.h"
#include "BrickPrueba.h"
#include "UnbreakableBrick.h"
#include "FinalBricks.h"

// Sets default values
ACreationOfTheFinalBoos::ACreationOfTheFinalBoos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreationOfTheFinalBoos::BeginPlay()
{
	Super::BeginPlay();

	//Spawn de los bricks Finales
	FinalBricks = GetWorld()->SpawnActor<AFinalBricks>(AFinalBricks::StaticClass());

	//Adjuntarlo al constructor
	FinalBricks->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ACreationOfTheFinalBoos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACreationOfTheFinalBoos::BuildBricks1()
{
	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks1(): Bricks1 es NULL, Asegurese de que este inicializado.")); 
		return; 

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks1("Cabeza del boss");

		FVector Spawn1(-50.0f, 0.0f, 400.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 3; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;

		}
		
	}
}

void ACreationOfTheFinalBoos::BuildBricks2()
{

	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks2(): Bricks2 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks2("Cuerpo medio");

		FVector Spawn1(-25.0f, 0.0f, 380.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 0; i <= 1; i++) {

			Brick = GetWorld()->SpawnActor<ABrickPrueba>(ABrickPrueba::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;

		}

		FVector Spawn3(-25.0f, 0.0f, 360.0f);
		for (int i = 0; i <= 1; i++) {

			Brick = GetWorld()->SpawnActor<ABrickPrueba>(ABrickPrueba::StaticClass(), Spawn3, FRotator::ZeroRotator);

			Spawn3 = Spawn3 + Spawn2;

		}

		FVector Spawn4(-100.0f, 0.0f, 380.0f);
		FVector Separacion(200.0f, 0.0f, 0.0f);
		for (int i = 0; i <= 1; i++) {

			Brick = GetWorld()->SpawnActor<ABrickPrueba>(ABrickPrueba::StaticClass(), Spawn4, FRotator::ZeroRotator);

			Spawn4 = Spawn4 + Separacion;

		}

		FVector Spawn5(-25.0f, 0.0f, 340.0f);
		for (int i = 0; i <= 1; i++) {

			Brick = GetWorld()->SpawnActor<ABrickPrueba>(ABrickPrueba::StaticClass(), Spawn5, FRotator::ZeroRotator);

			Spawn5 = Spawn5 + Spawn2;

		}
	}

}

void ACreationOfTheFinalBoos::BuildBricks3()
{

	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks3(): Bricks3 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks3("Cuerpo Bajo");

		FVector Spawn1(0.0f, 0.0f, 320.0f);

		Brick = GetWorld()->SpawnActor<ABrickPrueba>(ABrickPrueba::StaticClass(), Spawn1, FRotator::ZeroRotator);

	}

}

void ACreationOfTheFinalBoos::BuildBricks4()
{

	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks4(): Bricks4 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		////Creamos el brick para el boss
		FinalBricks->SetBricks4("Disparadores 1");

		FVector Spawn1(-65.0f, 0.0f, 365.0f);
		FVector Spawn2(130.0f, 0.0f, 0.0f);

		for (int i = 0; i <= 1; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator(90.0f, 0.0f, 0.0f));

			Spawn1 = Spawn1 + Spawn2;
		}
	}

}

void ACreationOfTheFinalBoos::BuildBricks5()
{
	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks5(): Bricks5 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks5("Disparadores 2");

		FVector Spawn1(-100.0f, 0.0f, 346.0f);
		FVector Spawn2(200.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 2; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator(90.0f, 0.0f, 0.0f));

			Spawn1 = Spawn1 + Spawn2;
		}
	}
}

void ACreationOfTheFinalBoos::BuildBricks6()
{
	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks6(): Bricks6 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks6("Linea Indestructible");

		FVector Spawn1(-75.0f, 0.0f, 280.0f);
		FVector Spawn2(30.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 6; i++) {

			Brick = GetWorld()->SpawnActor<AUnbreakableBrick>(AUnbreakableBrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;
		}
	}
}

AFinalBricks* ACreationOfTheFinalBoos::GetFinalBricks() 
{
	//Devuele los actores bricks del constructor
	return FinalBricks;
}
