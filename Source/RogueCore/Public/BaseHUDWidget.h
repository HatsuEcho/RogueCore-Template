#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBaseHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseHUDWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
};

