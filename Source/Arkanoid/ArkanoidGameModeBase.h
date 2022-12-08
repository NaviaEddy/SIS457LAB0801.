// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoidGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AArkanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		
public:

	AArkanoidGameModeBase();

private:

	//Actor constructor
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
		class ACreationOfTheFinalBoos* BossFinal;

	//Actor nivel
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
		class ANivelFinal* NivelFinal;


protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
