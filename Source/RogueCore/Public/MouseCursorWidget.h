#pragma once
#include "CoreMinimal.h"
#include "EFSDInputSource.h"
#include "FSDUserWidget.h"
#include "MouseCursorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UMouseCursorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDInputSource TargetInput;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovering;

    UMouseCursorWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHover();
    
};

