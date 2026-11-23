#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameProgressWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMinigameProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameProgressWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float Progress);
    
};

