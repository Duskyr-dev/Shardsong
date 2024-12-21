// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShardsongHUD.generated.h"

class UShardsongUserWidget;
class UOverlayWidgetController;
class UAbilitySystemComponent;
class UAttributeSet;
struct FWidgetControllerParams;

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

	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);

protected:

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UShardsongUserWidget> OverlayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;
};
