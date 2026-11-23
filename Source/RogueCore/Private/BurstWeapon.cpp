#include "BurstWeapon.h"

ABurstWeapon::ABurstWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurstBonusDamage = NULL;
}

void ABurstWeapon::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}



