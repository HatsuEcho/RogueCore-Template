#include "FSDGameState.h"
#include "AttackerManagerComponent.h"
#include "BXEGameStateComponent.h"
#include "DifficultyController.h"
#include "DifficultyManager.h"
#include "GemProximityTracker.h"
#include "Net/UnrealNetwork.h"
#include "PlayerProximityTracker.h"
#include "RarityManager.h"
#include "SeasonReplicatorComponent.h"
#include "ShowroomManager.h"
#include "SoundMixManagerComponent.h"
#include "SpawnEffectsComponent.h"
#include "TeamResourcesComponent.h"

AFSDGameState::AFSDGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EscapePod = NULL;
    this->CSGWorld = NULL;
    this->LastSupplyPodTimeStamp = 0;
    this->LastCleaningPodTimeStamp = -9999;
    this->ProceduralSetup = NULL;
    this->FakeMovementBase = NULL;
    this->IsAbilityUsageOverrideEnabled = false;
    this->ResourceAmountPenalty = 0.25f;
    this->LossXPPenalty = 1.00f;
    this->LastLeveLifeTime = -1.00f;
    this->LevelTimeDilation = 1.00f;
    this->CooperReviveCounter = -1;
    this->SpawnEffects = CreateDefaultSubobject<USpawnEffectsComponent>(TEXT("SpawnEffects"));
    this->MeshScaler = NULL;
    this->GemProximityTracker = CreateDefaultSubobject<UGemProximityTracker>(TEXT("GemProximityTracker"));
    this->AttackerManager = CreateDefaultSubobject<UAttackerManagerComponent>(TEXT("AttackerManager"));
    this->DifficultyManagerComponent = CreateDefaultSubobject<UDifficultyManager>(TEXT("DifficultyManager"));
    this->DifficultyControllerComponent = CreateDefaultSubobject<UDifficultyController>(TEXT("DifficultyController"));
    this->SoundMixManager = CreateDefaultSubobject<USoundMixManagerComponent>(TEXT("SoundMixManager"));
    this->SeasonReplicatorComponent = CreateDefaultSubobject<USeasonReplicatorComponent>(TEXT("SeasonReplicator"));
    this->BXEStateComponent = CreateDefaultSubobject<UBXEGameStateComponent>(TEXT("BXEStateComponent"));
    this->RarityManager = CreateDefaultSubobject<URarityManager>(TEXT("RarityManager"));
    this->TeamResources = CreateDefaultSubobject<UTeamResourcesComponent>(TEXT("TeamResources"));
    this->IsOnSpaceRig = false;
    this->IsInMidstation = false;
    this->bPlayersHaveReachedDroppod = false;
    this->bExitTransportHasArrived = false;
    this->CurrentDifficultySetting = NULL;
    this->HostilePressure = 0.00f;
    this->bIsWaveActive = false;
    this->RememberDifficulty = true;
    this->ProximityTracker = CreateDefaultSubobject<UPlayerProximityTracker>(TEXT("ProximityTracker"));
    this->ShowroomManager = CreateDefaultSubobject<UShowroomManager>(TEXT("ShowroomManager"));
    this->GameStats = NULL;
    this->MissionTime = 0;
    this->MissionStartTime = 0;
    this->CountdownRemaining = -1;
    this->CanCarryOverResources = true;
    this->CurrentPlayerSessionLeader = NULL;
    this->bHaveTriggeredBoss = false;
    this->bHaveDefeatedBoss = false;
    this->bArePlayersAllowedToPickSameClass = false;
}

void AFSDGameState::WaitForInitialGenerationDone(AFSDGameState* GameState, FLatentActionInfo LatentInfo) {
}

void AFSDGameState::UnblockAbilityUsage(AActor* blocker) {
}

void AFSDGameState::StartCountdown(int32 Duration, const FText& countdownName) {
}

void AFSDGameState::SetupLoadingScreenCharacters() {
}

void AFSDGameState::SetSpawnedBoss(AActor* NewSpawnedBoss) {
}

void AFSDGameState::SetPlayersHaveReachedDroppod(bool newHasPlayerReached) {
}

void AFSDGameState::SetPlayersAllowedToPickSameClass(const bool CanPickSameClass) {
}

void AFSDGameState::SetLevelTimeDilation_Implementation(float newTimeDilation) {
}

void AFSDGameState::SetLateJoinState(const FLateJoinState& NewState) {
}

void AFSDGameState::SetHaveTriggeredBoss(const bool NewHaveTriggeredBoss) {
}

void AFSDGameState::SetHaveDefeatedBoss(const bool NewHaveDefeatedBoss) {
}

void AFSDGameState::SetExitTransportHasArrived(bool newHasArrived) {
}

void AFSDGameState::SetCurrentDifficulty(UDifficultySetting* Setting) {
}

void AFSDGameState::ReplicateLeveLifeTime(AFSDPlayerState* InPlayerState) {
}

void AFSDGameState::RemoveRoundEndBlocker(UObject* blocker) {
}

