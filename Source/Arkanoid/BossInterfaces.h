// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BossInterfaces.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBossInterfaces : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARKANOID_API IBossInterfaces
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Funciones virtuales puras del constructor de JefeFinal
	virtual void BuildBricks1() = 0;
	virtual void BuildBricks2() = 0;
	virtual void BuildBricks3() = 0;
	virtual void BuildBricks4() = 0;
	virtual void BuildBricks5() = 0;
	virtual class AFinalBricks* GetFinalBricks() = 0;

};
