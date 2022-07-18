// Fill out your copyright notice in the Description page of Project Settings.


#include "Obs_Enemigo.h"
#include "MyFlyingSpaceship.h"
#include "EnemyProjectile.h"

// Sets default values
AObs_Enemigo::AObs_Enemigo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipEnemyAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	ShipMeshEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemy2Mesh"));
	ShipMeshEnemy->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshEnemy->SetStaticMesh(ShipEnemyAsset.Object);


	//AccionesGlobal = "";
	DistanceShoot = FVector(100.f, 0.f, 0.f);
	TimeToSpawnShoot = 2.f;
	ShootTime = 0;
	Accion = "minicartero";
}

// Called when the game starts or when spawned
void AObs_Enemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame


void AObs_Enemigo::Destroyed()
{
	Super::Destroyed();

	//Log Error si su Clock Tower es NULL
	if (!ControlTower) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Darse de baja de la Torre del Reloj si se destruye
	ControlTower->UnSubscribe(this);
}

void AObs_Enemigo::Update(class AMyFlyingSpaceship* AMyFlyingSpaceshipPublisher)
{
	Tareas();
}


void AObs_Enemigo::Tareas()
{
	if (!ControlTower) {
		UE_LOG(LogTemp, Error, TEXT("Acciones(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Obtener la hora actual de la Torre del Reloj
	Accion = ControlTower->GetAccion();
}

void AObs_Enemigo::setTorreControl(class AMyFlyingSpaceship* _ControlTower)
{
	//Error de registro si la torre del reloj aprobada es NULL
	if (!ControlTower) {
		UE_LOG(LogTemp, Error, TEXT("setTorreControl(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Configura la torre del reloj y suscríbete a eso
	ControlTower = _ControlTower;
	ControlTower->Subscribe(this);
}

void AObs_Enemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Accion.Compare("Estatico"))
	{
		// jugador no se mueve
		const FVector MoveDirection = FVector(0.f, 0.f, 0.f);
		const FVector Movement = MoveDirection * 0.f * DeltaTime;;
		const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}


	if (!Accion.Compare("Movimiento"))
	{
		// jugador se mueve pero no dispara
		MaxVelocity = 60.f;

		const FVector MoveDirection = FVector(-1.f, 0.f, 0.f);
		const FVector Movement = MoveDirection * MaxVelocity * DeltaTime;

		if (Movement.SizeSquared() > 0.0f) {
			const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

			FHitResult Hit(1.0f);
			RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		}
	}

	if (!Accion.Compare("Atacando"))
	{
		// jugador dispara
		srand(time(NULL));
		float MovementY = rand() % 5 - 1;
		MaxVelocity = 20.f;

		const FVector MoveDirection = FVector(0.f, MovementY, 0.f);
		const FVector Movement = MoveDirection * MaxVelocity * DeltaTime;

		if (Movement.SizeSquared() > 0.0f) {
			const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

			FHitResult Hit(1.0f);
			RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		}

		ShootTime += DeltaTime;
		if (ShootTime >= TimeToSpawnShoot) {
			ShootTime = 0.0f;
			const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
			const FRotator FireRotation = MoveDirectionBullet.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(DistanceShoot);

			UWorld* const World = GetWorld();
			if (World != nullptr)
				World->SpawnActor<AEnemyProjectile>(SpawnLocation, FireRotation);
		}
	}
}
// Called to bind functionality to input
//void AObs_Enemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

