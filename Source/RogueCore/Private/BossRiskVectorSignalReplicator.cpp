#include "BossRiskVectorSignalReplicator.h"
#include "Net/UnrealNetwork.h"

UBossRiskVectorSignalReplicator::UBossRiskVectorSignalReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBossRiskVectorSignalReplicator::OnRep_Signals() {
}

void UBossRiskVectorSignalReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBossRiskVectorSignalReplicator, Signals);
}


