#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VRSimGameMode.generated.h"

UCLASS()
class VRSIMULATION_API AVRSimGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVRSimGameMode();

protected:
	virtual void BeginPlay() override;
};
