// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RandomMovementComponent.h"
#include "NaveEnemigaProductoBase.generated.h"


UCLASS()
class SPACEINVADERS_API ANaveEnemigaProductoBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANaveEnemigaProductoBase();

	UPROPERTY(EditAnywhere, Category = " Nave enemiga patron builder")
		UStaticMeshComponent* MeshEnemigo;

	UPROPERTY(EditAnywhere, Category = " Nave enemiga patron builder")
		USceneComponent* PuntoGeneracionBala;

	UPROPERTY(EditAnywhere, Category = " Nave enemiga patron builder")
		URandomMovementComponent* MovimientoNave;

	//al ser metodos se pueden devolver metodos?

//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;

public:	
	void SetMeshEnemigo(UStaticMeshComponent* _MeshEnemigo) {
		MeshEnemigo = _MeshEnemigo;
	}
	void SetPuntoGeneracionBala(USceneComponent* _PuntoGeneracionBala) {
		PuntoGeneracionBala = _PuntoGeneracionBala;
	}
	void SetMovimiento(URandomMovementComponent* _RandomMovementComponent) {
		MovimientoNave = _RandomMovementComponent;
	}
	//// Called every frame
	//virtual void Tick(float DeltaTime) override;

	//// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
