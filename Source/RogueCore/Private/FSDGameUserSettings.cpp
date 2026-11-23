#include "FSDGameUserSettings.h"

UFSDGameUserSettings::UFSDGameUserSettings() {
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->bGraphicSettingsChanged = false;
    this->volumeCharacterVoice = 100.00f;
    this->volumeMissionControl = 100.00f;
    this->volumeMaster = 200.00f;
    this->volumeSFX = 100.00f;
    this->volumeMusic = 100.00f;
    this->volumeJukebox = 100.00f;
    this->CurrentAudioOutputDeviceId = TEXT("{0.0.0.00000000}.{bee029d9-e0b5-40dd-88ad-77422e1d5c34}");
    this->UseDefaultAudioOutputDevice = true;
    this->Sharpening = 0.00f;
    this->RenderingApi = EUserRenderingApi::DX12;
    this->RenderingType = EUserRenderingType::DLSS;
    this->AmdFsr3Mode = 2;
    this->AmdFsr3Sharpness = 0.00f;
    this->AmdFsr3FrameInterpolationActive = false;
    this->ReflexMode = ENVidiaReflexMode::EnabledWithBoost;
    this->AbilityActivationMode = EAbilityActivationMode::Hold;
    this->soundClassCharacterVoices = NULL;
    this->soundClassMissionControl = NULL;
    this->soundClassMaster = NULL;
    this->soundClassSFX = NULL;
    this->soundClassUI = NULL;
    this->soundClassMusic = NULL;
    this->soundClassJukebox = NULL;
    this->soundClassVoice = NULL;
    this->ChatFontSize = 13;
    this->bDuckOnOmegaShout = true;
    this->bIsOmegaGlitchEnabled = true;
    this->AutoRefreshServerlist = true;
    this->MouseXSensitivity = 600.00f;
    this->MouseYSensitivity = 600.00f;
    this->EnableMouseSmoothing = false;
    this->UseSeperateSensetivity = false;
    this->InvertMouse = false;
    this->InvertScroolWheel = false;
    this->SprintMode = ESprintMode::AutoSprintHoldToWalk;
    this->useToggleLaserpointer = false;
    this->FOV = 100.00f;
    this->HeadbobbingScale = 0.00f;
    this->CameraShakeScale = 25.00f;
    this->ChatFadeTime = 10.00f;
    this->useStreamerProgram = false;
    this->SoundOnChatMessage = true;
    this->PhotosensitiveMode = false;
    this->OverlayIntensity = 0.00f;
    this->ShowUIAnimations = true;
    this->UseProfanityFilter = false;
    this->ForceFeedbackScale = 1.00f;
    this->InvertFlightControls = false;
    this->Gamma = 2.20f;
    this->HDRColorGamma = 1.20f;
    this->ConsoleGraphicsMode = EConsoleGraphicsMode::Fidelity;
    this->StaticResoultionScale = 1.00f;
    this->UseManuelGrahpicsMode = false;
    this->UIDPIScale = 90.00f;
    this->EnableCustomUIScale = false;
    this->CheckCursorOutOfBounds = false;
    this->VSyncToBeApplied = false;
    this->InFullscreenModeToBeApplied = EWindowMode::Fullscreen;
    this->InFullscreenModeToBeAppliedValid = false;
    this->VSyncToBeAppliedValid = false;
    this->ResolutionToBeAppliedValid = false;
    this->ActiveDownscaleMode = EWindowResolutionDownscaleMode::None;
    this->ServerSearchRegion = -1;
    this->ServerSearchPasswordRequired = false;
    this->CurrentInputSource = EFSDInputSource::MouseAndKeyboard;
    this->RequestedInputSource = EFSDInputSource::None;
    this->SwapControllerThumbsticks = false;
    this->bTutorialHintsEnabled = false;
    this->bShowSubtitles = true;
    this->bShowFPS = true;
    this->AbilityActivationDelay = 0.18f;
    this->ShowNetInfoLevel = 0;
    this->bIsFirstBootBenchmarkPending = false;
    this->bCanShowBlood = true;
    this->TranslatorDebugModeEnabled = false;
    this->bIsGameMarkedAsModded = false;
    this->bIsTinnitusExplosionSoundsEnabled = true;
    this->CritSoundEnabled = true;
    this->CritSoundFromMinionsEnabled = false;
    this->DamageNumbersEnabled = true;
    this->MinionDamageNumbersEnabled = true;
    this->DamageNumberSizeScaling = 1.00f;
    this->LastSelectedRunMode = ERunMode::Cautious;
    this->LastSelectedRunHazard = ERunHazard::Hazard1;
    this->ShowDigitalTimerOnHostileReading = true;
    this->SelectedDifficultyLevels.AddDefaulted(3);
    this->DifficultyLevelsAddedByDefault.AddDefaulted(3);
    this->DownedTurnDirection_Controller = 1.00f;
    this->DownedTurnDirection_Mouse = -1.00f;
    this->PlayerAimCameraOption = EPlayerAimCameraOption::FirstPersonAim;
    this->AntiAliasingType = -1;
    this->UpscalingType = 0;
    this->NvidiaDlssMode = UDLSSMode::Quality;
}

