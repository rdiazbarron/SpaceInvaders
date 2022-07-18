// Fill out your copyright notice in the Description page of Project Settings.


//#include "MyShip.h"
//#include "Bomb.h"

//const FName AMyShip::MoveHorizontalBinding("MoveHorizontal");
//const FName AMyShip::MoveVerticalBinding("MoveVertical");
//const FName AMyShip::FireBinding1("Bomb");
//
//AMyShip::AMyShip()
//{
//	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	AutoPossessPlayer = EAutoReceiveInput::Player0;
//
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
//	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshP"));
//	ShipMesh->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
//	ShipMesh->SetStaticMesh(ShipAsset.Object);
//
//	Field_Width = 700.f;
//	Field_Height = 400.f;
//
//	// distancia a spawnear la bala de la nave
//	GunOffset = FVector(90.f, 0.f, 0.f);
//
//	MaxVelocity = 300.0f; // velocidad maxima
//}
//
//void AMyShip::MoveHorizontal(float AxisValue)
//{
//	Current_X_Velocity = MaxVelocity * AxisValue;
//	//ValueMovement = true;
//}
//
//void AMyShip::MoveVertical(float AxisValue)
//{
//	Current_Y_Velocity = MaxVelocity * AxisValue;
//	//ValueMovement = true;
//}
//
//void AMyShip::FireShoot1()
//{
//	const FVector FireDirection = FVector(1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
//	const FRotator FireRotation = FireDirection.Rotation();
//	// Spawn projectile at an offset from this pawn
//	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
//
//	//FVector Location = BulletSpawnPoint->GetComponentLocation();
//	//FRotator Rotation = FireDirection.Rotation();
//
//	UWorld* const World = GetWorld();
//	if (World != nullptr) {
//		// spawn the projectile
//		World->SpawnActor<ABomb>(SpawnLocation, FireRotation);
//	}
//	ValueShoot += 1.5f;
//}
//
//void AMyShip::BeginPlay()
//{
//	Super::BeginPlay();
//	// tomamos la ubicacion actual de la nave jugador
//	Current_Location = this->GetActorLocation();
//
//	ValueMovement = false;
//	ValueShoot = 0.f;
//}
//
//void AMyShip::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	// condicion para hacer mover la nave jugador 
//	if (Current_X_Velocity != 0.0f || Current_Y_Velocity != 0.0f) {
//		New_Location = FVector(Current_Location.X + (Current_X_Velocity * DeltaTime),
//			Current_Location.Y + (Current_Y_Velocity * DeltaTime), 0);
//
//		this->SetActorLocation(New_Location);
//
//		Current_Location = New_Location;
//	}
//
//	// limitando el campo de juego
//	if (this->GetActorLocation().X > Field_Width)
//		Current_Location = FVector(Field_Width - 1, Current_Location.Y, Current_Location.Z);
//	if (this->GetActorLocation().X < -Field_Width)
//		Current_Location = FVector(-Field_Width + 1, Current_Location.Y, Current_Location.Z);
//	if (this->GetActorLocation().Y > Field_Height)
//		Current_Location = FVector(Current_Location.X, Field_Height - 1, Current_Location.Z);
//	if (this->GetActorLocation().Y < -Field_Height)
//		Current_Location = FVector(Current_Location.X, -Field_Height + 1, Current_Location.Z);
//
//	// mandando las acciones que deben hacer los enemigos
//	// jugador no se mueve, enemigo no se mueve
//	if (ValueMovement == false)
//		setCambiarAccion("Estatico");
//
//	// jugador se mueve pero no disparar, enemigo se mueve
//	if (Current_X_Velocity != 0) 
//	{
//		//ValueMovement = false;
//		setCambiarAccion("Movimiento");
//	}
//	if (Current_Y_Velocity != 0)
//	{
//		//ValueMovement = false;
//		setCambiarAccion("Movimiento");
//	}
//
//	// jugador dispara
//	if (ValueShoot >= 0.f) {
//		ValueShoot = ValueShoot - DeltaTime;
//		setCambiarAccion("Atacando");
//	}
//}
//
//void AMyShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	check(PlayerInputComponent);
//
//	// conectando con el unreal para el manejo de las teclas
//	PlayerInputComponent->BindAxis(MoveHorizontalBinding, this, &AMyShip::MoveHorizontal);
//	PlayerInputComponent->BindAxis(MoveVerticalBinding, this, &AMyShip::MoveVertical);
//	InputComponent->BindAction(FireBinding1, IE_Pressed, this, &AMyShip::FireShoot1);
//}
//
//void AMyShip::CambiarAccion()
//{
//	//Cuando la hora ha cambiado, esta Torre del Reloj (que es un Plubisher) notifica a todos los Subscriber que la hora ha cambiado
//	NotifySubscribers();
//}
//
//void AMyShip::setCambiarAccion(FString miAccion)
//{
//	//Establezca la hora usando el par�metro pasado y advierta que ha cambiado
//	Time = miAccion;
//	CambiarAccion();
//}
