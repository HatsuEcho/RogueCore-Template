#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "UBXEUnlockWidget.generated.h"

class UBXEUnlockBase;
class UUBXEUnlockWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UUBXEUnlockWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnlockDelegate, UUBXEUnlockWidget*, InWidget, UBXEUnlockBase*, InUnlock);

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockDelegate OnUnlockChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;

    UUBXEUnlockWidget();

    UFUNCTION(BlueprintCallable)
    void SetUnlock(UBXEUnlockBase* InUnlock);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnlockChanged();
    
};

