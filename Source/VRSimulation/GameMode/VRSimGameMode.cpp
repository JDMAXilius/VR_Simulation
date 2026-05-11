#include "GameMode/VRSimGameMode.h"
#include "Pawn/VRPawn.h"

AVRSimGameMode::AVRSimGameMode()
{
	DefaultPawnClass = AVRPawn::StaticClass();
}

void AVRSimGameMode::BeginPlay()
{
	Super::BeginPlay();
}
