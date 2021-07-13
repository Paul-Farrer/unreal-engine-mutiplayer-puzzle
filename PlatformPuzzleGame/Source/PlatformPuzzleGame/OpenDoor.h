// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLATFORMPUZZLEGAME_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);
	float TotalMassOfActors() const;
		
private:

	float InitialYaw;
	float CurrentYaw;

	UPROPERTY(EditAnywhere)
		float MassToOpenDoors = 50.f;

	UPROPERTY(EditAnywhere) // displays the property within the details panel (Equivalent to Unity's [SerializedField])
		float TargetOpenYaw = 90.f;

	UPROPERTY(EditAnywhere) // displays the property within the details panel (Equivalent to Unity's [SerializedField])
		float TargetCloseYaw = 0.f;

	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
		AActor* ActorThatOpens;

	UPROPERTY(EditAnywhere)
		float DoorLastOpened = 0.f;
	UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 2.f;
};
