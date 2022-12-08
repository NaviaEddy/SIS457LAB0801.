// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossBody.h"
#include "FinalBricks.generated.h"
UCLASS()
class ARKANOID_API AFinalBricks : public AActor, public IBossBody
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFinalBricks();

private:

	//Nombre del brick1;
	FString Bricks1;

	//Nombre del brick2;
	FString Bricks2;

	//Nombre del brick3;
	FString Bricks3;

	//Nombre del brick4;
	FString Bricks4;

	//Nombre del brick5;
	FString Bricks5;

	//Nombre del brick6;
	FString Bricks6;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Establece el nombre del brick1
	void SetBricks1(FString myBricks1);

	//Establece el nombre del brick2
	void SetBricks2(FString myBricks2);

	//Establece el nombre del brick3
	void SetBricks3(FString myBricks3);

	//Establece el nombre del brick4
	void SetBricks4(FString myBricks4);

	//Establece el nombre del brick5
	void SetBricks5(FString myBricks5);

	//Establece el nombre del brick5
	void SetBricks6(FString myBricks6);

	//Registra todos los componentes del jefe
	void BossCharacteristics();
};