void AFSDGameState::RemoveAllAbilityBlockers() {
}

void AFSDGameState::PostLocalizedGameMessage(const FText& Msg, const TArray<FText>& Arguments) {
}

void AFSDGameState::PostGameMessage(const FString& Msg) {
}

void AFSDGameState::OnTriggeredBossReplicated() {
}

void AFSDGameState::OnSpawnedBossReplicated() {
}

void AFSDGameState::OnRepNamedCountdowns(const TArray<FNamedCountdownInt>& PreviousCountdowns) {
}

void AFSDGameState::OnRepEndLevelState() {
}

void AFSDGameState::OnRep_NextWaveLevelTime() {
}

void AFSDGameState::OnRep_MissionTime() {
}

void AFSDGameState::OnRep_LevelTimeDilation() {
}

void AFSDGameState::OnRep_LateJoinState() {
}

void AFSDGameState::OnRep_LastLeveLifeTime() {
}

void AFSDGameState::OnRep_IsWaveActive() {
}

void AFSDGameState::OnRep_IsAbilityUsageOverrideEnabled() {
}

void AFSDGameState::OnRep_IsAbilityUsageBlocked(TArray<AActor*> oldBlockers) {
}

void AFSDGameState::OnRep_HostilePressure() {
}

void AFSDGameState::OnRep_CurrentDifficultySetting() {
}

void AFSDGameState::OnRep_CountdownText() {
}

void AFSDGameState::OnRep_CountdownRemaining(int32 prevTime) {
}

void AFSDGameState::OnRep_CooperReviveCounter() {
}

void AFSDGameState::OnRep_ActiveWaveTypes() {
}

void AFSDGameState::OnRep_ActivePlayerCharacters() {
}

