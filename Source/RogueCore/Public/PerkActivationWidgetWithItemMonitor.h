#pragma once
#include "CoreMinimal.h"
#include "PerkActivationWidget.h"
#include "Templates/SubclassOf.h"
#include "PerkActivationWidgetWithItemMonitor.generated.h"

class AItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UPerkActivationWidgetWithItemMonitor : public UPerkActivationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* ActiveItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemToMonitor;

public:
    UPerkActivationWidgetWithItemMonitor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopMonitoring();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMonitoring();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetMonitoredItem() const;
    
};

