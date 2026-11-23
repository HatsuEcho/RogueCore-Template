#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "GameFramework/GameMode.h"
#include "EAboutToPlayReason.h"
#include "EAllDwarvesDownAction.h"
#include "ECriticalItemPass.h"
#include "EPauseReason.h"
#include "NamedCountdownFloat.h"
#include "Templates/SubclassOf.h"
#include "ECalldownLocationType.h"
#include "FSDGameMode.generated.h"

class UReaperWormManager;


class AActor;
class ACooperDrone;
class AFSDGameMode;
class AFSDPlayerController;
class AMolly;
class APlayerCharacter;
class APlayerController;
class ATeamTransport;
class UCritterManager;
class UDifficultyController;
class UDifficultyManager;
class UEncounterManager;
class UEnemyDescriptor;
class UEnemySpawnManager;
class UEnemyWaveManager;
class UFormationsManagerComponent;
class UItemLogicUnlockManager;
class UKeepInsideWorld;
class UObjectivesManager;
class UPheromoneSpawnerComponent;
class UStageManager;
class UStaticSpawnPointManager;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API AFSDGameMode : public AGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLoggedIn, AFSDPlayerController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMatchStartedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCallDonkey, FVector, position, APlayerCharacter*, requester);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllReadySignature);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MissionWasAborted;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNamedCountdownFloat> NamedCountdowns;

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchStartedSignature OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoggedIn OnPlayerLoggedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallDonkey OnDonkeyCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GenerationStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPheromoneSpawnerComponent* PheromoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* EnemySpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectivesManager* ObjectivesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeepInsideWorld* KeepInsideWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEncounterManager* EncounterManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCritterManager* CritterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticSpawnPointManager* StaticSpawnPointManager;
    
public:
    AFSDGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMissionCriticalItems(const ECriticalItemPass& pass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SignalLevelEndToAll();
    
    UFUNCTION(BlueprintCallable)
    void SignalAboutToPlay(const EAboutToPlayReason Reason, const float SecondsUntilPlay, APlayerController* Player);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFormationsManagerComponent* FormationsManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMolly> MuleClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATeamTransport> EntranceElevatorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATeamTransport> ExitElevatorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATeamTransport> ExitElevatorFallbackClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATeamTransport> FirstLevelEntranceDropPodClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATeamTransport> LastLevelEscapeDropPodClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDropPodLandingSkipSpots;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACooperDrone> DroneClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidget> CheatUI;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PreventAllLatejoin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PreventLateJoinOnMissionStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnHeightOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireGracePeriod;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> ForcedEnemyPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> ForcedStationaryPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseNormalEncounters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStationaryEncounter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSpecialEncounters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyWaveManager* CachedWaveManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemLogicUnlockManager* ItemLogicUnlockManager_Instance;

    UFUNCTION(BlueprintCallable)
    void SetForcedStationaryPool(const TArray<UEnemyDescriptor*>& pool);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedEnemyPool(const TArray<UEnemyDescriptor*>& pool);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPlayerStageEndLocations();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestExitDroppod(float Distance, float AboveDistanceBias, AActor* OptionalFrom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveEndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveAllDwarvesDown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_GotoNextLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginEndLevelAsSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_DestroyNetworkedActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelGenerationComplete(int32 pass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerDestroyed(AActor* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAllDwarvesDownAction NotifyAllDwarvesDown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadSpaceRig();
    
    UFUNCTION(BlueprintCallable)
    void LoadMission(const FString& mapName, TSoftClassPtr<AFSDGameMode> optionalGameMode, bool ClearPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HostAbortMission();

    UFUNCTION(BlueprintCallable)
    void AbortMission();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerBanning(AFSDPlayerController* FSDPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void GotoNextLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyWaveManager* GetWaveManager() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<AFSDPlayerController*> GetPlayerControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMolly> GetMuleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ATeamTransport> GetLastLevelEscapeDropPodClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ATeamTransport> GetFirstLevelEntranceDropPodClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ATeamTransport> GetExitElevatorFallbackClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ATeamTransport> GetExitElevatorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ATeamTransport> GetEntranceElevatorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEncounterManager* GetEncounterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDronePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ACooperDrone> GetDroneClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyController* GetDifficultyController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void FSDSetPause(APlayerController* PC, EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    bool FSDKickPlayer(APlayerController* KickedPlayer, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    void FSDClearPause(EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    void EndLevelAsSuccess(const TArray<APlayerCharacter*>& PlayersThatEscaped);
    
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DonkeyButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNonLocalPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_ShowPlayerSpheres();
    
    UFUNCTION(BlueprintCallable)
    void CleanupActorsOfTypes(TArray<TSubclassOf<AActor>> Types, TArray<TSubclassOf<AActor>> dontRemoveTypes);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ArePlayerCharactersReadyToStart() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddControllerForGracePeriod(APlayerCharacter* aPlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void AboutMission();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReaperWormManager* ReaperWormManager;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECalldownLocationType, TSubclassOf<AActor>> CalldownLocationActorClasses;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnPrePlacementItems();

    UFUNCTION(BlueprintCallable)
    void FailMission();

};

