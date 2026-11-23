#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EOnlineSessionStatus -FallbackName=EOnlineSessionStatus
#include "EOnlineSessionStatus.h"
#include "EMigrationPrompt.h"
#include "ERunMigrationDestination.h"
#include "ERunMigrationReason.h"
#include "ERunMigrationState.h"
#include "MigratedRunLookupDelegateDelegate.h"
#include "RunMigrationStateChangedDelegateDelegate.h"
#include "RunSnapshot.h"
#include "RunSnapshotPlayer.h"
#include "ServerListLobby.h"
#include "RunContinuationSubsystem.generated.h"

class ACooperDrone;
class UFSDFindLobbyForRunProxy;
class UFSDSaveGame;

UCLASS(Blueprintable)
class URunContinuationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunMigrationStateChangedDelegate OnMigrationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMigratedRunLookupDelegate OnMigratedRunLookupComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunSnapshot Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FRunSnapshotPlayer> LiveOtherPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl LiveLocalPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> LiveHostIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> LiveSuccessionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ContinuedRunId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRestorePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRestoringSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRunRestorePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStageEndPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCooperCatchUpDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSnapshotFromDisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERunMigrationState MigrationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDFindLobbyForRunProxy* ActiveLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastFoundSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LostSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHostingMigratedRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERunMigrationReason MigrationReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERunMigrationDestination MigrationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRosterLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMigrationHostTravelPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHostAttemptDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMigrationOptOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLookupRequestedByUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString RejoinSessionId;
    
public:
    URunContinuationSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasSavedAndQuit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRunHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLevelEndHeldForAbortVote() const;
    
    UFUNCTION(BlueprintCallable)
    bool SaveAndQuit();
    
    UFUNCTION(BlueprintCallable)
    void RequestMigratedRunLookup();
    
    UFUNCTION(BlueprintCallable)
    bool RehostRun();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSessionStatusChanged(EOnlineSessionStatus OldStatus, EOnlineSessionStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameLoaded(UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnLookupSuccess(const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable)
    void OnLookupNotFound();
    
    UFUNCTION(BlueprintCallable)
    void OnLookupFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnCooperChanged(ACooperDrone* Cooper);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinMigratedRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMigrationInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLostSession(const FString& SessionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinuedRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbortVoter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbortVotePending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasContinuation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunMigrationState GetMigrationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMigrationSecondsRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunMigrationReason GetMigrationReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMigrationPrompt GetMigrationPrompt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMigrationPhaseSecondsRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunMigrationDestination GetMigrationDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContinuationStageIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DeclineHosting();
    
    UFUNCTION(BlueprintCallable)
    bool ContinueSolo();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void CastAbortVote(bool bRestartStage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSaveAndQuit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRestartOnAbort() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRejoinTeam() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelMigration();
    
};

