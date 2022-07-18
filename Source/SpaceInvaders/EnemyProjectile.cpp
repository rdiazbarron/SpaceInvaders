// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyFlyingSpaceship.h"
#include "EnemySpaceship2.h"

AEnemyProjectile::AEnemyProjectile()
{
	ProjectileMovement->InitialSpeed = 200.f;
	ProjectileMovement->MaxSpeed = 500.f;
	InitialLifeSpan = 4.0f;
}

void AEnemyProjectile::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	AMyFlyingSpaceship* Player = Cast<AMyFlyingSpaceship>(OtherActor);
	if (Player)
	{
		Player->Explode();
		this->Destroy();
		const FVector LocationPlayer0 = FVector(120.f, 50.f, 50.f);
		const FRotator RotationPlayer0 = FRotator(0.f, 0.f, 0.f);

		AMyFlyingSpaceship* NaveJugador = GetWorld()->SpawnActor<AMyFlyingSpaceship>(LocationPlayer0, RotationPlayer0);;
	}
	AKapsule* Capsule = Cast<AKapsule>(OtherActor);
	if (Capsule)
		this->Destroy();

	AProjectile* Projectile = Cast<AProjectile>(OtherActor);
	if (Projectile)
		this->Destroy();

	AEnemySpaceship2* EnemyShip = Cast<AEnemySpaceship2>(OtherActor);
	if (EnemyShip)
		this->Destroy();
}
