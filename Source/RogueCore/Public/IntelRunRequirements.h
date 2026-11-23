#pragma once
#include "CoreMinimal.h"
#include "ERunDifficulty.h"
#include "IntelRunRequirements.generated.h"

class UPlanetZone;
class UStageComplexity;
class UStageDuration;

USTRUCT(BlueprintType)
struct FIntelRunRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDifficulty RunDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* Duration;
    
    ROGUECORE_API FIntelRunRequirements();
};

