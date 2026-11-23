#include "DeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DeepPatherFinderCharacterAfflictionComponent.h"
#include "DeepPathfinderMovement.h"
#include "DeepPathfinderSceneComponent.h"

ADeepPathfinderCharacter::ADeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeepPathfinderSceneComponent>(TEXT("SceneComponent"));
    this->PathfinderMovement = CreateDefaultSubobject<UDeepPathfinderMovement>(TEXT("PathfinderMovement"));
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->Affliction = CreateDefaultSubobject<UDeepPatherFinderCharacterAfflictionComponent>(TEXT("Affliction"));
    this->AnimationOffset = 0.00f;
    this->CanPlayerStandOn = false;
    this->StunDurationMultiplier = 1.00f;
    this->StunImunityWindow = 0.00f;
    this->bStunPauseLogic = false;
    this->IsHidden = false;
    this->bIsStunned = false;
    this->FrozenPauseLogic = false;
    this->MeshDecalIndex = 0;
    this->CurrentStunAffliction = NULL;
    this->AttackerRadius = 65.00f;
    this->AllowedInFormationChance = 0.75f;
    this->AIPlayerControlComponentCache = NULL;
    this->ActiveStunImmunityAffliction = NULL;
    this->mesh->SetupAttachment(RootComponent);
}

bool ADeepPathfinderCharacter::TryJoinFormation() {
    return false;
}

void ADeepPathfinderCharacter::Stun(const FStunParameters& StaggerParams) {
}

void ADeepPathfinderCharacter::SetStunImmunity(bool InImmune, const UObject* InStaggerImmunitySource) {
}

void ADeepPathfinderCharacter::SetHidden(bool shouldHide) {
}

void ADeepPathfinderCharacter::OnPausedMovementElapsed() {
}


void ADeepPathfinderCharacter::Multicast_SetActorRotation_Implementation(const FRotator& Rotator) {
}

void ADeepPathfinderCharacter::LeaveFormation() {
}

void ADeepPathfinderCharacter::CanTakeDamageChanged(bool CanTakeDamage) {
}

bool ADeepPathfinderCharacter::CanStun() const {
    return false;
}


