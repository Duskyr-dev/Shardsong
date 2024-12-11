// Copyright Moonblossom Studios


#include "ShardsongCharacterBase.h"

// Sets default values
AShardsongCharacterBase::AShardsongCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShardsongCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShardsongCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShardsongCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

