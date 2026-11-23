#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "FSDMainHUDWidget.generated.h"

class AActor;
class AItem;
class UInventoryComponent;
class UItemGadgetWidget;
class UPanelWidget;


class UHUDRadarWidget;
class URadarPointComponent;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UFSDMainHUDWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
    UFSDMainHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushEvent(UWidget* eventWidget, bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopEvent(UWidget* eventWidget, bool Left);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadarPointAdded(URadarPointComponent* Point);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHUDRadarWidget* GetRadarWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRadarPoint(URadarPointComponent* Point);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* GadgetsBar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* GadgetInventory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UItemGadgetWidget*> GadgetWidgets;

    UFUNCTION(BlueprintCallable)
    void OnGadgetItemsLoaded();

    UFUNCTION(BlueprintCallable)
    void OnGadgetItemDestroyed(AActor* InItem);

    UFUNCTION(BlueprintCallable)
    void OnGadgetItemAdded(AItem* InItem);

};

