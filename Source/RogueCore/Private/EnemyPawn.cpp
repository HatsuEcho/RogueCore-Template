#include "EnemyPawn.h"
#include "EnemyComponent.h"
#include "EnemyHealthComponent.h"
#include "EnemyPawnAfflictionComponent.h"
#include "MontageReplicatorComponent.h"
#include "PawnStatsComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

AEnemyPawn::AEnemyPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->Stats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("Stats"));
    this->Affliction = CreateDefaultSubobject<UEnemyPawnAfflictionComponent>(TEXT("Affliction"));
    this->Enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("Enemy"));
    this->MontageReplicator = CreateDefaultSubobject<UMontageReplicatorComponent>(TEXT("MontageReplicator"));
}

float AEnemyPawn::QueueMontage(UAnimMontage* Montage) {
    return 0.0f;
}

USkeletalMeshComponent* AEnemyPawn::GetSkeletalMesh() const {
    return NULL;
}

UAnimInstance* AEnemyPawn::GetAnimInstance() const {
    return NULL;
}




