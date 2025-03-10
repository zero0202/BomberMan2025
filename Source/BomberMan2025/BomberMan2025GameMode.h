// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan2025GameMode.generated.h"

class AEsfera;
UCLASS(minimalapi)
class ABomberMan2025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan2025GameMode();

	virtual void BeginPlay() override;

	//funcion para destruir el actor esfera
	UPROPERTY()
	AEsfera* SpawnedActor;
	UFUNCTION()
	void DestroyActorFunction();
};



