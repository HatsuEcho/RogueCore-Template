#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CarveChargeTelegraph.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTTask_CarveChargeTelegraph : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TelegraphAnimIndex;

    UBTTask_CarveChargeTelegraph();

};

