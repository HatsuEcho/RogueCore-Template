#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "BXEProgressionLevel.h"
#include "RarityWeightsSelection.h"
#include "BXEProgressionSettings.generated.h"

class UBXEInventoryList;
class UBXEUnlockCollection;
class UUnlockCollectionTag;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEProgressionSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEInventoryList* StartInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEProgressionLevel> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* SoloDroneCollection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnlockCollectionTag*> CollectionTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRarityWeightsSelection RarityWeights;

    UBXEProgressionSettings();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBiasTowardsPlayerPickedCategories;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CategoryBiasPerPlayerPickedUnlock;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CategoryBiasPerPlayerPickedUnlockMaxWeight;

};

