// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "FiringBrick.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AFiringBrick : public ABrick
{
	GENERATED_BODY()
	
protected:

	bool Disparo = true;

	FTimerHandle TimerHandle_ShotTimerExpired;

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
	//Creacion del projectil
	void ProjectileNaveEnemiga();

};
