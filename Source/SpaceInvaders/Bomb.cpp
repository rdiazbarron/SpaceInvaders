// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "EnemySpaceship2.h"
#include "EnemyProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
ABomb::ABomb()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset1(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset1.Object);
	ProjectileMovement->InitialSpeed = 300.f;
	ProjectileMovement->MaxSpeed = 450.f;
	
	InitialLifeSpan = 10.0f;
}

void ABomb::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	//UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	AEnemySpaceship2* Ememy = Cast<AEnemySpaceship2>(OtherActor);
	if (Ememy)
	{
		Ememy->ExploteAndDestroy();
		this->Destroy();
	}
	AEnemyProjectile* EmemyBullet = Cast<AEnemyProjectile>(OtherActor);
	if (EmemyBullet)
	{
		EmemyBullet->Destroy();
		this->Destroy();
	}
}
