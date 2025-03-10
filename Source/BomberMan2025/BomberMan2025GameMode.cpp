// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan2025GameMode.h"
#include "BomberMan2025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"
#include "Esfera.h"


ABomberMan2025GameMode::ABomberMan2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan2025GameMode::BeginPlay()
{
	Super::BeginPlay();
	

	// Variables para la generación en cuadrícula
	const float Spacing = 200.0f; // Espaciado configurable
	int numeroBloqueConMovimiento = 0;

	// Generar 10 objetos de Bloque
	for (int i = 0; i < 10; i++)
	{
		FVector SpawnLocation = FVector(i * Spacing, 0.0f, 100.0f);
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), SpawnLocation, SpawnRotation);
		bloque->bPuedeMoverse = (FMath::RandBool() && numeroBloqueConMovimiento < 7);
		GEngine->AddOnScreenDebugMessage(-1,4.0f , FColor::Red, TEXT("Bloques y Muros en cuadrícula spawneados"));
		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}
	}

	// Generar 20 objetos de Muro
	for (int i = 0; i < 20; i++)
	{
		FVector SpawnLocation = FVector(i * Spacing + 1000.0f, (i / 5) * Spacing, 100.0f);
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

		AMuro* Muro1 = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), SpawnLocation, SpawnRotation);
		if (Muro1)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("¡Muro generado!"));

		}

	}

	// Generar 1 objeto de Esfera
	FVector SpawnLocation = FVector(0.0f, 0.0f, 100.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator; // Añadir rotación
	//FActorSpawnParameters SpawnParams;              // Parámetros de spawn (requeridos)

	SpawnedActor = GetWorld()->SpawnActor<AEsfera>(AEsfera::StaticClass(), SpawnLocation, SpawnRotation);

	// para el tiempo
	FTimerHandle Timer;

	GetWorldTimerManager().SetTimer(Timer, this,&ABomberMan2025GameMode::DestroyActorFunction, 10);
	SetLifeSpan(10);//podemos cambiar el tiempo
}
//funcion destruir 
void ABomberMan2025GameMode::DestroyActorFunction()
{
	
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}
