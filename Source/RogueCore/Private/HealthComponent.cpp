#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastDamageCauser = NULL;
    this->PawnStats = NULL;
    this->Damage = 0.00f;
    this->EnvironmentalDamageResistance = 1.00f;
    this->ShouldUseLargestSubhealthDamageTaken = false;
    this->InvulnerableToNonDefinedResistances = false;
    this->AffectedByGlobalWeakpointDamageMultiplier = true;
    this->UseDormancy = false;
    this->CanDamageThroughSegments = true;
    this->CanDieFromDamage = true;
    this->bBuddhaMode = false;
}

void UHealthComponent::Server_ToggleGodMode_Implementation() {
}

void UHealthComponent::Server_SetGodMode_Implementation(bool Active) {
}

void UHealthComponent::Resupply(float percentage) {
}

void UHealthComponent::OnRep_Damage(float oldDamage) {
}

void UHealthComponent::HealArmor(float Amount) {
}

bool UHealthComponent::HasArmor() const {
    return false;
}

float UHealthComponent::GetTempHealthAmount() const {
    return 0.0f;
}

float UHealthComponent::GetTargetArmorPct() const {
    return 0.0f;
}

float UHealthComponent::GetTargetArmor() const {
    return 0.0f;
}

float UHealthComponent::GetMaxArmor() const {
    return 0.0f;
}

AActor* UHealthComponent::GetLastDamageCauser() const {
    return NULL;
}

EHealthbarType UHealthComponent::GetHealthbarType() const {
    return EHealthbarType::None;
}

void UHealthComponent::GetCurrentHealthSegment(int32& segment, float& segmentHealth, float& segmentHealthPercent) {
}

float UHealthComponent::GetArmorPct() const {
    return 0.0f;
}

float UHealthComponent::GetArmorDR() const {
    return 0.0f;
}

float UHealthComponent::GetArmor() const {
    return 0.0f;
}

void UHealthComponent::Client_ReceivedHit_Implementation(float Amount, const FDamageData& DamageData, bool anyHealthLost) {
}

void UHealthComponent::AddTemporaryHealth(float Amount) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, Damage);
    DOREPLIFETIME(UHealthComponent, bBuddhaMode);
}



void UHealthComponent::Server_ToggleBuddhaMode_Implementation() {
}

void UHealthComponent::Server_SetBuddhaMode_Implementation(bool bActive) {
}

bool UHealthComponent::IsInBuddhaMode() const {
    return false;
}

