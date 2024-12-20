// Copyright Moonblossom Studios


#include "UI/Widget/ShardsongUserWidget.h"

void UShardsongUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
