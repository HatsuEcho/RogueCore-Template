#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomAmmoCountWidget.generated.h"

class AItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UCustomAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AItem> Item;

    UCustomAmmoCountWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSet();
    
};

