// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorKapsule.h"

// Sets default values
AGeneratorKapsule::AGeneratorKapsule()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneratorKapsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeneratorKapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
//void AGeneratorKapsule::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

//AKapsule* GetKapsule(FString TypeKapsule)
//{
//	
//}

//AKapsule* AGeneratorKapsule::GetKapsule(AKapsule TypeKapsule)
//{
//	AKapsule* Kapsule = CreateKapsule(NameTypeKapsule);
//	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Fabricando capsula %s"), *capsula->GetNombre()));
//	return Kapsule;
//}
//
//AKapsule* GetKapsule(AKapsule TypeKapsule)
//{
//	
//}
