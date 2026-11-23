#include "TeleporterOrbComponent.h"

UTeleporterOrbComponent::UTeleporterOrbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->CastShadow = false;
    this->bHiddenInSceneCapture = true;
    this->CanCharacterStepUpOn = ECB_No;
    this->CaptureResolution = 256;
    this->RefreshInterval = 0.25f;
    this->MaxRefreshDistance = 3000.00f;
    this->bHideCharactersInSnapshot = true;
    this->FirstCaptureDelay = 0.10f;
    this->CaptureTexture = NULL;
    this->Capture = NULL;
    this->OrbMaterial = NULL;
}

void UTeleporterOrbComponent::RequestCapture() {
}

UTextureRenderTargetCube* UTeleporterOrbComponent::GetCaptureTexture() {
    return NULL;
}


