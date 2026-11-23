#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockBase.h"
#include "BXEUnlockItem.generated.h"

class UItemID;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockItem : public UBXEUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;

    UBXEUnlockItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemFunctionalDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGrenadeItem() const;
    
};

