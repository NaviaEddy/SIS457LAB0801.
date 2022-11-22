// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossInterfaces.h"
#include "NivelFinal.generated.h"
UCLASS()
class ARKANOID_API ANivelFinal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANivelFinal();

private:

	//Definimos el actor constructor del boss
	IBossInterfaces* BossInterfaces;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creacion de los Bricks
	void ConstructFinalBricks();

	//Establecimiento del actor constructor
	void SetBossInterfaces(AActor* Boss);

	//Obtenemos los bricks finales del boss
	class AFinalBricks* GetFinalBricks();

};
