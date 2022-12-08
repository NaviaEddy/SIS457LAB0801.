// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossInterfaces.h"
#include "CreationOfTheFinalBoos.generated.h"
UCLASS()
class ARKANOID_API ACreationOfTheFinalBoos : public AActor, public IBossInterfaces
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreationOfTheFinalBoos();

private:

	//El actor de los bricks finales
	UPROPERTY(VisibleAnywhere, Category = "BossFinal")
		class AFinalBricks* FinalBricks;

	UPROPERTY(VisibleAnywhere)
		class ABrick* Brick;

	UPROPERTY(VisibleAnywhere)
		class ABrickPrueba* BrickPrueba;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creacion de los bricks 1
	virtual void BuildBricks1() override;

	//Creacion de los bricks 2
	virtual void BuildBricks2() override;

	//Creacion de los bricks 3
	virtual void BuildBricks3() override;

	//Creacion de los bricks 4
	virtual void BuildBricks4() override;

	virtual void BuildBricks5() override;

	virtual void BuildBricks6() override;

	virtual class AFinalBricks* GetFinalBricks() override;
};
