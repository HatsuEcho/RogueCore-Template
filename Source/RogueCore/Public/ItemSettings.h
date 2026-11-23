#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ItemSettings.generated.h"

class UItemData;
class UItemID;
class UItemRefundList;

UCLASS(Blueprintable)
class ROGUECORE_API UItemSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemRefundList*> ItemRefunds;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UItemID*, UItemData*> ItemData;

    UItemSettings();

public:
    UFUNCTION(BlueprintCallable)
    void TryLoadInEditor();

};

