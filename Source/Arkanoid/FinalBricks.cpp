// Fill out your copyright notice in the Description page of Project Settings.


#include "FinalBricks.h"

// Sets default values
AFinalBricks::AFinalBricks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFinalBricks::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinalBricks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFinalBricks::SetBricks1(FString myBricks1)
{
	//Establecemos el nombre de los Bricks1 con el string pasado
	Bricks1 = myBricks1;
}

void AFinalBricks::SetBricks2(FString myBricks2)
{
	//Establecemos el nombre de los Bricks2 con el string pasado
	Bricks2 = myBricks2;
}

void AFinalBricks::SetBricks3(FString myBricks3)
{
	//Establecemos el nombre de los Bricks3 con el string pasado
	Bricks3 = myBricks3;
}

void AFinalBricks::SetBricks4(FString myBricks4)
{
	//Establecemos el nombre de los Bricks4 con el string pasado
	Bricks4 = myBricks4;
}

void AFinalBricks::SetBricks5(FString myBricks5)
{
	//Establecemos el nombre de los bricks5 con el string pasado
	Bricks5 = myBricks5;
}

void AFinalBricks::BossCharacteristics()
{
	//Registra los nombres de cada brick
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Bricks1));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Bricks2));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Bricks3));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Bricks4));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Bricks5));
}