void UFSDGameUserSettings::UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice, USoundClass* Jukebox) {
}

void UFSDGameUserSettings::UpdateForceFeedbackScaleOnController(APlayerController* Controller) {
}

void UFSDGameUserSettings::TryApplyFirstBootHardwareBenchmark() {
}

bool UFSDGameUserSettings::ToggleTranslatorDebugMode() {
    return false;
}

void UFSDGameUserSettings::SetZiplineGunAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetVSyncEnabledToBeApplied(bool bEnable) {
}

void UFSDGameUserSettings::SetVolume(EVolumeType volumeType, float Volume) {
}

bool UFSDGameUserSettings::SetVoiceChatOutputDevice(const FFSDVoiceDeviceHandle& inDevice) {
    return false;
}

bool UFSDGameUserSettings::SetVoiceChatInputDevice(const FFSDVoiceDeviceHandle& inDevice) {
    return false;
}

void UFSDGameUserSettings::SetVoiceChatEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetUseToggleTerrainScanner(bool useToggleTerrainScanner) {
}

void UFSDGameUserSettings::SetUseToggleLaserpointer(bool NewUseToggleLaserpointer) {
}

void UFSDGameUserSettings::SetUseStreamerProgram(bool NewUseStreamerProgram) {
}

void UFSDGameUserSettings::SetUseSeparateSensitivity(bool newSetting) {
}

void UFSDGameUserSettings::SetUseProfanityFilter(bool shouldUse) {
}

void UFSDGameUserSettings::SetUseManualGraphicsMode(bool bEnabled) {
}

void UFSDGameUserSettings::SetUseDefaultVoiceChatOutputDevice(bool UseDefault) {
}

void UFSDGameUserSettings::SetUseDefaultVoiceChatInputDevice(bool UseDefault) {
}

void UFSDGameUserSettings::SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault) {
}

void UFSDGameUserSettings::SetUseCustomUIScale(bool UseCustomScale) {
}

void UFSDGameUserSettings::SetUIDPIScale(float uiscale) {
}

void UFSDGameUserSettings::SetTutorialHintsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetTurn180Mode(ETurn180Mode InMode) {
}

void UFSDGameUserSettings::SetSwapControllerThumbsticks(bool InSwapThumbsticks) {
}

void UFSDGameUserSettings::SetSteamSearchRegion(ESteamSearchRegion InRegion) {
}

void UFSDGameUserSettings::SetStaticResolutionScale(float percentage) {
}

void UFSDGameUserSettings::SetSprintMode(ESprintMode Mode) {
}

