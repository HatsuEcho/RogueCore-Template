#include "RandomizeComponent.h"
#include "Net/UnrealNetwork.h"

URandomizeComponent::URandomizeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldPickRange = false;
    this->ChanceToBeOnPercent = 50.00f;
    this->RandomSeed = -1;
    this->KeepComponentBitmask = 0;
    this->AreKeepComponentsComputed = false;
}

void URandomizeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URandomizeComponent, RandomSeed);
    DOREPLIFETIME(URandomizeComponent, KeepComponentBitmask);
    DOREPLIFETIME(URandomizeComponent, AreKeepComponentsComputed);
}


