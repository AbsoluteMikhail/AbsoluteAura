// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#include "Characters/AuraEnemy.h"
#include "AbsoluteAura.h"


AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuraEnemy::HighLightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);

	// Почти PrintString
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(111, 5.0f, FColor::Green, "I am highlighted!");
	// больше про логирование
	// https://www.chrismccole.com/blog/logging-in-ue4-cpp
	// https://www.unrealcommunity.wiki/logging-lgpidy6i
}

void AAuraEnemy::UnHighLightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
