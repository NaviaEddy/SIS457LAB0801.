// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BossBody.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBossBody : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARKANOID_API IBossBody
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Funciones virtuales puras del JefeFinal
	virtual void SetBricks1(FString Bricks1) = 0;
	virtual void SetBricks2(FString Bricks2) = 0;
	virtual void SetBricks3(FString Bricks3) = 0;
	virtual void SetBricks4(FString Bricks4) = 0;
	virtual void SetBricks5(FString Bricks5) = 0;
};
