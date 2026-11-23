#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "EPawnStatType.h"
#include "EItemUpgradeNumberTransformType.h"
#include "PawnStat.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UPawnStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType PawnStatType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType ValueModificationType;

    UPawnStat();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType DisplayTransform;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartingValue() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;

};

