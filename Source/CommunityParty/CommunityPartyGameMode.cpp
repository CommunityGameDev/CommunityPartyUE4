// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "CommunityParty.h"
#include "CommunityPartyGameMode.h"
#include "CommunityPartyCharacter.h"
#include "GameFramework/HUD.h"

ACommunityPartyGameMode::ACommunityPartyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AHUD> DevHud(TEXT("/Game/HUD/DevHud"));
	if (DevHud.Class != NULL)
	{
		HUDClass = DevHud.Class;
	}
}
