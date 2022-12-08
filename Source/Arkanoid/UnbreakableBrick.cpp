// Fill out your copyright notice in the Description page of Project Settings.


#include "UnbreakableBrick.h"
#include "Ball.h"

AUnbreakableBrick::AUnbreakableBrick()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshBrick(TEXT("StaticMesh'/Game/Assets/Meshes/SM_BrickIrrompible.SM_BrickIrrompible'"));
	SM_Brick->SetStaticMesh(MeshBrick.Object);
	
}

void AUnbreakableBrick::BeginPlay()
{
	Super::BeginPlay();
}

void AUnbreakableBrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {

		ABall* MyBall = Cast<ABall>(OtherActor);

		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBounce - 1.0f);

		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

	}
}