void UFSDGameUserSettings::SetShowUIAnimations(bool shouldShow) {
}

void UFSDGameUserSettings::SetShowSubtitles(bool Show) {
}

void UFSDGameUserSettings::SetShowNetInfoLevel(int32 Level) {
}

void UFSDGameUserSettings::SetShowFPS(bool visible) {
}

void UFSDGameUserSettings::SetShowDigitalHostileTimer(bool inShowDigitalTimer) {
}

void UFSDGameUserSettings::SetSharpening(float NewSharpening) {
}

void UFSDGameUserSettings::SetServerSearchPasswordRequired(bool InPasswordRequired) {
}

void UFSDGameUserSettings::SetScreenResolutionToBeApplied(FIntPoint Resolution) {
}

void UFSDGameUserSettings::SetRenderResolutionScale(const float NewScale) {
}

void UFSDGameUserSettings::SetRenderingType(const EUserRenderingType Type) {
}

void UFSDGameUserSettings::SetRenderingApi(const EUserRenderingApi Api) {
}

void UFSDGameUserSettings::SetReflexMode(ENVidiaReflexMode NewReflexMode) {
}

void UFSDGameUserSettings::SetPushToTalk(bool bEnable) {
}

void UFSDGameUserSettings::SetPreviousItemEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetPlaySoundOnChatMessage(bool playSoundOnMessage) {
}

void UFSDGameUserSettings::SetPlayerAimCameraOption(const EPlayerAimCameraOption NewOption) {
}

void UFSDGameUserSettings::SetPhotosensitiveMode(bool modeOn) {
}

void UFSDGameUserSettings::SetOverlayIntensity(const float NewIntensity) {
}

void UFSDGameUserSettings::SetOmegaGlitchEnabled(const bool NewEnabled) {
}

void UFSDGameUserSettings::SetMouseYSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetMouseXSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetMouseSmoothingEnabled(const bool IsEnabled) {
}

void UFSDGameUserSettings::SetMinionDamageNumbersEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetLastSelectedRunMode(const ERunMode NewRunMode) {
}

void UFSDGameUserSettings::SetLastSelectedRunHazard(const ERunHazard NewRunHazard) {
}

void UFSDGameUserSettings::SetIsTinnitusExplosionSoundsEnabled(const bool NewActive) {
}

void UFSDGameUserSettings::SetIsGameMarkedAsModded(const bool NewModded) {
}

void UFSDGameUserSettings::SetInvertMouseWheel(bool invertMouseWheel) {
}

void UFSDGameUserSettings::SetInvertMouse(bool NewInvertMouse) {
}

void UFSDGameUserSettings::SetInvertFlightControls(bool Invert) {
}

void UFSDGameUserSettings::SetInputSource(EFSDInputSource NewSource) {
}

void UFSDGameUserSettings::SetHoldToFire(bool HoldToFire) {
}

void UFSDGameUserSettings::SetHoldToBreakImmobilization(bool holdToBreak) {
}

void UFSDGameUserSettings::SetHeadBobbingScale(float NewHeadbobbingScale) {
}

void UFSDGameUserSettings::SetHDRColorGamma(float NewGamma) {
}

void UFSDGameUserSettings::SetGrapplingHookAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetGamma(float gamme) {
}

void UFSDGameUserSettings::SetGameServerName(const int32 localUserNum, const FString& Name) {
}

void UFSDGameUserSettings::SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode) {
}

void UFSDGameUserSettings::SetFOV(float NewFOV) {
}

void UFSDGameUserSettings::SetForceFeedbackScale(float Scale) {
}

void UFSDGameUserSettings::SetDuckOnOmegaShoutEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection) {
}

void UFSDGameUserSettings::SetDifficultySelected(int32 Difficulty, bool IsSelected) {
}

void UFSDGameUserSettings::SetDebugLocalizerMode(bool bEnable) {
}

