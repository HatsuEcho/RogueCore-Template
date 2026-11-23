#include "RunManager.h"
#include "BXEAmmoUnlockManager.h"
#include "BXELogicUnlockManager.h"
#include "BXENegotiationManager.h"
#include "BXETradeManager.h"
#include "ReadyUpManager.h"
#include "TeleporterManager.h"
#include "VoteManager.h"

URunManager::URunManager() {
    this->NegotiationManager = CreateDefaultSubobject<UBXENegotiationManager>(TEXT("NegotiationManager"));
    this->ReadyUpManager = CreateDefaultSubobject<UReadyUpManager>(TEXT("ReadyUpManager"));
    this->VoteManager = CreateDefaultSubobject<UVoteManager>(TEXT("VoteManager"));
    this->RunHistoryManager = NULL;
    this->LogicUnlockManager = CreateDefaultSubobject<UBXELogicUnlockManager>(TEXT("LogicUnlockManager"));
    this->AmmoUnlockManager = CreateDefaultSubobject<UBXEAmmoUnlockManager>(TEXT("AmmoUnlockManager"));
    this->GameStateComponent = NULL;
    this->ActiveRun = NULL;
    this->CurrentCaveDepth = 0.00f;
    this->ObjectiveRewardRegistered = 0;
    this->TradeManager = CreateDefaultSubobject<UBXETradeManager>(TEXT("TradeManager"));
    this->TeleporterManager = CreateDefaultSubobject<UTeleporterManager>(TEXT("TeleporterManager"));
}

void URunManager::StartRun(const FRunCreationParameters& Parameters) {
}

void URunManager::RemoveLevelUpBlocker(AActor* blocker) {
}

void URunManager::RemoveAllAdditionalRiskVectors() {
}

void URunManager::RemoveAdditionalRiskVector(URiskVector* RiskVector) {
}

void URunManager::PotentExpeniteDispensed() {
}

void URunManager::PotentExpeniteCollected() {
}

void URunManager::OnObjectivesChanged() {
}

bool URunManager::MoveToNextStage() {
    return false;
}

void URunManager::MoveToLastStage(const int32 Offset) {
}

void URunManager::MissionShout(UObject* WorldContext, EMissionShoutID InShoutID) const {
}

void URunManager::MarkRiftBossFightOver() {
}

void URunManager::MarkActiveStageComplete() {
}

bool URunManager::IsStageComplete(int32 branchIndex) const {
    return false;
}

bool URunManager::IsSecondToLastStageActive() const {
    return false;
}

bool URunManager::IsLevelUpBlocked() {
    return false;
}

bool URunManager::IsLastStageActive() const {
    return false;
}

bool URunManager::IsFirstStageActive() const {
    return false;
}

bool URunManager::IsActiveStageCompleted() const {
    return false;
}

bool URunManager::IsActive() const {
    return false;
}

void URunManager::IncrementTotalArtifactGiversSpawned() {
}

bool URunManager::HaveActiveStage() const {
    return false;
}

bool URunManager::HaveActiveRun() const {
    return false;
}

bool URunManager::HasUnclaimedRewards() const {
    return false;
}

bool URunManager::HasPendingPotentExpeniteUpgrade() const {
    return false;
}

bool URunManager::HasPendingArtifactUpgrade() const {
    return false;
}

UVoteManager* URunManager::GetVoteManager() const {
    return NULL;
}

int32 URunManager::GetUnclaimedRewards() const {
    return 0;
}

void URunManager::GetTotalObjectivesCompleted(int32& OutCount) const {
}

int32 URunManager::GetTotalArtifactGiversSpawned() const {
    return 0;
}

FString URunManager::GetStageSeedString() const {
    return TEXT("");
}

FText URunManager::GetStageName(int32 branchIndex) const {
    return FText::GetEmpty();
}

UStage* URunManager::GetStageAtIndex(const int32 StageIndex) const {
    return NULL;
}

int32 URunManager::GetRunXp() const {
    return 0;
}

int32 URunManager::GetRunSeed() const {
    return 0;
}

URunHistoryManager* URunManager::GetRunHistoryManager() const {
    return NULL;
}

int32 URunManager::GetRewardsAwarded() const {
    return 0;
}

UReadyUpManager* URunManager::GetReadyUpManager() const {
    return NULL;
}

int32 URunManager::GetRandomEquipmentSeed() const {
    return 0;
}

