// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/ShardsongCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "ShardsongEnemy.generated.h"

/**
 * 
 */
UCLASS()
class SHARDSONG_API AShardsongEnemy : public AShardsongCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AShardsongEnemy();

	// Begin Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	// End Enemy Interface

protected:
	virtual void BeginPlay() override;
};
