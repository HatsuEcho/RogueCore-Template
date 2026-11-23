#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ECampaignMutators.h"
#include "RequiredMissionItem.h"
#include "ERunDifficulty.h"
#include "ObjectiveMissionIcon.h"
#include "CampaignMission.generated.h"

class UIntelObjective;
class UPrimaryMutator;
class URunTemplate;
class UStageComplexity;
class UStageDuration;
class UStageTemplateOverride;


class UDialogDataAsset;
class UPlanetZone;
class UReward;
class URiskVector;
class UStageTemplate;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCampaignMission : public UDataAsset {
    GENERATED_BODY()
protected:
    
    
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignMutators MutatorOverride;
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* PlanetZone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequiredMissionItem mission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionCompleteShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideMutators;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URiskVector*> AllowedRiskVectors;

    UCampaignMission();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageTemplate* GetMissionTemplate() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunTemplate* RunTemplate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDifficulty RunDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignMutators Mutators;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageComplexity* Complexity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* Duration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplateOverride* Boss;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* Mutator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIntelObjective* MigrationClearanceLevel;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetMissionIcon() const;

};

