#include "ShowroomStage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "Components/SceneCaptureComponent2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

AShowroomStage::AShowroomStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneCapure = NULL;
    this->ActiveCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->ControllerClass = NULL;
    this->ControllerInstance = NULL;
    this->SceneCapture = (USceneCaptureComponent2D*)ActiveCaptureComponent;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->MeshRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRootComponent"));
    this->CameraFocusPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraFocusPoint"));
    this->ActiveCaptureComponent->SetupAttachment(CameraFocusPoint);
    this->CameraFocusPoint->SetupAttachment(RootComponent);
    this->MeshRootComponent->SetupAttachment(RootComponent);
    this->SceneCapture->SetupAttachment(CameraFocusPoint);
    this->bLimitCaptureFrameRate = true;
    this->LowFrameRateThreshold = 60.00f;
    this->LowFrameRateCaptureLimit = 30.00f;
    this->CreatedRenderTarget = NULL;
}


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}


