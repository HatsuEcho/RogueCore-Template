#include "UnlockRerollSlotMachine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility

UUnlockRerollSlotMachine::UUnlockRerollSlotMachine() {
    SetVisibility(ESlateVisibility::HitTestInvisible);
    this->StartDelay = 0.30f;
    this->SpinDuration = 0.50f;
    this->ReelStopInterval = 0.35f;
    this->SymbolsPerSecond = 16.00f;
    this->SpinUpDuration = 0.60f;
    this->SpinUpSharpness = 4.00f;
    this->SlowDownDuration = 1.80f;
    this->SlowDownSharpness = 1.50f;
    this->LockInDuration = 0.25f;
    this->LockInPunch = 0.03f;
    this->LockInPunchPerRarity = 0.03f;
    this->EdgeFade = 0.20f;
    this->SymbolTravel = 80.00f;
    this->MotionStretch = 0.08f;
    this->ReelContentName = TEXT("Icon_Button");
    this->ReelWindowName = TEXT("Inner_Overlay");
    this->IconHeadroom = 40.00f;
    this->DecoyCount = 20;
    this->SpinStartSound = NULL;
    this->TickSound = NULL;
    this->ReelStopSound = NULL;
    this->MinTickSoundInterval = 0.05f;
}

void UUnlockRerollSlotMachine::Spin(const TArray<UUserWidget*>& Reels, const TArray<FBXEUnlockInstance>& Replacements, const FUnlockRerollSetup& Setup, const FBXEUnlockInstance& UnlockToReroll) {
}

void UUnlockRerollSlotMachine::LandAll() {
}

bool UUnlockRerollSlotMachine::IsSpinning() const {
    return false;
}


