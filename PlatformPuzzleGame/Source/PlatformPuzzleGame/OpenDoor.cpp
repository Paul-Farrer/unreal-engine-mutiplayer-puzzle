// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Components/PrimitiveComponent.h"

#define OUT

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	InitialYaw = GetOwner()->GetActorRotation().Yaw;
	CurrentYaw = InitialYaw;
	TargetOpenYaw += InitialYaw;
	TargetCloseYaw += InitialYaw;

	if (!PressurePlate) // protects from crashes as by protecting against nullptrs 
	{
		UE_LOG(LogTemp, Error, TEXT("%s has the open door component on it but no pressure plate"), *GetOwner()->GetName())
	}

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();








	// float Rotate = 90.f;
	// FRotator CurrentRotation = GetOwner()->GetActorRotation();
	// CurrentRotation.Yaw = Rotate;

	// GetOwner()->SetActorRotation(CurrentRotation);


	// GetOwner()->SetActorRotation(CurrentRotation) + Rotate;

	// FRotator DoorRotation = GetOwner()->GetActorRotation();

	// GetOwner()->SetActorRotation(0, DoorRotation, 0);



}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (TotalMassOfActors() > MassToOpenDoors)
	{
		OpenDoor(DeltaTime);
		DoorLastOpened = GetWorld()->GetTimeSeconds();
	}
	else
	{
		if (GetWorld()->GetTimeSeconds() - DoorLastOpened > DoorCloseDelay)
		{
			CloseDoor(DeltaTime);
		}
	}





	// float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	// FRotator OpenDoor{0.f, TargetYaw, 0.f};
	// OpenDoor.Yaw = FMath::FInterpTo(CurrentYaw, TargetYaw, DeltaTime, 45); // Makes it frame rate independant and makes the door have a nice smooth easing effect
	// GetOwner()->SetActorRotation(OpenDoor);

	// ...
}

void UOpenDoor::OpenDoor(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString()); // has a dereferencer because of the tchar array (Need to confirm this)
	UE_LOG(LogTemp, Warning, TEXT("%f"), GetOwner()->GetActorRotation().Yaw);

	CurrentYaw = FMath::FInterpTo(CurrentYaw, TargetOpenYaw, DeltaTime, 0.5f);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);
}

void UOpenDoor::CloseDoor(float DeltaTime)
{
	CurrentYaw = FMath::FInterpTo(CurrentYaw, TargetCloseYaw, DeltaTime, 2);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);
}

float UOpenDoor::TotalMassOfActors() const
{
	float TotalMass = 0.f;

	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}

