#pragma once
#include "CoreMinimal.h"
#include "FormattedSingleUnlock.generated.h"

USTRUCT(BlueprintType)
struct FFormattedSingleUnlock {
    GENERATED_BODY()
public:
    ROGUECORE_API FFormattedSingleUnlock();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rarity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Attributes;

};

