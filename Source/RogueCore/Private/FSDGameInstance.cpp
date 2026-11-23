#include "FSDGameInstance.h"
#include "FSDSendToURL.h"
#include "Templates/SubclassOf.h"

UFSDGameInstance::UFSDGameInstance() {
    this->ProceduralSetup = NULL;
    this->CanPlayOnline = true;
    this->FirstTimeInFrontend = true;
    this->SessionFirstStartOnSpaceRig = true;
    this->ShowFirstCharacterSelector = true;
    this->ShowSaveWarning = true;
    this->MissionResultInfo = NULL;
    this->DEBUGRandomGlobalMissionSeedEnabled = false;
    this->DEBUGRandomGlobalMissionSeed = -1;
    this->DEBUGFixedGlobalMissionSeed = -1;
    this->DEBUGFixedPLSSeed = -1;
    this->CanCommunicateOnline = true;
    this->ForcedMachineEvent = NULL;
    this->ForcedOtherEvent = NULL;
    this->ShowMinerManualWorkInProgress = false;
    this->TransitionMusicComponent = NULL;
    this->ShowingReconnectScreen = false;
    this->IsSpawnPosMarkerVisible = true;
    this->bGameSettingsChanged = false;
    this->ServerSearchActive = false;
    this->ProceduralLevel = NULL;
    this->IconGenerationManagerClass = NULL;
    this->IconGenerationManager = NULL;
    this->CampaignManager = NULL;
    this->RunManager = NULL;
    this->DesiredDifficulty = NULL;
    this->SaveGame = NULL;
    this->MovieModeActive = false;
    this->MovieModeActiveInSpacerig = false;
    this->MovieModeStartAtOrigin = false;
    this->MovieModeStartWithCameraShake = false;
    this->InKBytesPerSecond = 0.00f;
    this->OutKBytesPerSecond = 0.00f;
    this->ControllerVibrationSubmix = NULL;
    this->ControllerSpeakerSubmix = NULL;
    this->bIsGameMarkedAsModded = false;
    this->gameOwnerStatus = 0;
    this->IsOnPressStartScreen = false;
    this->bHasSeenStartScreen = false;
    this->bHasSeenNarrativeVideo = false;
    this->bHasSeenInfoScreen = false;
    this->SendToURL = CreateDefaultSubobject<UFSDSendToURL>(TEXT("FSDSendToURL"));
    this->SessionStartTime = 0.00f;
    this->SessionStartTimestamp = 0;
    this->ChatHasFocus = false;
    this->bIsNextRamrodSpawnInVrCryoBed = false;
    this->OnlineSystem = NULL;
    this->NextActiveLoadingScreen = ELoadingScreenType::None;
    this->ActiveLoadingScreen = ELoadingScreenType::None;
    this->TelemetrySubsystem = NULL;
    this->LocalPlayerEndLocationFallback = EPlayerStageEndLocation::Unknown;
}

void UFSDGameInstance::UpdateGlobelMissionSeed() {
}

void UFSDGameInstance::StopPhotographyInputProcessor() {
}

void UFSDGameInstance::StartPhotographyInputProcessor() {
}

AProceduralSetup* UFSDGameInstance::SpawnProcedural() {
    return NULL;
}

void UFSDGameInstance::ShowLoadingScreen(const ELoadingScreenType LoadingScreen) {
}

void UFSDGameInstance::SetServerSearchActive(const bool Active) {
}

void UFSDGameInstance::SetPreviewingCharacterID(UWindowWidget* InPreviewWindow, UPlayerCharacterID* InPlayerCharacterID) {
}

void UFSDGameInstance::SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text) {
}

void UFSDGameInstance::SetIsNextRamrodSpawnInVrCryoBed(const bool NewInVrCryoBed) {
}

void UFSDGameInstance::SetGlobalMissionSeed(int32 Seed) {
}

void UFSDGameInstance::SetEllisInstance(AEllisDrone* NewDrone) {
}


void UFSDGameInstance::SetCooperInstance(ACooperDrone* NewBosco) {
}

void UFSDGameInstance::RestoreCursors() {
}

void UFSDGameInstance::ResetSaveGame() {
}

void UFSDGameInstance::RequestReadyForJoinSessionMapTravel_Implementation() {
}

void UFSDGameInstance::RemoveGameOwnerStatus(EGameOwnerStatus StatusToRemove) {
}

void UFSDGameInstance::RemoveEllis() {
}

void UFSDGameInstance::RemoveCooper() {
}

void UFSDGameInstance::RemoveAllTemporaryBuff(APlayerController* PlayerController) {
}

void UFSDGameInstance::PostInit() {
}

void UFSDGameInstance::PairingUseNewProfile() {
}

void UFSDGameInstance::OnOnlineSessionChanged(const EOnlineSessionStatus OldStatus, const EOnlineSessionStatus NewStatus) {
}

