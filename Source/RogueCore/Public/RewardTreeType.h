#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "RewardTreeType.generated.h"

class URewardTreeNodeWidget;


class UReward;
class URewardTreeNodeConnectionWidget;

UCLASS(Blueprintable)
class ROGUECORE_API URewardTreeType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URewardTreeNodeConnectionWidget> ConnectionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* DefaultReward;
    
    URewardTreeType();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URewardTreeNodeWidget> NodeWidget;

};

