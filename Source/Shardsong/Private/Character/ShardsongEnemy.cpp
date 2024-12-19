// Copyright Moonblossom Studios

#include "Character/ShardsongEnemy.h"
#include "AbilitySystem/ShardsongAbilitySystemComponent.h"
#include "AbilitySystem/ShardsongAttributeSet.h"
#include "Shardsong/Shardsong.h"

AShardsongEnemy::AShardsongEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UShardsongAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UShardsongAttributeSet>("AttributeSet");
}

void AShardsongEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AShardsongEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	GetMesh()->SetCustomDepthStencilValue(false);
	Weapon->SetRenderCustomDepth(false);
	Weapon->SetCustomDepthStencilValue(false);
}
