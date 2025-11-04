// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

class IInteractInterface;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;


/**
 * 
 */
UCLASS()
class ABSOLUTEAURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category="Inputs")
	TObjectPtr<UInputMappingContext> AuraContext;
	UPROPERTY(EditAnywhere, Category="Inputs")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();
	IInteractInterface* LastActor = nullptr;
	IInteractInterface* ThisActor = nullptr;
};
