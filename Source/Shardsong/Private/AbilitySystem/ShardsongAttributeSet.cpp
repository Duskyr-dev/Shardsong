// Copyright Moonblossom Studios


#include "AbilitySystem/ShardsongAttributeSet.h"
#include "Net/UnrealNetwork.h"

UShardsongAttributeSet::UShardsongAttributeSet()
{
	InitHealth(100.f);
	InitMaxHealth(100.f);
	InitMana(50.f);
	InitMaxMana(50.f);
}

void UShardsongAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UShardsongAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShardsongAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShardsongAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShardsongAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void UShardsongAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShardsongAttributeSet, Health, OldHealth);
}

void UShardsongAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShardsongAttributeSet, MaxHealth, OldMaxHealth);
}

void UShardsongAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShardsongAttributeSet, Mana, OldMana);
}

void UShardsongAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShardsongAttributeSet, MaxMana, OldMaxMana);
}
