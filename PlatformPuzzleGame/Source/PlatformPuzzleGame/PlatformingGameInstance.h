// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PlatformingGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMPUZZLEGAME_API UPlatformingGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPlatformingGameInstance(const FObjectInitializer &ObjectInitializer);
	virtual void Init();

	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
	void Join(const FString& Address);
};
