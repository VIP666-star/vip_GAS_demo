// A GAS demo

#pragma once

#include "CoreMinimal.h"
#include "Characters/GASCharacterBase.h"
#include "GASCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class GAS_DEMO_API AGASCharacter : public AGASCharacterBase
{
	GENERATED_BODY()
	
public:
	AGASCharacter();
	
protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> FollowCamera;
};
