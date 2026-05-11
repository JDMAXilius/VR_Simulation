#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VRSimGameInstance.generated.h"

UCLASS()
class VRSIMULATION_API UVRSimGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;
};
