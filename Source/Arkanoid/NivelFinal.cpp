// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelFinal.h"
#include "FinalBricks.h"

// Sets default values
ANivelFinal::ANivelFinal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANivelFinal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANivelFinal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivelFinal::SetBossInterfaces(AActor* Boss)
{
	BossInterfaces = Cast<IBossInterfaces>(Boss);

	if (!BossInterfaces) { //Lanzamos un error si la conversion falla
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("¡Elenco no válido! Consulte Registro de salida para obtener más detalles."));
		UE_LOG(LogTemp, Error, TEXT("SetBossInterfaces(): ¡El actor no es un constructor de Boss! ¿Está seguro de que el actor implementa esa interfaz?"));
	}
}

AFinalBricks* ANivelFinal::GetFinalBricks()
{
	if (BossInterfaces)
	{
		//Devuelve el constructor del boss
		return BossInterfaces->GetFinalBricks();
	}
	else {
		//Registrar si el constructor es NULL
		UE_LOG(LogTemp, Error, TEXT("GetFinalBoss(): Devuelve un NULLPTR"));
		return nullptr;
	}

}

void ANivelFinal::ConstructFinalBricks()
{
	//Registrar si el constructor es NULL
	if (!BossInterfaces) {
		UE_LOG(LogTemp, Error, TEXT("ConstructFinalBricks(): BoosInterfaces es NULL, asegúrese de que este inicializado."));
		return; 
	}
	else {
		//Creacion del Boss
		BossInterfaces->BuildBricks1();
		BossInterfaces->BuildBricks2();
		BossInterfaces->BuildBricks3();
		BossInterfaces->BuildBricks4();
		BossInterfaces->BuildBricks5();
	}


}