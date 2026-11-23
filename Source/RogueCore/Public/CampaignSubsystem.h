#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "CampaignRunMarkerOpenDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "ERunDepth.h"
#include "GeneratedRunForBiome.h"
#include "Templates/SubclassOf.h"
#include "CampaignSubsystem.generated.h"

class UCampaign;
class UCampaignMission;
class UIntelChallenge;
class UIntelObjective;
class UObject;
class URun;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable)
class UCampaignSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> MainCampaignClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> WeeklyCampaignClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> SideCampaignClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> EventCampaignClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaign* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WeeklyBackendDataValid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCampaignCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCampaignChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeeklyBackendSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime WeeklyBackendExpirationTime;
    
public:
    UCampaignSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool WasRunPriorityTarget(const UObject* WorldContext, const URun* Run);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateCampaignRunMarker(const UObject* WorldContext, UWidget* Marker, const FGeneratedRunForBiome& GeneratedRun, UWidget* Highlight, UWidgetAnimation* HighlightAnimation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateCampaignPlayedRunMarker(const UObject* WorldContext, UWidget* Marker, const URun* Run);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateCampaignDepthMarker(const UObject* WorldContext, UWidget* Marker, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable)
    void StartActiveCampaign(const TSubclassOf<UCampaign> NewCampaignClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampaignRunOpenEvent(UUserWidget* Host, const FCampaignRunMarkerOpenDelegate& OnOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshCampaignRunMarkers();
    
    UFUNCTION(BlueprintCallable)
    void OnIntelObjectiveClaimed(UIntelObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void OnIntelChallengeClaimed(TSubclassOf<UIntelChallenge> Challenge);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LookAtCampaignRun(const UObject* WorldContext, const int32 MapSeed, ERunDepth& RunDepth, const bool bOpenRun, const bool bLookAtLockedRun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsCampaignRunLocked(const UObject* WorldContext, FText& ClearanceLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsCampaignRunDepth(const UObject* WorldContext, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignRun(const FGeneratedRunForBiome& GeneratedRun) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaignMission* GetActiveMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaign* GetActiveCampaign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindCampaignRun(const int32 MapSeed, FGeneratedRunForBiome& CampaignRun) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteActiveCampaignMission();
    
    UFUNCTION(BlueprintCallable)
    void CompleteActiveCampaign();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ClearCampaignRunMarker(const UObject* WorldContext, UWidget* Marker);
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveCampaign();
    
};

