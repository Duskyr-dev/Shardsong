// Copyright Moonblossom Studios

#include "Actor/ShardsongEffectActor.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/ShardsongAttributeSet.h"
#include "Components/SphereComponent.h"

// Sets default values
AShardsongEffectActor::AShardsongEffectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());
}

void AShardsongEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// TODO: Change this to apply a Gameplay Effect. For now, using const_cast as a hack!
	if (IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const UShardsongAttributeSet* ShardsongAttributeSet = Cast<UShardsongAttributeSet>(ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(UShardsongAttributeSet::StaticClass()));
		
		UShardsongAttributeSet* MutableShardsongAttributeSet = const_cast<UShardsongAttributeSet*>(ShardsongAttributeSet);
		MutableShardsongAttributeSet->SetHealth(ShardsongAttributeSet->GetHealth() + 25.f);
		Destroy();
	}
}

void AShardsongEffectActor::EndOverlap(UPrimitiveComponent* OnComponentEndOverlap, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

// Called when the game starts or when spawned
void AShardsongEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AShardsongEffectActor::OnOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AShardsongEffectActor::EndOverlap);
}
