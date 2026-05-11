#include "Pawn/VRPawn.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "Components/WidgetComponent.h"

AVRPawn::AVRPawn()
{
	PrimaryActorTick.bCanEverTick = false;

	VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	SetRootComponent(VROrigin);

	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VRCamera"));
	VRCamera->SetupAttachment(VROrigin);

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
	LeftController->SetupAttachment(VROrigin);
	LeftController->MotionSource = FName("Left");

	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
	RightController->SetupAttachment(VROrigin);
	RightController->MotionSource = FName("Right");

	HUDWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HUDWidget"));
	HUDWidget->SetupAttachment(VRCamera);
	HUDWidget->SetWidgetSpace(EWidgetSpace::World);
	HUDWidget->SetDrawSize(FVector2D(800.f, 600.f));
	HUDWidget->SetRelativeLocation(FVector(100.f, 0.f, 0.f));
}

void AVRPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AVRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
