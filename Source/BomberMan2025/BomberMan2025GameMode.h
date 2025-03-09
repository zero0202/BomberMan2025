// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan2025GameMode.generated.h"


UCLASS(minimalapi)
class ABomberMan2025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan2025GameMode();

	virtual void BeginPlay() override;
};



