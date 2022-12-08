// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickPrueba.h"
#include "Ball.h"
#include "Components/BoxComponent.h"


void ABrickPrueba::BeginPlay()
{
	Super::BeginPlay();

}

void ABrickPrueba::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{

	if (OtherActor->ActorHasTag("Ball")) {

		ABall* MyBall = Cast<ABall>(OtherActor);

		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBounce - 1.0f);

		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El brick es de doble golpe")));

		cont = cont + 1;
	}

	if (cont == 2) {
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABrick::DestroyBrick, 0.1f, false);
		
	}
	
}
