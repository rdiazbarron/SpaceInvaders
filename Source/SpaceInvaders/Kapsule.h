// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Kapsule.generated.h"

UCLASS()
class SPACEINVADERS_API AKapsule : public APawn
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere,Category = "Patron Factory")
		FString Nombre;
	UPROPERTY(EditAnywhere, Category = "Patron Factory")
		FString TipoCapsula;
	UPROPERTY(EditAnywhere, Category = "Patron Factory")
		FString TipoEfecto; //Egregar salud, agregar arma
	UPROPERTY(EditAnywhere, Category = "Patron Factory")
		FString TipoDuracion; //A partir de su uso hasta que pierda la vida el jugador, por 10 segundos

	UPROPERTY(EditAnywhere, Category = "Patron Factory")
		class UStaticMeshComponent* KapsuleMeshComponent;
public:

	AKapsule();
	

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY()
		class UCapsuleMovementComponent* KapsuleMovement;

	
	virtual void Tick(float DeltaTime);

	virtual void PickUp();

	virtual void PutDown(FTransform TargetLocation);

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	virtual void Generar();
	void Cargar();

	FORCEINLINE FString GetNombre() const { return Nombre; }
	FORCEINLINE void SetNombre(FString _Nombre) { Nombre = _Nombre; }
	FORCEINLINE UStaticMeshComponent* GetKapsuleMesh() const { return KapsuleMeshComponent; }

};
