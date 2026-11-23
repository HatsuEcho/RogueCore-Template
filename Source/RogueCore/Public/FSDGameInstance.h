#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "Engine/GameInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EFSDLoginState -FallbackName=EFSDLoginState
#include "EFSDLoginState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EOnlineSessionStatus -FallbackName=EOnlineSessionStatus
#include "EOnlineSessionStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EOnlineSessionType -FallbackName=EOnlineSessionType
#include "EOnlineSessionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=FSDBlueprintSessionResult -FallbackName=FSDBlueprintSessionResult
#include "FSDBlueprintSessionResult.h"
#include "DialogVoiceSettings.h"
#include "EGameOwnerStatus.h"
#include "ELoadingScreenType.h"
#include "EMinersManualSection.h"
#include "EMinersManualSinglePage.h"
#include "GenericSignatureDelegate.h"
#include "NetworkConnectionInfo.h"
#include "OnGameStateDelegateDelegate.h"
#include "SkinSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "EPlayerStageEndLocation.h"
#include "FSDGameInstance.generated.h"

class ACooperDrone;
class AEllisDrone;
class AFSDGameState;
class AFSDPlayerController;
class AGameStateBase;
class AMolly;
class APlayerCharacter;
class APlayerController;
class APostProcessingManager;
class AProceduralSetup;
class ATutorialManager;
class UAudioComponent;
class UCampaignManager;
class UDifficultySetting;
class UFSDGameUserSettings;
class UFSDSaveGame;
class UFSDSendToURL;
class UHUDWarningWidget;
class UIconGenerationManager;
class ULevelSequence;
class UMouseCursorWidget;
class UMutator;
class UObject;
class UOnlineSessionSubSystem;
class UPlayerCharacterID;
class URunManager;
class USoundBase;
class USoundSubmix;
class USpecialEvent;
class UStage;
class UStageResultInfo;
class UTelemetrySubsystem;
class UTemporaryBuff;
class UTexture2D;
class UWindowWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFSDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialManagerSignature, ATutorialManager*, NewManager);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTemporaryBuffChanged, UTemporaryBuff*, buff, APlayerCharacter*, AffectedPlayer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowReconnectController, bool, Show);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShowCharacterSelectorRotateSignature, float, Pitch, float, Yaw);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOpenMinersManualDelegate, UObject*, IdentifyingObject, bool, OpenSpecificPage, EMinersManualSinglePage, page);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSearchForFriendsComplete, bool, bWasSuccessful, const FString&, ErrorStr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveGameLoaded, UFSDSaveGame*, SaveGame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoaderStartSig, ULevelSequence*, LoaderLevelSequence);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateMultiDelegate, AFSDGameState*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewPostProcessingManager, APostProcessingManager*, PostProcessingManager);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewHUDWarningDelegate, UHUDWarningWidget*, newWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMinersManualNotification, EMinersManualSection, Section, FGuid, ObjectId, FText, Text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoinSignature, FFSDBlueprintSessionResult, Session);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratedMissionSignature, UStage*, OutGeneratedMission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDGameInstanceSalute, UPlayerCharacterID*, PlayerCharacterID, USoundBase*, SaluteSound, const FDialogVoiceSettings&, VoiceSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDonkeyCharacterDelegate, AMolly*, InDonkey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCravityChangedSignature, float, CurrentGravity, float, change);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCooperChanged, ACooperDrone*, Bosco);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBXEDroneChanged, AEllisDrone*, BXEDrone);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APostProcessingManager> PostProcessingManager;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> ActiveLocalPlayerCharacter;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 gameOwnerStatus;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnPressStartScreen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenStartScreen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenNarrativeVideo;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenInfoScreen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSendToURL* SendToURL;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionStartTimestamp;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ChatHasFocus;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText UncommitedChatMesssage;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNextRamrodSpawnInVrCryoBed;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOnlineSessionSubSystem* OnlineSystem;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, UWorld*> AlwaysLoadedWorldsMap;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> AlwaysLoadedWorlds;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELoadingScreenType NextActiveLoadingScreen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELoadingScreenType ActiveLoadingScreen;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNetworkConnectionInfo> ConnectionInfoCahce;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTelemetrySubsystem* TelemetrySubsystem;

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinersManualNotification OnMinersManualNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMolly> Donkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanPlayOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FirstTimeInFrontend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SessionFirstStartOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowFirstCharacterSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowSaveWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageResultInfo* MissionResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DEBUGRandomGlobalMissionSeedEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGRandomGlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGFixedGlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGFixedPLSSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanCommunicateOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FriendSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedMachineEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedOtherEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMinerManualWorkInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TransitionMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowingReconnectScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedMissionSignature OnActiveStageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonkeyCharacterDelegate OnDonkeyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCooperChanged OnCooperChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEDroneChanged OnBXEDroneChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSaveGameLoaded OnSaveGameLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSearchForFriendsComplete OnStartSearchForFriendsComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewHUDWarningDelegate OnNewHUDWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryBuffChanged OnTemporaryBuffAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGameSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGraphicsSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnPressStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinSignature OnJoinPendingInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnSkinChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoaderStartSig OnLoaderStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnLoaderStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDGameInstanceSalute OnLoaderRockAndStone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnStartForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnSkipForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnForgingDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenMinersManualDelegate OnOpenMinersManual;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialManagerSignature OnTutorialManagerSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnActiveLocalPlayerCharacterChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowReconnectController OnShowReconnectScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnXBoxChangeUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnHDRGammaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCravityChangedSignature OnGravityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPostProcessingManager OnNewPostProcessingManager;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkinSignature OnPreviewSkinChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnPrivilegeCheckComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStateMultiDelegate OnNewGameState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorRotateSignature OnAnalogueControllerRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorRotateSignature OnAnalogueControllerRotationYawOnly;
    