int32 URunManager::GetPotentExpeniteDispensed() const {
    return 0;
}

int32 URunManager::GetPotentExpeniteCollected() const {
    return 0;
}

void URunManager::GetPerObjectiveXP(int32& perObjective) const {
}

void URunManager::GetPerKillXP(int32& perKill) const {
}

void URunManager::GetPerExpeniteXP(int32& perExpenite) const {
}

int32 URunManager::GetNumberOfStages() const {
    return 0;
}

int32 URunManager::GetNumberOfCompletedStages() const {
    return 0;
}

float URunManager::GetNextLevelXP() const {
    return 0.0f;
}

UBXENegotiationManager* URunManager::GetNegotiationManager() const {
    return NULL;
}

TSoftClassPtr<ADebrisDataActor> URunManager::GetModeExtraDebris() const {
    return NULL;
}

int32 URunManager::GetLevel() const {
    return 0;
}

void URunManager::GetExpeniteCollected(int32& outCollected) const {
}

float URunManager::GetEnemyResistanceModifier(EEnemyHealthScaling healthScaling) const {
    return 0.0f;
}

float URunManager::GetEnemyDamageModifier() const {
    return 0.0f;
}

float URunManager::GetCurrentXP() const {
    return 0.0f;
}

float URunManager::GetCurrentPotentialXP() const {
    return 0.0f;
}

float URunManager::GetCurrentPotentialLevelProgress() const {
    return 0.0f;
}

float URunManager::GetCurrentLevelProgress() const {
    return 0.0f;
}

UBiome* URunManager::GetBiomeFromStageID(int32 stageID) const {
    return NULL;
}

int32 URunManager::GetArtifactsDispensed() const {
    return 0;
}

int32 URunManager::GetArtifactsCollected() const {
    return 0;
}

int32 URunManager::GetActiveStageIndex() const {
    return 0;
}

UStageTemplateDifficulty* URunManager::GetActiveStageDifficulty() const {
    return NULL;
}

UStage* URunManager::GetActiveStage() const {
    return NULL;
}

ERunType URunManager::GetActiveRunType() const {
    return ERunType::Default;
}

URunTemplate* URunManager::GetActiveRunTemplate() const {
    return NULL;
}

FString URunManager::GetActiveRunString() const {
    return TEXT("");
}

FText URunManager::GetActiveRunName() const {
    return FText::GetEmpty();
}

ERunMode URunManager::GetActiveRunMode() const {
    return ERunMode::None;
}

FGuid URunManager::GetActiveRunId() const {
    return FGuid{};
}

ERunHazard URunManager::GetActiveRunHazard() const {
    return ERunHazard::None;
}

ERunDepth URunManager::GetActiveRunDepth() const {
    return ERunDepth::None;
}

ERunBossType URunManager::GetActiveRunBoss() const {
    return ERunBossType::None;
}

URun* URunManager::GetActiveRun() const {
    return NULL;
}

void URunManager::GetAccumulatedObjectiveXP(int32& perPrimary) const {
}

void URunManager::ClearRun() {
}

void URunManager::CheatPrintStages() {
}

bool URunManager::Cheat_DroneApplyUnlock(UBXEUnlockBase* InUnlock) {
    return false;
}

void URunManager::BeginNegotiation(UUnlockCollectionTag* InCollectionTag, int32 OverrideSeed) {
}

void URunManager::ArtifactDispensed() {
}

void URunManager::ArtifactCollected() {
}

void URunManager::AddReward() {
}

void URunManager::AddLevelUpBlocker(AActor* blocker) {
}

void URunManager::AddAdditionalRiskVector(URiskVector* RiskVector, const bool IsActiveInSingleStage, const int32 StageIndexToActivate) {
}



UBXETradeManager* URunManager::GetTradeManager() const {
    return NULL;
}

UTeleporterManager* URunManager::GetTeleporterManager() const {
    return NULL;
}

int32 URunManager::GetRerollTokens() const {
    return 0;
}

ERunDifficulty URunManager::GetActiveRunDifficulty() const {
    return ERunDifficulty::None;
}

void URunManager::CheatSetStartingUnlock(const EUnlockType UnlockType, UBXEUnlockBase* Unlock) {
}

void URunManager::CheatAddBossRiskVectors(const TArray<URiskVector*>& RiskVectors) {
}

void URunManager::AddRerollTokens(const int32 Amount) {
}

