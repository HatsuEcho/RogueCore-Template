#include "BossEarthquakeStageLogic.h"

UBossEarthquakeStageLogic::UBossEarthquakeStageLogic() {
    this->Mutator = NULL;
}

void UBossEarthquakeStageLogic::OnNewBossFight(const TScriptInterface<IBossFightInterface>& BossFight) {
}

void UBossEarthquakeStageLogic::OnBossFightRemoved(const TScriptInterface<IBossFightInterface>& BossFight) {
}

void UBossEarthquakeStageLogic::OnBossDeath(UHealthComponentBase* HealthComponent) {
}


