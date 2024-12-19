// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/ShardsongCharacterBase.h"
#include "ShardsongCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongCharacter : public AShardsongCharacterBase
{
	GENERATED_BODY()
	
public:
	AShardsongCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
};
