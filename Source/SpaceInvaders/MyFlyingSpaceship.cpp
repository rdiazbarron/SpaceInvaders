// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFlyingSpaceship.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "EnemyProjectile.h"
#include "EnemySpaceship2.h"
#include "Projectile.h"
#include "Bomb.h"
#include "Kapsule.h"

AMyFlyingSpaceship::AMyFlyingSpaceship()
{	
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MyShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	
	SpaceshipMeshComponent->SetStaticMesh(MyShipMesh.Object);
	SetActorScale3D(FVector(0.75f, 0.75f, 0.75f));
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	MoveSpeed = 1000.0f;

	GunOffset = FVector(90.f, 0.f, 0.f);
	GunOffset2 = FVector(200.f, 0.f, 0.f);
	FireRate = 1.1f;
	bCanFire = true;
	FiestaTime = 10;
	powerfullFlag = false;
	Location2 = FVector(50, 50, 0);
	Rotation2 = FRotator(50, 50, 0);
	FireForwardValue = 1.0f;
	FireRightValue = 0.0f;
	MaxVelocity = 250.0f;
	FRotator Rotation;
	Rotation.Yaw = 180.0f;

	MyShipInventory = CreateDefaultSubobject<UInventoryComponent2>("MyInventory");
	valueMovement = false;
	MyItems.Add("Vida", 0);
	
	Accion = "minicartero";
	
}

void AMyFlyingSpaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	InputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AMyFlyingSpaceship::Fire);
	//InputComponent->BindAction("DropItem",EInputEvent::IE_Pressed, this,&AMyFlyingSpaceship::DropItem);

}

void AMyFlyingSpaceship::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	//// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	if (ForwardValue != 0.0f || RightValue != 0.0f) {

		if (ForwardValue != FireForwardValue) {
			FireForwardValue = ForwardValue;
		}

		if (RightValue != FireRightValue) {
			FireRightValue = RightValue;
		}
	}

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	if (Movement.SizeSquared() > 0.0f)
	{
		setCambiarAccion("Movimiento");
	}
	if (Movement.SizeSquared() == 0.0f)
	{
		setCambiarAccion("Quieto");
	}
	if (BulletCount > 2) {
		setCambiarAccion("Disparando");
		BulletCount = BulletCount - DeltaSeconds;
	}
	

	//Fire();

}

void AMyFlyingSpaceship::ShotTimerExpired()
{
	bCanFire = true;
}

void AMyFlyingSpaceship::PowerfullGunExpired()
{
	powerfullFlag = false;
}

void AMyFlyingSpaceship::Explode()
{
	if (ShipExplosionPlayer)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionPlayer, GetActorTransform());
	}

	Destroy();
}

void AMyFlyingSpaceship::TakeItem(AKapsule* InventoryItem)
{
	InventoryItem->PickUp();
	MyShipInventory->AddToInventory(InventoryItem);
}

void AMyFlyingSpaceship::Subscribe(APawn* Subscriber)
{
	Subscribers.Add(Subscriber);

}

void AMyFlyingSpaceship::UnSubscribe(APawn* SubscriberToRemove)
{
	//Remove the passed Subscriber
	Subscribers.Remove(SubscriberToRemove);
}

void AMyFlyingSpaceship::NotifySubscribers()
{
	for (APawn* Enemigos : Subscribers)
	{
		//Cast each of them to a concrete Subscriber
		IMySubscribers* Sub = Cast<IMySubscribers>(Enemigos);
		if (Sub)
		{
			//Notify each of them that something has changed, so they can execute their own routine
				Sub->Update(this);
		}
	}
}

void AMyFlyingSpaceship::CambiarAccion()
{
	NotifySubscribers();
}

void AMyFlyingSpaceship::setCambiarAccion(FString miAccion)
{
	Accion = miAccion;
	CambiarAccion();
}


void AMyFlyingSpaceship::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AKapsule* Capsula = Cast<AKapsule>(Other);
	if (Capsula)
	{
		FString n = Capsula->GetNombre();
		if (Capsula != nullptr)

		{
			for (auto& pair : MyItems)
			{
				if (pair.Key == n)
				{
					pair.Value = pair.Value + 1;
					break;
				}
			}

			TakeItem(Capsula);
		}

		//FString s = "Velocidad";

		for (auto& pair : MyItems)
		{
			if (n == "MejorarVelocidad")
			{
				pair.Value = pair.Value - 1;
				MoveSpeed += 300;
				break;
			}
		}

		for (auto& pair : MyItems)
		{
			if (n == "MejorarArma")
			{
				pair.Value = pair.Value - 1;
				FireRate = FireRate - FireRate * 0.25;
				break;
			}
		}

		for (auto& pair : MyItems)
		{
			if (n == "EmpeorarArma")
			{
				pair.Value = pair.Value - 1;
				FireRate = FireRate + FireRate * 0.25;
				break;
			}
		}

		for (auto& pair : MyItems)
		{
			if (n == "DecrementarVel")
			{
				pair.Value = pair.Value - 1;
				MoveSpeed -= 300;
				break;
			}
		}

		for (auto& pair : MyItems)
		{
			if (n == "SuperArma")
			{
				powerfullFlag = true;
				GetWorld()->GetTimerManager().SetTimer(PowerfullGunTimer, this, &AMyFlyingSpaceship::PowerfullGunExpired, FiestaTime, true);
			}
		}
	}
}

void AMyFlyingSpaceship::Fire()
{
	
	if (bCanFire == true) {

		// Create fire direction vector
		const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
		FireShot(FireDirection);
	}
}
void AMyFlyingSpaceship::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (powerfullFlag == true)
	{
		if (bCanFire == true)
		{
			FRotator FireRotation = GetActorRotation();
			FireRotation.Yaw = 0.f;
			//const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<ABomb>(SpawnLocation, FireRotation);

				FireRotation.Yaw = 30.f;
				SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
				World->SpawnActor<ABomb>(SpawnLocation, FireRotation);


				FireRotation.Yaw = -30.f;
				SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
				World->SpawnActor<ABomb>(SpawnLocation, FireRotation);
				BulletCount += 3.0f;
			}
			bCanFire = false;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AMyFlyingSpaceship::ShotTimerExpired, FireRate, true);
			

		}
	}
	else
	{
		if (bCanFire == true)
		{

			const FRotator FireRotation = FireDirection.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				World->SpawnActor<ABomb>(SpawnLocation, FireRotation);
				BulletCount += 1.0f;
				
			}
			bCanFire = false;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AMyFlyingSpaceship::ShotTimerExpired, FireRate, true);

		}
	}
	
}

void AMyFlyingSpaceship::BeginPlay()
{
	Super::BeginPlay();

	valueMovement = false;
	ValueShoot = 0.f;
	
}

