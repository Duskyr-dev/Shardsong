// Copyright Moonblossom Studios


#include "UI/HUD/ShardsongHUD.h"
#include "UI/Widget/ShardsongUserWidget.h"

void AShardsongHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
