// Copyright Moonblossom Studios


#include "Character/ShardsongCharacter.h"
#include "AbilitySystem/ShardsongAbilitySystemComponent.h"
#include "Player/ShardsongPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"

AShardsongCharacter::AShardsongCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AShardsongCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Init ability actor info for the Server
	InitAbilityActorInfo();
}

void AShardsongCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// Init ability actor info for the Client
	InitAbilityActorInfo();
}

void AShardsongCharacter::InitAbilityActorInfo()
{
	AShardsongPlayerState* ShardsongPlayerState = GetPlayerState<AShardsongPlayerState>();
	check(ShardsongPlayerState);
	ShardsongPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(ShardsongPlayerState, this);
	AbilitySystemComponent = ShardsongPlayerState->GetAbilitySystemComponent();
	AttributeSet = ShardsongPlayerState->GetAttributeSet();
}
