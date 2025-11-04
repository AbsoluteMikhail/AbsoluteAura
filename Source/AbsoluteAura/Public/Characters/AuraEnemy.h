// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Interfaces/InteractInterface.h"
#include "AuraEnemy.generated.h"


UCLASS()
class ABSOLUTEAURA_API AAuraEnemy : public AAuraCharacterBase, public IInteractInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
	
};
