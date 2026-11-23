#include "RunContinuationSubsystem.h"

URunContinuationSubsystem::URunContinuationSubsystem() {
    this->bRestorePending = false;
    this->IsRestoringSnapshot = false;
    this->bRunRestorePending = false;
    this->bStageEndPending = false;
    this->bCooperCatchUpDone = false;
    this->bSnapshotFromDisk = false;
    this->MigrationState = ERunMigrationState::None;
    this->ActiveLookup = NULL;
    this->bHostingMigratedRun = false;
    this->MigrationReason = ERunMigrationReason::None;
    this->MigrationDestination = ERunMigrationDestination::None;
    this->bRosterLocked = false;
    this->bMigrationHostTravelPending = false;
    this->bHostAttemptDone = false;
    this->bMigrationOptOut = false;
    this->bLookupRequestedByUI = false;
}

bool URunContinuationSubsystem::WasSavedAndQuit() const {
    return false;
}

bool URunContinuationSubsystem::WasRunHost() const {
    return false;
}

bool URunContinuationSubsystem::WasLevelEndHeldForAbortVote() const {
    return false;
}

bool URunContinuationSubsystem::SaveAndQuit() {
    return false;
}

void URunContinuationSubsystem::RequestMigratedRunLookup() {
}

bool URunContinuationSubsystem::RehostRun() {
    return false;
}

void URunContinuationSubsystem::OnSessionStatusChanged(EOnlineSessionStatus OldStatus, EOnlineSessionStatus NewStatus) {
}

void URunContinuationSubsystem::OnSaveGameLoaded(UFSDSaveGame* SaveGame) {
}

void URunContinuationSubsystem::OnLookupSuccess(const FServerListLobby& Lobby) {
}

void URunContinuationSubsystem::OnLookupNotFound() {
}

void URunContinuationSubsystem::OnLookupFailed() {
}

void URunContinuationSubsystem::OnCooperChanged(ACooperDrone* Cooper) {
}

bool URunContinuationSubsystem::JoinMigratedRun() {
    return false;
}

bool URunContinuationSubsystem::IsMigrationInProgress() const {
    return false;
}

bool URunContinuationSubsystem::IsLostSession(const FString& SessionId) const {
    return false;
}

bool URunContinuationSubsystem::IsContinuedRun() const {
    return false;
}

bool URunContinuationSubsystem::IsAbortVoter() const {
    return false;
}

bool URunContinuationSubsystem::IsAbortVotePending() const {
    return false;
}

bool URunContinuationSubsystem::HasContinuation() const {
    return false;
}

ERunMigrationState URunContinuationSubsystem::GetMigrationState() const {
    return ERunMigrationState::None;
}

float URunContinuationSubsystem::GetMigrationSecondsRemaining() const {
    return 0.0f;
}

ERunMigrationReason URunContinuationSubsystem::GetMigrationReason() const {
    return ERunMigrationReason::None;
}

EMigrationPrompt URunContinuationSubsystem::GetMigrationPrompt() const {
    return EMigrationPrompt::None;
}

float URunContinuationSubsystem::GetMigrationPhaseSecondsRemaining() const {
    return 0.0f;
}

ERunMigrationDestination URunContinuationSubsystem::GetMigrationDestination() const {
    return ERunMigrationDestination::None;
}

int32 URunContinuationSubsystem::GetContinuationStageIndex() const {
    return 0;
}

void URunContinuationSubsystem::DeclineHosting() {
}

bool URunContinuationSubsystem::ContinueSolo() {
    return false;
}

void URunContinuationSubsystem::Clear() {
}

void URunContinuationSubsystem::CastAbortVote(bool bRestartStage) {
}

bool URunContinuationSubsystem::CanSaveAndQuit() const {
    return false;
}

bool URunContinuationSubsystem::CanRestartOnAbort() const {
    return false;
}

bool URunContinuationSubsystem::CanRejoinTeam() const {
    return false;
}

void URunContinuationSubsystem::CancelMigration() {
}


