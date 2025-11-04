// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"


// This class does not need to be modified.
UINTERFACE()
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ABSOLUTEAURA_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighLightActor() = 0;
	virtual void UnHighLightActor() = 0;
};
