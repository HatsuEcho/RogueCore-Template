#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "BXEUnlockInstance.h"
#include "UnlockIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UUnlockIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUnlockIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FBXEUnlockInstance& InUnlockInstance);
    
};

