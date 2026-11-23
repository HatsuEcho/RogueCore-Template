#include "TelemetrySubsystem.h"
#include "Templates/SubclassOf.h"

UTelemetrySubsystem::UTelemetrySubsystem() {
    this->SessionSequenceId = 0;
    this->GameInstance = NULL;
    this->RunManager = NULL;
    this->IntelSystem = NULL;
}

void UTelemetrySubsystem::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> failType, const FString& ErrorMessage) {
}

void UTelemetrySubsystem::OnIntelObjectiveClaimed(UIntelObjective* Objective) {
}

void UTelemetrySubsystem::OnIntelChallengeClaimed(TSubclassOf<UIntelChallenge> ChallengeClass) {
}

void UTelemetrySubsystem::CheckForRunAndStageStart() {
}

void UTelemetrySubsystem::CheckForRunAndStageEnd() {
}



void UTelemetrySubsystem::OnLocalUsableTriggered(UUsableComponentBase* usable) {
}

