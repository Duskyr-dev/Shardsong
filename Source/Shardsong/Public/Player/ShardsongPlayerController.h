// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShardsongPlayerController.generated.h"


class UInputMappingContext;

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AShardsongPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> NyxaContext;
};
