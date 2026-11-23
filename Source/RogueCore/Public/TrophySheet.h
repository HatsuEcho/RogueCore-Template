#pragma once
#include "CoreMinimal.h"
#include "ERunBossType.h"
#include "SavableDataAsset.h"
#include "TrophyBiomeReward.h"
#include "TrophyMilestoneReward.h"
#include "TrophySheetBoss.h"
#include "TrophySheet.generated.h"

class UBiome;
class UEnemyID;
class UObject;
class UReward;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UTrophySheet : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunBossType, FTrophySheetBoss> BossTrophies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrophyBiomeReward> BiomeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrophyMilestoneReward> MilestoneRewards;
    
public:
    UTrophySheet();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsBossKilled(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsBossClaimed(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsBiomeComplete(const UObject* WorldContext, const UBiome* Biome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsBiomeClaimed(const UObject* WorldContext, const UBiome* Biome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool HasMilestoneRewardBeenGranted(const UObject* WorldContext, const int32 ClaimedTrophyCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool HasBiomeCompletionRewardBeenGranted(const UObject* WorldContext, const UBiome* Biome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalTrophyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSheetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTrophyMilestoneReward> GetMilestoneRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetKilledTrophyCount(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetClaimedTrophyCount(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetBossIcon(const UEnemyID* Boss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyID*> GetBosses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBiome*> GetBiomes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UReward*> GetBiomeCompletionRewards(const UBiome* Biome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyID* FindBossID(const ERunBossType BossType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindBiomeReward(const UBiome* Biome, FTrophyBiomeReward& OutReward) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool ClaimTrophy(UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool ClaimMilestoneReward(UObject* WorldContext, const int32 ClaimedTrophyCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool ClaimBiomeCompletionReward(UObject* WorldContext, const UBiome* Biome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool CanClaimMilestoneReward(const UObject* WorldContext, const int32 ClaimedTrophyCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool CanClaimBoss(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool CanClaimBiomeCompletionReward(const UObject* WorldContext, const UBiome* Biome) const;
    
};

