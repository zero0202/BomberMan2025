// Fill out your copyright notice in the Description page of Project Settings.

#include "BomberMan2025.h"
#include "EsperaTrampa.h"

AEsperaTrampa::AEsperaTrampa()
{
	CurrentScore = 0;
}
void AEsperaTrampa::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;

}

int32 AEsperaTrampa::GetScore()
{
	return CurrentScore;
}
