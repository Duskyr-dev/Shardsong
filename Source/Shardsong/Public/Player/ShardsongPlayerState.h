// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "ShardsongPlayerState.generated.h"

class UAttributeSet;
class UAbilitySystemComponent;

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AShardsongPlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
