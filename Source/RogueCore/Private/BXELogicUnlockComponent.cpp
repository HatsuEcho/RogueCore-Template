#include "BXELogicUnlockComponent.h"
#include "Net/UnrealNetwork.h"

UBXELogicUnlockComponent::UBXELogicUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->DamageListenerProfile = 0;
    this->DamageListenerFilter = NULL;
    this->TriggerBlueprintEvents = true;
    this->AmountOfStacks = 0;
    this->DamageTriggerCooldown = 0.00f;
}




void UBXELogicUnlockComponent::OnRep_Stacks() {
}

float UBXELogicUnlockComponent::GetTotalUpgradeValueMultiplied() const {
    return 0.0f;
}

float UBXELogicUnlockComponent::GetTotalUpgradeValue() const {
    return 0.0f;
}

float UBXELogicUnlockComponent::GetLogicValueByName(const FString& Name) const {
    return 0.0f;
}

float UBXELogicUnlockComponent::GetClampedUpgradeValue(float Previous) const {
    return 0.0f;
}

int32 UBXELogicUnlockComponent::GetAmountOfStacks() const {
    return 0;
}

void UBXELogicUnlockComponent::AddStack() {
}

void UBXELogicUnlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXELogicUnlockComponent, Stacks);
    DOREPLIFETIME(UBXELogicUnlockComponent, AmountOfStacks);
    DOREPLIFETIME(UBXELogicUnlockComponent, LogicValues);
    DOREPLIFETIME(UBXELogicUnlockComponent, LogicStack);
}



void UBXELogicUnlockComponent::RemoveStack() {
}

void UBXELogicUnlockComponent::OnRep_LogicStack() {
}

