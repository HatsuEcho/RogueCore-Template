#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "ItemGadgetWidget.generated.h"

class AItem;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UItemGadgetWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyShowWhileEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
public:
    UItemGadgetWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Init();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemEquipStateChanged();
    
};