void UFSDGameInstance::OnLoginStatusChanged(EFSDLoginState NewState, const FString& resultString) {
}


void UFSDGameInstance::OnGameStateSet(const AGameStateBase* GameStateBase) {
}

void UFSDGameInstance::OnGameStateChanged(const FOnGameStateDelegate& OnNewStateSet, bool CallInstantlyIfAlreadySet) {
}

void UFSDGameInstance::MarkReadyForJoinSessionMapTravel() {
}

void UFSDGameInstance::MarkHasSeenStartScreen() {
}

void UFSDGameInstance::MarkHasSeenNarrativeVideo() {
}

void UFSDGameInstance::MarkHasSeenInfoScreen() {
}

void UFSDGameInstance::LoadSaveGame(UFSDSaveGame* toLoad) {
}

bool UFSDGameInstance::IsNextRamrodSpawnInVrCryoBed() const {
    return false;
}

bool UFSDGameInstance::IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const {
    return false;
}

bool UFSDGameInstance::IsGenericMutatorActive(FName InTag) const {
    return false;
}

bool UFSDGameInstance::IsFreeBeerRewardActive() const {
    return false;
}

bool UFSDGameInstance::IsCampaignMission() {
    return false;
}

bool UFSDGameInstance::HasSeenStartScreen() const {
    return false;
}

bool UFSDGameInstance::HasSeenNarrativeVideo() const {
    return false;
}

bool UFSDGameInstance::HasSeenInfoScreen() const {
    return false;
}

bool UFSDGameInstance::HasRandomBeerBuff() const {
    return false;
}

bool UFSDGameInstance::HasPendingActivity() const {
    return false;
}

bool UFSDGameInstance::HasAnalytics() {
    return false;
}

void UFSDGameInstance::GraphicsUserSettingsChanged() {
}

void UFSDGameInstance::GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player) {
}

FVector2D UFSDGameInstance::GetViewportSize() {
    return FVector2D{};
}

EOnlineSessionType UFSDGameInstance::GetSessionType() const {
    return EOnlineSessionType::Solo;
}

FString UFSDGameInstance::GetSeedString(UObject* WorldContextObject) {
    return TEXT("");
}

UPlayerCharacterID* UFSDGameInstance::GetPreviewedCharacterID() const {
    return NULL;
}

TArray<UMutator*> UFSDGameInstance::GetMutators(TSubclassOf<UMutator> mutatorClass) const {
    return TArray<UMutator*>();
}

AFSDPlayerController* UFSDGameInstance::GetLocalFSDPlayerController() const {
    return NULL;
}

UIconGenerationManager* UFSDGameInstance::GetIconGenerationManager() const {
    return NULL;
}

int32 UFSDGameInstance::GetGlobalMissionSeed() const {
    return 0;
}

bool UFSDGameInstance::GetGameOwnerStatus(EGameOwnerStatus status) const {
    return false;
}

UMutator* UFSDGameInstance::GetFirstMutator(TSubclassOf<UMutator> mutatorClass) const {
    return NULL;
}

TArray<FNetworkConnectionInfo> UFSDGameInstance::GetConnectionInfo() {
    return TArray<FNetworkConnectionInfo>();
}

UStage* UFSDGameInstance::GetActiveStage() const {
    return NULL;
}

APlayerCharacter* UFSDGameInstance::GetActiveLocalPlayerCharacter() const {
    return NULL;
}

ELoadingScreenType UFSDGameInstance::GetActiveLoadingScreen() const {
    return ELoadingScreenType::None;
}

void UFSDGameInstance::GameUserSettingsChanged() {
}

void UFSDGameInstance::Cheat_SetSpawnPosMarkersVisible(bool visible) {
}

FText UFSDGameInstance::ChatState_UncommitedMessage() {
    return FText::GetEmpty();
}

void UFSDGameInstance::ChatState_StoreState(bool focus, const FText& uncommitedMessage) {
}

bool UFSDGameInstance::ChatState_HadFocus() const {
    return false;
}

void UFSDGameInstance::ChatState_ClearFocus() {
}

void UFSDGameInstance::CachePSOsOnCommand() {
}

void UFSDGameInstance::BroadcastLoaderRockAndStone(UPlayerCharacterID* PlayerCharacter, USoundBase* SaluteSound, const FDialogVoiceSettings& VoiceSettings) {
}

void UFSDGameInstance::BroadcastActiveStageChanged(UStage* NewActiveStage) {
}


UHUDWarningWidget* UFSDGameInstance::AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound) {
    return NULL;
}

void UFSDGameInstance::AddToFriendSessions(const FString& friendSessionId, const FString& friendName) {
}


void UFSDGameInstance::AddGameOwnerStatus(EGameOwnerStatus StatusToAdd) {
}


