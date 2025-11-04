// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#include "Characters/AuraEnemy.h"


AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAuraEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
