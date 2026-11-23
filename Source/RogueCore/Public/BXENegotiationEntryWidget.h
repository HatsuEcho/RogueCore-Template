#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BXEUnlockInstance.h"
#include "BXENegotiationEntryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UBXENegotiationEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockIndex;

    UBXENegotiationEntryWidget();

    UFUNCTION(BlueprintCallable)
    void SetUnlockInstance(const FBXEUnlockInstance& InUnlockInstance, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlockChanged();
    
};

