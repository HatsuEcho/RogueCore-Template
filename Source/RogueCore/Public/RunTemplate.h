#pragma once
#include "CoreMinimal.h"
#include "ERunBossType.h"
#include "ERunDepth.h"
#include "ERunMode.h"
#include "ERunType.h"
#include "ExpeniteObjective.h"
#include "ObjectiveMissionIcon.h"
#include "PrimaryObjective.h"
#include "ResourceSpawner.h"
#include "SavableDataAsset.h"
#include "SecondaryObjective.h"
#include "Templates/SubclassOf.h"
#include "ERunDifficulty.h"
#include "RunTemplate.generated.h"

class ADebrisDataActor;
class AProceduralSetup;
class UBiome;
class UDepthDifficultyAsset;
class UMissionDNA;
class UObjective;
class UPrimaryMutator;
class URunStageLayout;
class UStageTemplate;
class UStageTemplateOverride;

UCLASS(Blueprintable)
class ROGUECORE_API URunTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlockedFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon DefaultIconWithBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplate* DefaultStageTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProceduralSetup> DefaultPLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMissionDNA>> DefaultDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceSpawner> DefaultResourceDistribution;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunMode, float> TimeMultiplierForRunMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunMode, float> HazardBonusForRunMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StagesLeftWhenBossBiomeStarts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunBossType, UBiome*> BossBiomes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunBossType, TSoftClassPtr<ADebrisDataActor>> BossDebrisActors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth BannedObjectivesDepth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> BannedObjectivesDNA;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* BannedObjectivesMutator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> BannedObjectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDepthDifficultyAsset* DepthDifficulty1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDepthDifficultyAsset* DepthDifficulty2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDepthDifficultyAsset* DepthDifficulty3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDepthDifficultyAsset* DepthDifficulty4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth4;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth3;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth4;

    URunTemplate();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSecondaryObjective> GetSecondaryObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunType GetRunType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryObjective> GetPrimaryObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelTimeScalingForRunMode(const ERunMode RunMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardBonusForRunMode(const ERunMode RunMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardBonusForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FExpeniteObjective> GetExpeniteObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStageTemplateOverride*> GetAvailableBossesForDepth(const ERunDepth Depth) const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunDifficulty, float> HazardBonusForRunDifficulty;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardBonusForRunDifficulty(const ERunDifficulty RunDifficulty) const;

};

