#include "GameInstance/VRSimGameInstance.h"

void UVRSimGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Log, TEXT("VRSimGameInstance: Init"));
}

void UVRSimGameInstance::Shutdown()
{
	Super::Shutdown();
}
