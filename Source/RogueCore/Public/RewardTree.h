#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
#include "RewardTreeLock.h"
#include "RewardTreeNode.h"
#include "SavableDataAsset.h"
#include "RewardTree.generated.h"

class UResourceData;


class UReward;
class URewardTreeType;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URewardTree : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URewardTreeType* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardTreeNode> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardTreeLock> Locks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> NodeIDToArrayIndex;
    
    URewardTree();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEffectiveCanvasSize() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearNodes();
    
    UFUNCTION(BlueprintCallable)
    void AddNode(UReward* Reward, int32 Cost, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    void AddLock(int32 RequiredNodesToBuy, int32 MeritPointCost, FVector2D position);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Token;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResourceData* GetBuyToken() const;

};

