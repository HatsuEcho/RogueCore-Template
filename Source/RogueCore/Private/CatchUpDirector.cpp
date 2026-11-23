#include "CatchUpDirector.h"
#include "Net/UnrealNetwork.h"

ACatchUpDirector::ACatchUpDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bFastNegotiations = false;
}

void ACatchUpDirector::OnStageVoteDone() {
}

void ACatchUpDirector::OnRep_FastNegotiations() {
}

void ACatchUpDirector::OnCatchUpNegotiationDone() {
}

void ACatchUpDirector::All_FadeFromBlack_Implementation() {
}

void ACatchUpDirector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACatchUpDirector, bFastNegotiations);
}


