// Fill out your copyright notice in the Description page of Project Settings.


#include "Esfera.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEsfera::AEsfera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshEsfera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Esfera"));
	MeshEsfera->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshEsfera(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (ObjetoMeshEsfera.Succeeded())
	{
		MeshEsfera->SetStaticMesh(ObjetoMeshEsfera.Object);
		MeshEsfera->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void AEsfera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsfera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

