#include "BossSafeZoneStageLogic.h"

UBossSafeZoneStageLogic::UBossSafeZoneStageLogic() {
    this->Settings = NULL;
}

void UBossSafeZoneStageLogic::OnNewBossFight(const TScriptInterface<IBossFightInterface>& BossFight) {
}

void UBossSafeZoneStageLogic::OnBossFightRemoved(const TScriptInterface<IBossFightInterface>& BossFight) {
}

void UBossSafeZoneStageLogic::OnBossDied(UHealthComponentBase* HealthComponent) {
}


