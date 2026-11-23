#include "DamageUpgrade.h"
#include "Templates/SubclassOf.h"

UDamageUpgrade::UDamageUpgrade() {
    this->upgradeType = EDamageUpgrade::Damage;
    this->DamageType = NULL;
    this->DamageMethod = EDamageMethod::Direct;
    this->RequiredClass = NULL;
}

FUpgradeValues UDamageUpgrade::GetUpgradedValue(const TSubclassOf<AActor> Item, const TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, const EDamageUpgrade NewUpgradeType, const UDamageAsset* DamageAsset, const UDamageClass* NewDamageType, const EDamageMethod NewDamageMethod) {
    return FUpgradeValues{};
}


