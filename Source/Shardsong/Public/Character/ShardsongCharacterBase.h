// Copyright Moonblossom Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShardsongCharacterBase.generated.h"

UCLASS(Abstract)
class SHARDSONG_API AShardsongCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShardsongCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};