// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MySubscribers.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMySubscribers : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SPACEINVADERS_API IMySubscribers
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Update(class AMyFlyingSpaceship* AMyFlyingSpaceshipPublisher) = 0;
};
