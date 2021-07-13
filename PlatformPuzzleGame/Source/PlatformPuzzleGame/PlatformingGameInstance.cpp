// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformingGameInstance.h"
#include "Engine/Engine.h"

UPlatformingGameInstance::UPlatformingGameInstance(const FObjectInitializer &ObjectInitializer)
{
    UE_LOG(LogTemp, Warning, TEXT("GameInstance Constructor"));
}

void UPlatformingGameInstance::Init()
{
    UE_LOG(LogTemp, Warning, TEXT("GameInstance Init"));
}

void UPlatformingGameInstance::Host()
{
    UEngine* Engine = GetEngine();
    if (!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

    UWorld* World = GetWorld();
    if (!ensure(World != nullptr)) return; //nullptr check
    
    World->ServerTravel("/Game/ThirdPersonExampleMap?listen");

}

void UPlatformingGameInstance::Join(const FString& Address)
{
    UEngine* Engine = GetEngine();
    if (!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if (!ensure(PlayerController != nullptr)) return;

    PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}