private:
    
    
    
    
    
    
    
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double SessionStartTime;
    
    
    
    
    
    
    
    
    
    
    
    
public:
    UFSDGameInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateGlobelMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    void StopPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    void StartPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    AProceduralSetup* SpawnProcedural();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreen(const ELoadingScreenType LoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchActive(const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewingCharacterID(UWindowWidget* InPreviewWindow, UPlayerCharacterID* InPlayerCharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNextRamrodSpawnInVrCryoBed(const bool NewInVrCryoBed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalMissionSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetEllisInstance(AEllisDrone* NewDrone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEligableForAscensionAssignment(bool eligable);
    
    UFUNCTION(BlueprintCallable)
    void SetCooperInstance(ACooperDrone* NewBosco);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCursors();
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveGame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestReadyForJoinSessionMapTravel();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSpawnPosMarkerVisible;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACooperDrone> CooperDrone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AEllisDrone> EllisDrone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATutorialManager> TutorialManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameSettingsChanged;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerSearchActive;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnHideIdentifiableInformation;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnShowIdentifiableInformation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProceduralSetup> ProceduralLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIconGenerationManager> IconGenerationManagerClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIconGenerationManager* IconGenerationManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignManager* CampaignManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* RunManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* DesiredDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDSaveGame* SaveGame;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActiveInSpacerig;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartAtOrigin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartWithCameraShake;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InKBytesPerSecond;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OutKBytesPerSecond;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTemporaryBuff*> TemporaryBuffs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerVibrationSubmix;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerSpeakerSubmix;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGameMarkedAsModded;

    UFUNCTION(BlueprintCallable)
    void RemoveGameOwnerStatus(EGameOwnerStatus StatusToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEllis();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCooper();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTemporaryBuff(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PostInit();
    
    UFUNCTION(BlueprintCallable)
    void PairingUseNewProfile();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOnlineSessionChanged(const EOnlineSessionStatus OldStatus, const EOnlineSessionStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginStatusChanged(EFSDLoginState NewState, const FString& resultString);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadComplete(const FString& mapName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(const AGameStateBase* GameStateBase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGameStateChanged(const FOnGameStateDelegate& OnNewStateSet, bool CallInstantlyIfAlreadySet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkReadyForJoinSessionMapTravel();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenStartScreen();
    
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenNarrativeVideo();
    
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenInfoScreen();
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveGame(UFSDSaveGame* toLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextRamrodSpawnInVrCryoBed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericMutatorActive(FName InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeBeerRewardActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCampaignMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenStartScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenNarrativeVideo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenInfoScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRandomBeerBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingActivity() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void GraphicsUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetSeedString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPreviewedCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetLocalFSDPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIconGenerationManager* GetIconGenerationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalMissionSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameOwnerStatus(EGameOwnerStatus status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMutator* GetFirstMutator(TSubclassOf<UMutator> mutatorClass) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetActiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetActiveLocalPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingScreenType GetActiveLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void GameUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void Cheat_SetSpawnPosMarkersVisible(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText ChatState_UncommitedMessage();
    
    UFUNCTION(BlueprintCallable)
    void ChatState_StoreState(bool focus, const FText& uncommitedMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChatState_HadFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void ChatState_ClearFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CachePSOsOnCommand();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastLoaderRockAndStone(UPlayerCharacterID* PlayerCharacter, USoundBase* SaluteSound, const FDialogVoiceSettings& VoiceSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastActiveStageChanged(UStage* NewActiveStage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyGameUserSettings(UFSDGameUserSettings* Settings);
    
    UFUNCTION(BlueprintCallable)
    UHUDWarningWidget* AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
    
    UFUNCTION(BlueprintCallable)
    void AddToFriendSessions(const FString& friendSessionId, const FString& friendName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNotification_Ascension(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void AddGameOwnerStatus(EGameOwnerStatus StatusToAdd);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlayerStageEndLocation LocalPlayerEndLocationFallback;

};

