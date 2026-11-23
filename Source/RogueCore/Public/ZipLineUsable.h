#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "ZipLineUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UZipLineUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UZipLineUsable(const FObjectInitializer& ObjectInitializer);

};

