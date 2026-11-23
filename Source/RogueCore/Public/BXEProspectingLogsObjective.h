#pragma once
#include "CoreMinimal.h"
#include "BXEBlueprintControlledObjective.h"
#include "BXEProspectingLogsObjective.generated.h"

class ABXEProspectingLogsRewardSpawner;
class ABXEProspectingRewardActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEProspectingLogsObjective : public UBXEBlueprintControlledObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABXEProspectingRewardActor* SpawnedReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABXEProspectingLogsRewardSpawner* RewardSpawner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABXEProspectingLogsRewardSpawner> RewardSpawnerClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumToSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasPickedUp, meta=(AllowPrivateAccess=true))
    int32 HasPickedUp;

    UBXEProspectingLogsObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRewardSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasPickedUp();
    
};

