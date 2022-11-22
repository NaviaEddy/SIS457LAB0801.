// Fill out your copyright notice in the Description page of Project Settings.


#include "CreationOfTheFinalBoos.h"
#include "Brick.h"
#include "time.h"
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

	/*srand(time(NULL));
	float MovementX = rand() % 12 - 5;

	int MoveSpeed = 10;


	const FVector MoveDirection = FVector(MovementX, 0.0f, 0.0f);
	const FVector Movement = MoveDirection * MoveSpeed * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		//const FRotator NewRotation = Movement.Rotation();

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);
	}*/

}

void ACreationOfTheFinalBoos::BuildBricks1()
{
	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks1(): Bricks1 es NULL, Asegurese de que este inicializado.")); 
		return; 

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks1("1ra linea de bricks");

		FVector Spawn1(-50.0f, 0.0f, 360.0f);
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
		FinalBricks->SetBricks2("2da linea de bricks");

		FVector Spawn1(-100.0f, 0.0f, 340.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 5; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;
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
		FinalBricks->SetBricks3("3ra linea de bricks");

		FVector Spawn1(-70.0f, 0.0f, 320.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 4; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;
		}
	}

}

void ACreationOfTheFinalBoos::BuildBricks4()
{

	if (!FinalBricks) {

		UE_LOG(LogTemp, Error, TEXT("BuildBricks4(): Bricks4 es NULL, Asegurese de que este inicializado."));
		return;

	}
	else {

		//Creamos el brick para el boss
		FinalBricks->SetBricks4("4ta linea de bricks");

		FVector Spawn1(-100.0f, 0.0f, 300.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 5; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

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
		FinalBricks->SetBricks5("5ta linea de bricks");

		FVector Spawn1(-50.0f, 0.0f, 280.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 3; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;
		}
	}
}

AFinalBricks* ACreationOfTheFinalBoos::GetFinalBricks() 
{
	//Devuele los actores bricks del constructor
	return FinalBricks;
}
