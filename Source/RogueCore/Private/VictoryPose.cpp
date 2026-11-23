#include "VictoryPose.h"

UVictoryPose::UVictoryPose() {
    this->Aquisition = NULL;
    this->RestrictToCharacter = NULL;
    this->ShowDrgProperties = false;
}

void UVictoryPose::Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVictoryPose::ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
}

bool UVictoryPose::IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVictoryPose::IsUnLocked(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

FText UVictoryPose::GetTitle() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UAnimMontage> UVictoryPose::GetPreviewMontage() const {
    return NULL;
}

TSoftObjectPtr<UTemplateSequence> UVictoryPose::GetEndScreenSequence() const {
    return NULL;
}

FText UVictoryPose::GetDescription() const {
    return FText::GetEmpty();
}

UAquisitionBase* UVictoryPose::GetAquisition() const {
    return NULL;
}

void UVictoryPose::Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}



TSoftObjectPtr<UAnimMontage> UVictoryPose::GetPreviewMontageForGauntlet() const {
    return NULL;
}

