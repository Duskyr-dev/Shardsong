// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/ShardsongCharacterBase.h"
#include "ShardsongEnemy.generated.h"
#include "Interaction/EnemyInterface.h"

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongEnemy : public AShardsongCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};
