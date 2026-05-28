// A GAS demo

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GASAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAS_DEMO_API UGASAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float GroundSpeed;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsFalling;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bShouldMove;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bHasAcceleration;
};