void UFSDGameUserSettings::SetDamageNumbersScaling(float Value) {
}

void UFSDGameUserSettings::SetDamageNumbersEnabled(bool Value) {
}

void UFSDGameUserSettings::SetCurrentUserSaveSlotName(UObject* WorldContextObject, const FString& SaveSlotName, ESaveSlotChangeProcedure changeProcedure) {
}

void UFSDGameUserSettings::SetCritSoundFromMinionsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetCritSoundEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetConsoleGraphicsMode(EConsoleGraphicsMode Mode) {
}

void UFSDGameUserSettings::SetColorVisionDeficiency(EColorVisionDeficiency InType, float InSeverity) {
}

void UFSDGameUserSettings::SetCheckForOutOfBoundsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetChatFontSize(int32 InFontSize) {
}

void UFSDGameUserSettings::SetChatFadeTime(float FadeTime) {
}

void UFSDGameUserSettings::SetChatEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetCanShowBlood(bool bloodAllowed) {
}

void UFSDGameUserSettings::SetCameraShakeScale(float NewCameraShakeScale) {
}

void UFSDGameUserSettings::SetAutoRefreshServerlist(bool Value) {
}

bool UFSDGameUserSettings::SetAudioOutputDevice(UObject* WorldContextObject, const FString& DeviceID) {
    return false;
}

void UFSDGameUserSettings::SetAMDFSR3Mode(int32 Mode) {
}

void UFSDGameUserSettings::SetAMDFrameGen(bool Enable) {
}

void UFSDGameUserSettings::SetAimSensitivity(float NewValue) {
}

void UFSDGameUserSettings::SetAimOuterAcceleration(float NewValue) {
}

void UFSDGameUserSettings::SetAimDeadZone(float NewValue) {
}

void UFSDGameUserSettings::SetAbilityActivationMode(EAbilityActivationMode Mode) {
}

void UFSDGameUserSettings::SetAbilityActivationDelay(float Delay) {
}

void UFSDGameUserSettings::ResetGraphicsChanges() {
}

void UFSDGameUserSettings::ResetControllerSettings() {
}

void UFSDGameUserSettings::PushFrameRateLimitOverride() {
}

void UFSDGameUserSettings::PopFrameRateLimitOverride() {
}

bool UFSDGameUserSettings::IsVoiceChatEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsTinnitusExplosionSoundsEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsRenderingTypeSupported(const EUserRenderingType Type) const {
    return false;
}

bool UFSDGameUserSettings::IsRenderingApiActive() const {
    return false;
}

bool UFSDGameUserSettings::IsOmegaGlitchEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsMouseSmoothingEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsManaulGraphicsModeAvailable() {
    return false;
}

bool UFSDGameUserSettings::IsGameMarkedAsModded() const {
    return false;
}

bool UFSDGameUserSettings::IsDuckOnOmegaShoutEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsDebugLocalizerModeEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsCurrentInputSource(EFSDInputSource InputSource) {
    return false;
}

bool UFSDGameUserSettings::IsAMDFrameGenEnabled() const {
    return false;
}

void UFSDGameUserSettings::InitializeSettings(UObject* WorldContextObject) {
}

void UFSDGameUserSettings::InitializeDifficultySelection(UObject* WorldContext, const TArray<int32> Selection) {
}

bool UFSDGameUserSettings::HasVoiceChatOutputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::HasVoiceChatInputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::GetZiplineGunAutoSwitch() const {
    return false;
}

bool UFSDGameUserSettings::GetVSyncEnabledToBeApplied() {
    return false;
}

int32 UFSDGameUserSettings::GetVolumeAsInt32(const EVolumeType Type) {
    return 0;
}

float UFSDGameUserSettings::GetVolume(EVolumeType volumeType) {
    return 0.0f;
}

bool UFSDGameUserSettings::GetUseToggleTerrainScanner() const {
    return false;
}

