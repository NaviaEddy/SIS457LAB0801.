// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickPrueba.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ABrickPrueba : public ABrick
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	int cont = 0;

};
