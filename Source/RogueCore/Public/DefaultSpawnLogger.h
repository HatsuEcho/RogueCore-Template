#pragma once
#include "CoreMinimal.h"
#include "SpawnLogger.h"
#include "DefaultSpawnLogger.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDefaultSpawnLogger : public USpawnLogger {
    GENERATED_BODY()
public:
    UDefaultSpawnLogger();

};