bool UFSDGameUserSettings::GetUseToggleLaserPointer() const {
    return false;
}

bool UFSDGameUserSettings::GetUseStreamerProgram() const {
    return false;
}

bool UFSDGameUserSettings::GetUseSeparateSensitivity() const {
    return false;
}

bool UFSDGameUserSettings::GetUseProfanityFilter() const {
    return false;
}

bool UFSDGameUserSettings::GetUseManualGraphicsMode() {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultVoiceChatOutputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultVoiceChatInputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultAudioOutputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseCustomUIScale() {
    return false;
}

float UFSDGameUserSettings::GetUIDPIScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetTutorialHintsEnabled() const {
    return false;
}

ETurn180Mode UFSDGameUserSettings::GetTurn180Mode() const {
    return ETurn180Mode::PressRun;
}

ESteamSearchRegion UFSDGameUserSettings::GetSteamSearchRegion() const {
    return ESteamSearchRegion::Close;
}

float UFSDGameUserSettings::GetStaticResolutionScale() {
    return 0.0f;
}

ESprintMode UFSDGameUserSettings::GetSprintMode() const {
    return ESprintMode::PressToSprint;
}

bool UFSDGameUserSettings::GetShowUIAnimations() const {
    return false;
}

bool UFSDGameUserSettings::GetShowSubtitles() const {
    return false;
}

int32 UFSDGameUserSettings::GetShowNetInfoLevel() const {
    return 0;
}

bool UFSDGameUserSettings::GetShowFPS() const {
    return false;
}

bool UFSDGameUserSettings::GetShowDigitalHostileTimer() const {
    return false;
}

float UFSDGameUserSettings::GetSharpening() const {
    return 0.0f;
}

FIntPoint UFSDGameUserSettings::GetScreenResolutionToBeApplied() {
    return FIntPoint{};
}

float UFSDGameUserSettings::GetRenderResolutionScale() const {
    return 0.0f;
}

EUserRenderingType UFSDGameUserSettings::GetRenderingType() const {
    return EUserRenderingType::Pure;
}

EUserRenderingApi UFSDGameUserSettings::GetRenderingApi() const {
    return EUserRenderingApi::Default;
}

ENVidiaReflexMode UFSDGameUserSettings::GetReflexMode() const {
    return ENVidiaReflexMode::Disabled;
}

bool UFSDGameUserSettings::GetPushToTalk() const {
    return false;
}

bool UFSDGameUserSettings::GetPreviousItemEnabledOnController() const {
    return false;
}

bool UFSDGameUserSettings::GetPlaySoundOnChatMessage() const {
    return false;
}

EPlayerAimCameraOption UFSDGameUserSettings::GetPlayerAimCameraOption() const {
    return EPlayerAimCameraOption::FirstPersonAim;
}

bool UFSDGameUserSettings::GetPhotosensitiveMode() const {
    return false;
}

float UFSDGameUserSettings::GetOverlayIntensity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetMouseYSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetMouseXSensitivity() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetMinionDamageNumbersEnabled() const {
    return false;
}

ERunMode UFSDGameUserSettings::GetLastSelectedRunMode() const {
    return ERunMode::None;
}

ERunHazard UFSDGameUserSettings::GetLastSelectedRunHazard() const {
    return ERunHazard::None;
}

bool UFSDGameUserSettings::GetIsDifficultySelected(int32 Difficulty) const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouseWheel() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouse() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertFlightControls() const {
    return false;
}

EFSDInputSource UFSDGameUserSettings::GetInputSource() {
    return EFSDInputSource::None;
}

bool UFSDGameUserSettings::GetHoldToFire() const {
    return false;
}

bool UFSDGameUserSettings::GetHoldToBreakImmobilization() const {
    return false;
}

float UFSDGameUserSettings::GetHeadBobbingScale() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetHDRColorGamma() {
    return 0.0f;
}

bool UFSDGameUserSettings::GetGrapplingHookAutoSwitch() const {
    return false;
}

float UFSDGameUserSettings::GetGamma() const {
    return 0.0f;
}

TEnumAsByte<EWindowMode::Type> UFSDGameUserSettings::GetFullscreenModeToBeApplied() {
    return EWindowMode::Fullscreen;
}

UFSDGameUserSettings* UFSDGameUserSettings::GetFSDGameUserSettings() {
    return NULL;
}

float UFSDGameUserSettings::GetFOV() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetForceFeedbackScale() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetDownCameraTurnDirection(EFSDInputSource InputSource) const {
    return 0.0f;
}

float UFSDGameUserSettings::GetDamageNumberSizeScaling() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetDamageNumbersEnabled() const {
    return false;
}

FString UFSDGameUserSettings::GetCurrentUserSaveSlotName() {
    return TEXT("");
}

EFSDInputSource UFSDGameUserSettings::GetCurrentInputSource() {
    return EFSDInputSource::None;
}

bool UFSDGameUserSettings::GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice) {
    return false;
}

