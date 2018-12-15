// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PunchKick06GameMode.h"
#include "PunchKick06Character.h"
#include "UObject/ConstructorHelpers.h"

APunchKick06GameMode::APunchKick06GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
