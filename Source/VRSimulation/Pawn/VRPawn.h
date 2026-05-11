#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VRPawn.generated.h"

class UCameraComponent;
class UMotionControllerComponent;
class UWidgetComponent;
class USceneComponent;

UCLASS()
class VRSIMULATION_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	AVRPawn();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> VROrigin;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> VRCamera;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UMotionControllerComponent> LeftController;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UMotionControllerComponent> RightController;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UWidgetComponent> HUDWidget;
};
