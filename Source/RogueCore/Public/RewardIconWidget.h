#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "RewardIconWidget.generated.h"

class UReward;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API URewardIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URewardIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(UReward* InReward);
    
};

