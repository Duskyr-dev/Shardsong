// Copyright Moonblossom Studios


#include "Player/ShardsongPlayerController.h"
#include "EnhancedInputSubsystems.h"

AShardsongPlayerController::AShardsongPlayerController()
{
	bReplicates = true;
}

void AShardsongPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(NyxaContext);

	UEnhancedInputLocalPlayerSubsystem * Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(NyxaContext, 0);

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);

}
