#include "BossRiskVectorEffect.h"

UBossRiskVectorEffect::UBossRiskVectorEffect() {
    this->Activation = EBossRiskVectorEffectActivation::WholeFight;
    this->bExcludeBetweenPhases = false;
    this->Component = NULL;
}

TArray<FName> UBossRiskVectorEffect::GetSignalOptions() {
    return TArray<FName>();
}


