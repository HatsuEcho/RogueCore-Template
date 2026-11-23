#pragma once
#include "CoreMinimal.h"
#include "TeleporterColorPair.h"
#include "GDTeleporter.generated.h"

USTRUCT(BlueprintType)
struct FGDTeleporter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeleporterColorPair> ColorPairs;
    
    ROGUECORE_API FGDTeleporter();
};

