#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"

UEnemyHealthComponent::UEnemyHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyHealthScaling = EEnemyHealthScaling::SmallEnemy;
    this->Courage = 0.00f;
    this->MaxHealth = 100.00f;
    this->bShowHealthBar = true;
    this->bIsBossFight = false;
    this->BossFightHealthBarSegments = 0;
    this->bRegisterEnemy = true;
    this->OverriddenMaxHealthBase = 0.00f;
}

float UEnemyHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

float UEnemyHealthComponent::GetEnemyDamageResistanceScaling() const {
    return 0.0f;
}



void UEnemyHealthComponent::SetMaxHealth(float NewMaxHealth) {
}

void UEnemyHealthComponent::OnRep_OverriddenMaxHealthBase() {
}

void UEnemyHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyHealthComponent, OverriddenMaxHealthBase);
}

