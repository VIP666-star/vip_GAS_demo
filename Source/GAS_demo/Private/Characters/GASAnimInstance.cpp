// A GAS demo


#include "Characters/GASAnimInstance.h"
#include "Characters/GASCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


void UGASAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	AGASCharacter* GASCharacter = Cast<AGASCharacter>(TryGetPawnOwner());
	if (GASCharacter == nullptr) return;
	
	FVector Speed = GASCharacter->GetVelocity();
	Speed.Z = 0.f;
	GroundSpeed = Speed.Size();
	
	bIsFalling = GASCharacter->GetCharacterMovement()->IsFalling();
	
	bShouldMove = GroundSpeed > 0.f;
}
