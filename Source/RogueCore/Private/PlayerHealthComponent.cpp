#include "PlayerHealthComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerHealthComponent::UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallingDamageClass = NULL;
    this->OnHealedShout = NULL;
    this->ArmorRegenCurve = NULL;
    this->Character = NULL;
    this->GenericImpactParticles = NULL;
    this->ShieldLinkEffect = NULL;
    this->DamageTakenMutator = NULL;
    this->DodgeStatusEffectClass = NULL;
    this->ShieldLinkInstance = NULL;
    this->MaxHealth = 100.00f;
    this->MaxArmor = 0.00f;
    this->ArmorDamageReduction = 0.50f;
    this->ArmorDegradationRate = 0.00f;
    this->TemporaryHealthDecayRate = 1.00f;
    this->TemporaryHealth = 0.00f;
    this->MaxTemporaryHealth = 100.00f;
    this->ArmorDamage = 0.00f;
    this->TargetArmorDamage = 0.00f;
    this->MaxArmorBase = 0.00f;
    this->ReviveHealthReturnRatio = 1.00f;
    this->ReviveArmorReturnRatio = 1.00f;
    this->HealthPerCrystalVolume = 0.25f;
    this->ShieldRegenDelay = 5.00f;
    this->InvulnerabilityDuration = 0.25f;
    this->ReviveInvulnerabilityTime = 3.00f;
    this->HealthRegenTarget = 35.00f;
    this->InvulnerabiltyTimeLeft = -1.00f;
    this->CauseOfDeathClass = NULL;
    this->MinimumRestoredHealthFraction = 0.10f;
}

void UPlayerHealthComponent::UpgradeShield(float CapacityAmount, float RegenAmount, float DegradationRate) {
}

float UPlayerHealthComponent::TakeDamageWithoutDelegates(float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags, bool ignoreModifiers) {
    return 0.0f;
}

void UPlayerHealthComponent::SetMaxShield(float max) {
}

void UPlayerHealthComponent::Server_HealArmor_Implementation(float Amount) {
}

void UPlayerHealthComponent::ResetTimeSinceLastDamage() {
}

void UPlayerHealthComponent::RemoveShieldUpgrade(float CapacityAmount, float RegenAmount, float DegradationRate) {
}

void UPlayerHealthComponent::OnRep_TemporaryHealth(float oldTempHealth) {
}

void UPlayerHealthComponent::OnRep_MaxHealth() {
}

void UPlayerHealthComponent::OnRep_MaxArmor() {
}

void UPlayerHealthComponent::OnRep_ArmorDamage(float oldDamage) {
}

bool UPlayerHealthComponent::IsLowHealth() const {
    return false;
}

bool UPlayerHealthComponent::IsLocallyControlled() const {
    return false;
}

float UPlayerHealthComponent::HealWithoutShout(float Amount) {
    return 0.0f;
}

float UPlayerHealthComponent::GetTargetArmorPctFromValues(float max, float Target) {
    return 0.0f;
}

float UPlayerHealthComponent::GetMaxArmorUpgrades() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetHealthRegenThreshold() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetHealthRegeneratingTargetRatio() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetBaseMaxHealth() const {
    return 0.0f;
}

void UPlayerHealthComponent::DamageArmor(float Amount) {
}

void UPlayerHealthComponent::ClientNotifyDeath_Implementation(const FString& CauseOfDeath, const float SecondsSinceLastDamageTaken, const float SecondsSinceLastRevive) {
}

void UPlayerHealthComponent::Client_TemporaryHealthDamaged_Implementation(float Amount) {
}

void UPlayerHealthComponent::Client_SetHealthRegenerating_Implementation(bool isRegenerating) {
}

void UPlayerHealthComponent::Client_OnFriendlyFire_Implementation(AController* EventInstigator, AActor* DamageCauser) {
}

void UPlayerHealthComponent::Client_HealthFullCannotHeal_Implementation() {
}

void UPlayerHealthComponent::Client_ArmorDamaged_Implementation(float Amount) {
}

void UPlayerHealthComponent::Cheat_Revive_Implementation() {
}

void UPlayerHealthComponent::Cheat_KillPlayer_Implementation() {
}

void UPlayerHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerHealthComponent, MaxHealth);
    DOREPLIFETIME(UPlayerHealthComponent, MaxArmor);
    DOREPLIFETIME(UPlayerHealthComponent, TemporaryHealth);
    DOREPLIFETIME(UPlayerHealthComponent, ArmorDamage);
    DOREPLIFETIME(UPlayerHealthComponent, TargetArmorDamage);
    DOREPLIFETIME(UPlayerHealthComponent, InvulnerabiltyTimeLeft);
}


