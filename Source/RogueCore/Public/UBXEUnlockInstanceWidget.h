#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BXEUnlockInstance.h"
#include "UBXEUnlockInstanceWidget.generated.h"

class UUBXEUnlockInstanceWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UUBXEUnlockInstanceWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnlockInstanceDelegate, UUBXEUnlockInstanceWidget*, InWidget, FBXEUnlockInstance, InUnlock);

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockInstanceDelegate OnUnlockInstanceChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockInstance;

    UUBXEUnlockInstanceWidget();

    UFUNCTION(BlueprintCallable)
    void SetUnlockInstance(FBXEUnlockInstance InUnlock);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnlockInstanceChanged();
    
};

