#include "EnemyDeepPathfinderCharacter.h"
#include "EnemyHealthComponent.h"
#include "MontageReplicatorComponent.h"

AEnemyDeepPathfinderCharacter::AEnemyDeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->MontageReplicator = CreateDefaultSubobject<UMontageReplicatorComponent>(TEXT("MontageReplicator"));
}

void AEnemyDeepPathfinderCharacter::SwitchToDynamicBaseShader(UMaterialInterface* baseShader, UMeshComponent* MeshComponent) const {
}


