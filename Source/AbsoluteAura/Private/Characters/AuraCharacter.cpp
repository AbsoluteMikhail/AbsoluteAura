// Copyright Notice © 2025, Mikhail Efremov. All rights reserved.

#include "Characters/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


AAuraCharacter::AAuraCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AAuraCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AAuraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}
