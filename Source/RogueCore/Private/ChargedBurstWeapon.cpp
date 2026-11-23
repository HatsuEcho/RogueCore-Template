#include "ChargedBurstWeapon.h"
#include "Net/UnrealNetwork.h"

AChargedBurstWeapon::AChargedBurstWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinHoldTimeForCharge = 0.50f;
    this->BurstCancelWindow = 0.30f;
    this->MaxChargeTime = 2.00f;
    this->ChargeToBurstShotsCurve = NULL;
    this->BurstRateOfFire = 20.00f;
    this->BurstWeaponFire = NULL;
    this->BurstFireSound = NULL;
    this->BurstFireSoundTail = NULL;
    this->State = EChargedBurstState::Idle;
}

void AChargedBurstWeapon::Server_StartBurst_Implementation(float InHeldSeconds) {
}

void AChargedBurstWeapon::Server_SetState_Implementation(EChargedBurstState InNewState) {
}

void AChargedBurstWeapon::OnRep_State(EChargedBurstState InOldState) {
}

bool AChargedBurstWeapon::IsHolding() const {
    return false;
}

bool AChargedBurstWeapon::IsCharging() const {
    return false;
}

bool AChargedBurstWeapon::IsBurstActive() const {
    return false;
}

EChargedBurstState AChargedBurstWeapon::GetState() const {
    return EChargedBurstState::Idle;
}

float AChargedBurstWeapon::GetChargeProgress() const {
    return 0.0f;
}

void AChargedBurstWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChargedBurstWeapon, State);
}


