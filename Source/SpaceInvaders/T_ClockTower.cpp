// Fill out your copyright notice in the Description page of Project Settings.


#include "T_ClockTower.h"

AT_ClockTower::AT_ClockTower()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AT_ClockTower::BeginPlay()
{
	Super::BeginPlay();
}

void AT_ClockTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AT_ClockTower::TimeChanged()
{
	NotifySubscribers();
}

void AT_ClockTower::SetTimeOfDay(FString myTime)
{
	Time = myTime;
	TimeChanged();

}
