// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"
#include "Battle_Tank.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate speed : %f"), DegreesPerSecond);
}