FFSDVoiceDeviceHandle UFSDGameUserSettings::GetCurrentAudioInputDevice() {
    return FFSDVoiceDeviceHandle{};
}

bool UFSDGameUserSettings::GetCritSoundFromMinionsEnabled() const {
    return false;
}

bool UFSDGameUserSettings::GetCritSoundEnabled() const {
    return false;
}

EConsoleGraphicsMode UFSDGameUserSettings::GetConsoleGraphicsMode() {
    return EConsoleGraphicsMode::Fidelity;
}

bool UFSDGameUserSettings::GetCheckForOutOfBounds() {
    return false;
}

int32 UFSDGameUserSettings::GetChatFontSize() const {
    return 0;
}

float UFSDGameUserSettings::GetChatFadeTime() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetChatEnabledOnController() const {
    return false;
}

float UFSDGameUserSettings::GetCameraShakeScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions) {
    return false;
}

bool UFSDGameUserSettings::GetAutoRefreshServerlist() const {
    return false;
}

FString UFSDGameUserSettings::GetAudioOutputDeviceName(UObject* WorldContextObject, const FString& DeviceID) {
    return TEXT("");
}

int32 UFSDGameUserSettings::GetAMDFSR3Mode() const {
    return 0;
}

bool UFSDGameUserSettings::GetAMDFrameGenOptionAvailable() const {
    return false;
}

float UFSDGameUserSettings::GetAimSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimOuterAcceleration() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimDeadZone() const {
    return 0.0f;
}

EAbilityActivationMode UFSDGameUserSettings::GetAbilityActivationMode() const {
    return EAbilityActivationMode::Toggle;
}

float UFSDGameUserSettings::GetAbilityActivationDelay() const {
    return 0.0f;
}

FString UFSDGameUserSettings::GameServerNameFiltered() const {
    return TEXT("");
}

FString UFSDGameUserSettings::GameServerName() const {
    return TEXT("");
}

bool UFSDGameUserSettings::FSDSetCurrentLanguage(UObject* WorldContextObject, const FString& Culture) {
    return false;
}

UFSDGameUserSettings* UFSDGameUserSettings::FSDGameUserSettings() {
    return NULL;
}

bool UFSDGameUserSettings::ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode) {
    return false;
}

void UFSDGameUserSettings::ClearCustomKeyBindings(bool InGamepadKeys) {
}

bool UFSDGameUserSettings::CanShowBlood() const {
    return false;
}

void UFSDGameUserSettings::ApplyGraphicsChanges() {
}

void UFSDGameUserSettings::ApplyFirstBootHardwareBenchmark() {
}



void UFSDGameUserSettings::SetNvidiaDlssMode(UDLSSMode Mode) {
}

UDLSSMode UFSDGameUserSettings::GetNvidiaDlssMode() const {
    return UDLSSMode::Off;
}

