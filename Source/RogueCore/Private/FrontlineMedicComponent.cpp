#include "FrontlineMedicComponent.h"

UFrontlineMedicComponent::UFrontlineMedicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffect = NULL;
    this->SoneSkinEffect = 99.00f;
    this->CoolDown = 300.00f;
}

void UFrontlineMedicComponent::Server_Stopffect_Implementation() {
}

void UFrontlineMedicComponent::Server_StartEffect_Implementation() {
}


