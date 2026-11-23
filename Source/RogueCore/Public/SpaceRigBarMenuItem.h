#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "SpaceRigBarMenuItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API USpaceRigBarMenuItem : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* Drink;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpecialEditionSelected;

    USpaceRigBarMenuItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UDrinkableDataAsset* GetSelectedDrinkableType();
    
};

