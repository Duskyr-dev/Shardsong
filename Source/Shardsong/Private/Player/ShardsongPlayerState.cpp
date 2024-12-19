// Copyright Moonblossom Studios

#include "Player/ShardsongPlayerState.h"
#include "AbilitySystem/ShardsongAbilitySystemComponent.h"
#include "AbilitySystem/ShardsongAttributeSet.h"

AShardsongPlayerState::AShardsongPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UShardsongAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UShardsongAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* AShardsongPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