void AFSDGameState::OnPlayerCharacterEndPlay(AActor* PlayerCharacterActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFSDGameState::OnPlayerCharacterDestroyed(AActor* PlayerCharacterActor) {
}

void AFSDGameState::OnDefeatedBossReplicated() {
}

void AFSDGameState::OnAbilityBlockerFreed(AActor* DestroyedActor) {
}

void AFSDGameState::NotifyServerQuit_Implementation() {
}



bool AFSDGameState::IsWaveActive() const {
    return false;
}

bool AFSDGameState::IsTutorialMission() const {
    return false;
}

bool AFSDGameState::IsRoundEndBlocked() const {
    return false;
}

bool AFSDGameState::IsCountingDown() const {
    return false;
}

bool AFSDGameState::IsAbilityUsageBlocked() const {
    return false;
}

void AFSDGameState::InitObjectives() {
}

void AFSDGameState::HostDisbandedTeam_Implementation() {
}

bool AFSDGameState::HaveTriggeredBoss() const {
    return false;
}

bool AFSDGameState::HaveStageSuccess() const {
    return false;
}

bool AFSDGameState::HaveStageFailure() const {
    return false;
}

bool AFSDGameState::HaveRunSuccess() const {
    return false;
}

bool AFSDGameState::HaveRunFailure() const {
    return false;
}

bool AFSDGameState::HaveRunAbort() const {
    return false;
}

bool AFSDGameState::HaveReplicatedEndOfRunState() const {
    return false;
}

bool AFSDGameState::HaveLoadingScreenCharacters() const {
    return false;
}

bool AFSDGameState::HaveDefeatedBoss() const {
    return false;
}

bool AFSDGameState::HasObjectivesReplicated() const {
    return false;
}


AActor* AFSDGameState::GetSpawnedBoss() const {
    return NULL;
}

TArray<UObjective*> AFSDGameState::GetSecondaryObjectives() const {
    return TArray<UObjective*>();
}

AProceduralSetup* AFSDGameState::GetProceduralSetup() {
    return NULL;
}

UObjective* AFSDGameState::GetPrimaryObjective() const {
    return NULL;
}

bool AFSDGameState::GetPlayersHaveReachedDroppod() const {
    return false;
}

TArray<AFSDPlayerController*> AFSDGameState::GetPlayerControllers() const {
    return TArray<AFSDPlayerController*>();
}

TArray<UObjective*> AFSDGameState::GetObjectives() const {
    return TArray<UObjective*>();
}

FEnemyWaveTime AFSDGameState::GetNextWaveLevelTime() const {
    return FEnemyWaveTime{};
}

TArray<AFSDPlayerState*> AFSDGameState::GetNetworkSortedPlayerArray() const {
    return TArray<AFSDPlayerState*>();
}

int32 AFSDGameState::GetMissionTime() const {
    return 0;
}

int32 AFSDGameState::GetMissionStartTime() const {
    return 0;
}

TArray<APlayerCharacter*> AFSDGameState::GetLoadingScreenCharacters() const {
    return TArray<APlayerCharacter*>();
}

float AFSDGameState::GetLevelTimeDilation() const {
    return 0.0f;
}

float AFSDGameState::GetLevelLifeTimeForRedFraction() const {
    return 0.0f;
}

float AFSDGameState::GetLevelLifeTimeForRedDifficulty() const {
    return 0.0f;
}

float AFSDGameState::GetLevelLifeTime() const {
    return 0.0f;
}

FLateJoinState AFSDGameState::GetLateJoinState() const {
    return FLateJoinState{};
}

float AFSDGameState::GetHostilePressure() const {
    return 0.0f;
}

AGameStats* AFSDGameState::GetGameStats() const {
    return NULL;
}

bool AFSDGameState::GetExitTransportHasArrived() const {
    return false;
}

TMap<UResourceData*, float> AFSDGameState::GetEndscreenResources() const {
    return TMap<UResourceData*, float>();
}

UDifficultyManager* AFSDGameState::GetDifficultyManager() const {
    return NULL;
}

UDifficultyController* AFSDGameState::GetDifficultyController() const {
    return NULL;
}

TMap<UResourceData*, float> AFSDGameState::GetCollectedResources() const {
    return TMap<UResourceData*, float>();
}

TArray<EWaveControllerType> AFSDGameState::GetActiveWaveTypes() const {
    return TArray<EWaveControllerType>();
}

TArray<UFSDEvent*> AFSDGameState::GetActiveEventsFromMission() const {
    return TArray<UFSDEvent*>();
}

void AFSDGameState::ClientNewMessage_Implementation(const FFSDChatMessage& Msg) {
}

void AFSDGameState::Client_NewLocalizedMessage_Implementation(const FFSDLocalizedChatMessage& Msg) {
}

void AFSDGameState::BroadcastDepositedResource_Implementation(APlayerCharacter* PlayerThatDeposited, UResourceData* DepositedResource, const float DepositedAmount) {
}

void AFSDGameState::BlockAbilityUsage(AActor* blocker) {
}

bool AFSDGameState::ArePlayersAllowedToPickSameClass() const {
    return false;
}

void AFSDGameState::All_SpawnScaledEffectAt_Implementation(FScaledEffect effect, FVector_NetQuantize Location) {
}

void AFSDGameState::All_SpawnScaledEffectAndCueAt_Implementation(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location) {
}

void AFSDGameState::All_OnTeamResourceCollected_Implementation(UResourceData* Resource, const float Amount) {
}

void AFSDGameState::All_InvalidateMovementAbilities_Implementation() {
}

void AFSDGameState::AddRoundEndBlocker(UObject* blocker) {
}

void AFSDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDGameState, EscapePod);
    DOREPLIFETIME(AFSDGameState, RoundEndBlockers);
    DOREPLIFETIME(AFSDGameState, AbilityUsageBlockers);
    DOREPLIFETIME(AFSDGameState, IsAbilityUsageOverrideEnabled);
    DOREPLIFETIME(AFSDGameState, LastLeveLifeTime);
    DOREPLIFETIME(AFSDGameState, LevelTimeDilation);
    DOREPLIFETIME(AFSDGameState, CooperReviveCounter);
    DOREPLIFETIME(AFSDGameState, bPlayersHaveReachedDroppod);
    DOREPLIFETIME(AFSDGameState, bExitTransportHasArrived);
    DOREPLIFETIME(AFSDGameState, ActivePlayerCharacters);
    DOREPLIFETIME(AFSDGameState, Objectives);
    DOREPLIFETIME(AFSDGameState, CurrentDifficultySetting);
    DOREPLIFETIME(AFSDGameState, NextWaveLevelTime);
    DOREPLIFETIME(AFSDGameState, HostilePressure);
    DOREPLIFETIME(AFSDGameState, ActiveWaveTypes);
    DOREPLIFETIME(AFSDGameState, bIsWaveActive);
    DOREPLIFETIME(AFSDGameState, MissionTime);
    DOREPLIFETIME(AFSDGameState, CountdownRemaining);
    DOREPLIFETIME(AFSDGameState, countdownText);
    DOREPLIFETIME(AFSDGameState, LoadingScreenCharacters);
    DOREPLIFETIME(AFSDGameState, InactivePlayers);
    DOREPLIFETIME(AFSDGameState, SpawnedBoss);
    DOREPLIFETIME(AFSDGameState, bHaveTriggeredBoss);
    DOREPLIFETIME(AFSDGameState, bHaveDefeatedBoss);
    DOREPLIFETIME(AFSDGameState, LevelEndState);
    DOREPLIFETIME(AFSDGameState, NamedCountdowns);
    DOREPLIFETIME(AFSDGameState, bArePlayersAllowedToPickSameClass);
    DOREPLIFETIME(AFSDGameState, LateJoinState);
    DOREPLIFETIME(AFSDGameState, HostSuccessionOrder);
    DOREPLIFETIME(AFSDGameState, AbortVoteState);
}



void AFSDGameState::OnRep_HostSuccessionOrder() {
}

void AFSDGameState::OnRep_AbortVoteState() {
}

float AFSDGameState::GetAbortVoteSecondsRemaining() const {
    return 0.0f;
}

