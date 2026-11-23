#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DelegateEventDelegate.h"
#include "ProgressChangedSigDelegate.h"
#include "StageCompleteSigDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameEvent.generated.h"

class AEventStarterButton;
class AProceduralSetup;
class ARessuplyPod;
class UChildActorComponent;
class UDebrisPositioning;
class UDialogDataAsset;

UCLASS(Blueprintable)
class ROGUECORE_API AGameEvent : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EventParticipants, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EventParticipants;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent EventTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent EventFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCompleteSig StageCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig ProgressChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig OnProgressBarChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressChangedSig TimeProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCompleteSig ObjectivesPerStageChanged;
    
public:
    AGameEvent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TrySetupGameEvent();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEventStarterButton*> StarterObjects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameEventSetup;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnalyticsName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* StartEventObject;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventTriggeredShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventFinishedShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* EventFailedShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventTriggeredShoutDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventFinishedShoutDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StageProgress, meta=(AllowPrivateAccess=true))
    float StageProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayUITime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesPerStage, meta=(AllowPrivateAccess=true))
    int32 objectivesPerStage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsEventStartersActive, meta=(AllowPrivateAccess=true))
    bool EventStartersActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EventStarted, meta=(AllowPrivateAccess=true))
    bool EventStarted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FailedEvent, meta=(AllowPrivateAccess=true))
    bool FailedEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRemainingTimeOnHUD;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowScoreStatusOnHUD;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowProgressBar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressBarPct;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipEventStarters;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartShout();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StageObjectiveCompleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ARessuplyPod* SpawnEventPod(TSubclassOf<ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnEventActor(TSubclassOf<AActor> eventActorClass, const FTransform& aSpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStageProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBarPct(float InPct);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetObjectivesPerStage(int32 NewObjectivesPerStage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveParticipant(AActor* participant);
    
    UFUNCTION(BlueprintCallable)
    void OnStarterObjectUsed(AEventStarterButton* eventStarter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageComplete(int32 Stage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StageProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectivesPerStage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEventStartersActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FailedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EventStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EventParticipants();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFinished(bool eventSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventBooted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowTimeOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowScoreOnHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowProgressBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectivesPerStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEventFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelayUITime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndShout();
    
public:
    UFUNCTION(BlueprintCallable)
    FTransform DebreePositionPoint(AProceduralSetup* Setup, const FVector& fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float maxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void BootUpEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStageProgress(float progressToAdd);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override { return GameplayTags.HasTag(TagToCheck); }

    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTags.HasAny(TagContainer); }

    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTags.HasAll(TagContainer); }

        virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTags; }

protected:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer BP_GetOwnedGameplayTags() const { return GameplayTags; }

};

