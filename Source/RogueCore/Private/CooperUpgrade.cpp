#include "CooperUpgrade.h"
#include "Templates/SubclassOf.h"

UCooperUpgrade::UCooperUpgrade() {
    this->upgradeType = ECooperUpgrades::MiningSpeedUpgrade;
}

FUpgradeValues UCooperUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ECooperUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


