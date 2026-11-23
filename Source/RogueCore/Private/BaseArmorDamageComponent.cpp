#include "BaseArmorDamageComponent.h"
#include "Net/UnrealNetwork.h"

UBaseArmorDamageComponent::UBaseArmorDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorDamageEnabled = true;
    this->mesh = NULL;
    this->ArmorRemoved = false;
}



void UBaseArmorDamageComponent::Server_RemoveArmor_Implementation() {
}

void UBaseArmorDamageComponent::OnRep_ArmorRemoved() {
}

void UBaseArmorDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseArmorDamageComponent, ArmorRemoved);
}

