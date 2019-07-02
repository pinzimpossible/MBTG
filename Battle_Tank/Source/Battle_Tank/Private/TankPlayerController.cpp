// Fill out your copyright notice in the Description page of Project Settings.

#include "Battle_Tank.h"
#include "TankPlayerController.h"


ATank* ATankPlayerController::GetControllerTank() const {
	return Cast<ATank>(GetPawn());
}
