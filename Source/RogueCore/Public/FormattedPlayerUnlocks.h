#pragma once
#include "CoreMinimal.h"
#include "FormattedSingleUnlock.h"
#include "FormattedPlayerUnlocks.generated.h"

USTRUCT(BlueprintType)
struct FFormattedPlayerUnlocks {
    GENERATED_BODY()
public:
    ROGUECORE_API FFormattedPlayerUnlocks();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> None;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Weapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Equipments;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Grenades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> BioBoosters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> upgrades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Artifacts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> AbilityUpgrades;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Throwables;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormattedSingleUnlock> Attributes;

};

