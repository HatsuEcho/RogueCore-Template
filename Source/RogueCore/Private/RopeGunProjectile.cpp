#include "RopeGunProjectile.h"

ARopeGunProjectile::ARopeGunProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RopeClass = NULL;
    this->MaxRopeLength = 2000.00f;
    this->MinRopeLength = 300.00f;
    this->RopeAnchorOffset = 20.00f;
    this->RopeHitRadius = 100.00f;
    this->RopeDropped = false;
    this->RopeDropStartTime = 0.00f;
}



