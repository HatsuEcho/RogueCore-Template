#include "BTTask_PlayMontage.h"

UBTTask_PlayMontage::UBTTask_PlayMontage() {
    this->NodeName = TEXT("Play Montage");
    this->bWaitForCompletion = true;
    this->bStopMontageOnAbort = true;
    this->bFreezeAlignment = false;
}


