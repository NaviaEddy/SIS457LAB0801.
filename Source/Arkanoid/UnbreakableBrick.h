// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "UnbreakableBrick.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AUnbreakableBrick : public ABrick
{
	GENERATED_BODY()

public:
	AUnbreakableBrick();

protected:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Mesh;

	virtual void BeginPlay() override;

	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	
};
