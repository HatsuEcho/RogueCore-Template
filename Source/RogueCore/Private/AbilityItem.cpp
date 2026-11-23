#include "AbilityItem.h"
#include "Net/UnrealNetwork.h"

AAbilityItem::AAbilityItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachSocket = TEXT("Dwarf_Gauntlet_ArmL22Socket");
    this->Item_EquipAnimation = NULL;
    this->Item_EquipUnavailable = NULL;
    this->Item_Reactivation = NULL;
    this->FP_EquipAnimation = NULL;
    this->FP_EquipUnavailable = NULL;
    this->TP_EquipAnimation = NULL;
    this->TP_EquipUnavailable = NULL;
    this->FP_ActivationAnimation = NULL;
    this->TP_ActivationAnimation = NULL;
    this->UnEquipTime = -1.00f;
    this->ActivationDelay = 0.00f;
    this->EquipCost = 1;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
    this->UpperBodyCharacterAnimationSet = NULL;
    this->ActivationType = EItemActivationType::Immediate;
    this->DeactivateOnUnequip = false;
    this->UnEquipOnActivation = true;
    this->InactiveAndEquippedLastFrame = false;
    this->PlayNoEquipAnimWhenUnavailable = false;
    this->FPSuitMesh = NULL;
    this->TPSuitMesh = NULL;
}

void AAbilityItem::ServerTriggerAbilityUpgrades_Implementation() {
}



void AAbilityItem::OnEquipFinished() {
}


void AAbilityItem::OnChargesChanged(int32 charges) {
}


void AAbilityItem::OnAbilityReleased() {
}

void AAbilityItem::OnAbilityPressed() {
}

USkeletalMeshComponent* AAbilityItem::GetTPMesh() const {
    return NULL;
}

USkeletalMeshComponent* AAbilityItem::GetFPMesh() const {
    return NULL;
}

UAbilityComponent* AAbilityItem::GetAbility() const {
    return NULL;
}

void AAbilityItem::AnimFinished(UAnimMontage* Montage, bool interrupted) {
}

void AAbilityItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityItem, OnActivationSpawnActorUpgrades);
    DOREPLIFETIME(AAbilityItem, OnActivationProjectiles);
}


