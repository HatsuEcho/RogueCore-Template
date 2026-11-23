#include "RunContinuationSettings.h"

FRunContinuationSettings::FRunContinuationSettings() {
    this->AbortVoteSeconds = 0.00f;
    this->bAllowLostHostRejoin = false;
    this->MigrationReadyUpHoldSeconds = 0.00f;
    this->StageEndHandshakeTimeoutSeconds = 0.00f;
    this->StageEndReplayTimeoutSeconds = 0.00f;
    this->MigrationMinimumWaitSeconds = 0.00f;
    this->MigrationSlotSeconds = 0.00f;
    this->MigrationOfferHostDelaySeconds = 0.00f;
    this->MigrationHostDiscoverySeconds = 0.00f;
    this->MigrationPollSeconds = 0.00f;
    this->MigrationRetrySeconds = 0.00f;
    this->MigrationAttemptTimeoutSeconds = 0.00f;
    this->MigrationHostTravelTimeoutSeconds = 0.00f;
    this->RejoinWaitSeconds = 0.00f;
}

