// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShardsongHUD.generated.h"

class UShardsongUserWidget;

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TObjectPtr<UShardsongUserWidget> OverlayWidget;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UShardsongUserWidget> OverlayWidgetClass;
};
