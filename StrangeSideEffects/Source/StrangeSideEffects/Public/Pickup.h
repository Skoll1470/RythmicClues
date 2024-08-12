// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

class USphereComponent;
class UNiagaraComponent;
class USpotLightComponent;
class UPointLightComponent;

UCLASS()
class STRANGESIDEEFFECTS_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComponent = nullptr;

	UFUNCTION()
	void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ParticleEffects, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* ParticleEffect = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* PickupSound;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	float RunningTime = 0.f;

	UPROPERTY(EditAnywhere)
	USpotLightComponent* SpotLight = nullptr;

	UPROPERTY(EditAnywhere)
	UPointLightComponent* PointLight = nullptr;
};
