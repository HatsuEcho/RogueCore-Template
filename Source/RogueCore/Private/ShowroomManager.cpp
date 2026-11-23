#include "ShowroomManager.h"

UShowroomManager::UShowroomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentStage = NULL;
    this->StageInstance = NULL;
    this->RenderTarget = NULL;
}

UShowroomController* UShowroomManager::GetController() const {
    return NULL;
}

void UShowroomManager::ClearShowroom() {
}


