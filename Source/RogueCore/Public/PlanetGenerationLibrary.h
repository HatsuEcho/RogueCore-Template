#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERunDepth.h"
#include "ERunHazard.h"
#include "ERunMode.h"
#include "GeneratedRunForBiome.h"
#include "GeneratedRunsForBiome.h"
#include "RunCreationParameters.h"
#include "StageSeedParameters.h"
#include "PlanetGenerationLibrary.generated.h"

class URun;


UCLASS(Blueprintable)
class ROGUECORE_API UPlanetGenerationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlanetGenerationLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedRunsForBiome GetRunsAtDepth(const FGeneratedRunsForBiome& GeneratedRuns, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRunCreationParameters CreateRunCreationParameters(const FGeneratedRunForBiome& GeneratedRun, const ERunMode RunMode, const ERunHazard RunHazard);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedRunForBiome CreateGeneratedRunFromStageSeed(const FStageSeedParameters& SeedParameters);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedRunForBiome CreateGeneratedRunFromRun(const URun* Run);

};

