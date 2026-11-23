#include "TeleportAttackComponent.h"

UTeleportAttackComponent::UTeleportAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TelegraphClass = NULL;
    this->MinTeleportDistance = 600.00f;
    this->SampleRingRadii.AddDefaulted(2);
    this->SamplesPerRing = 8;
    this->MaxSurfaceSnapDistance = 500.00f;
    this->MinFloorNormalZ = 0.50f;
    this->RequireLineOfSightToTarget = true;
    this->TelegraphDetonationDelay = 0.75f;
}


