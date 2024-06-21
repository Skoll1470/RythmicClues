// Fill out your copyright notice in the Description page of Project Settings.


#include "InvisibleActor.h"
#include "Kismet/GameplayStatics.h"
#include "StrangeSideEffects/StrangeSideEffectsCharacter.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AInvisibleActor::AInvisibleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

// Called when the game starts or when spawned
void AInvisibleActor::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), AStrangeSideEffectsCharacter::StaticClass());
	PlayerCharacter = Cast<AStrangeSideEffectsCharacter>(FoundActor);
	if (PlayerCharacter != nullptr)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, TEXT("Player casted"));
		}
	}
}

// Called every frame
void AInvisibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PlayerCharacter)
	{
		StaticMesh->SetVisibility(PlayerCharacter->GetIsSeeingInvisible());
	}
	
}

