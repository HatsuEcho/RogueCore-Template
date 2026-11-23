#include "ChemtrailUnlockComponent.h"

UChemtrailUnlockComponent::UChemtrailUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(2);
    this->PuddleClass = NULL;
    this->ScatterRadius = 250.00f;
    this->GroundTraceDistance = 1000.00f;
    this->SpawnHeightOffset = 10.00f;
    this->SurfaceLiftDistance = 50.00f;
    this->SurfaceTraceDistance = 500.00f;
    this->MaxPuddlesPerGrenade = 30;
}

void UChemtrailUnlockComponent::OnGrenadeThrown(AGrenade* Grenade, APlayerCharacter* Thrower) {
}


