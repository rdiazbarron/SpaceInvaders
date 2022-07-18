// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleMovementComponent.h"

// Sets default values for this component's properties
UCapsuleMovementComponent::UCapsuleMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	aux= true;
	// ...
}


// Called when the game starts
void UCapsuleMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCapsuleMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	if (Parent)
	{
		if (aux)
		{
			Parent->SetActorLocation(Parent->GetActorLocation() + FVector(-1.0f, FMath::FRandRange(-2, 2) * 2, 0.0f));
			aux = false;
		}
		else
		{
			Parent->SetActorLocation(Parent->GetActorLocation() + FVector(0.2f, 0.7, 0.0f));
			aux = true;
		}
		
	}
}

