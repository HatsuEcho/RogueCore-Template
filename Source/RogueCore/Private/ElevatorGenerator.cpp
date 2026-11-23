#include "ElevatorGenerator.h"
#include "Net/UnrealNetwork.h"

AElevatorGenerator::AElevatorGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratorType = EGeneratorType::Normal;
}



void AElevatorGenerator::SetGeneratorType(EGeneratorType Type) {
}

void AElevatorGenerator::Receive_OnRepGeneratorType_Implementation(EGeneratorType NewType) {
}

void AElevatorGenerator::OnRep_GeneratorType() {
}

void AElevatorGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElevatorGenerator, GeneratorType);
}

