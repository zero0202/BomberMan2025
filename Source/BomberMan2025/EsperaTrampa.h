// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "CoreMinimal.h"
#include "Esfera.h"
#include "EsperaTrampa.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN2025_API AEsperaTrampa : public AEsfera
{
	GENERATED_BODY()

public:

	AEsperaTrampa();

	UPROPERTY()
	int32 CurrentScore;
	UFUNCTION()
	int32 GetScore();
	UFUNCTION()
	void SetScore(int32 NewScore);
	
};
