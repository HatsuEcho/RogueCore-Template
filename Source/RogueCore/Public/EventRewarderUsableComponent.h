#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "EventRewarderUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEventRewarderUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardUseText;

    UEventRewarderUsableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText CreateUseText(int32 blankSchematicCount) const;
    
};

