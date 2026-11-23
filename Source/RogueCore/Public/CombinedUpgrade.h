#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "CombinedUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCombinedUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UItemUpgrade>> CombinedUpgrades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> LoadedUpgrades;

    UCombinedUpgrade();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemUpgrade*> GetUpgrades() const;
    
};

