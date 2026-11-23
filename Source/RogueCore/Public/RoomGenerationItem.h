#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "RoomGenerationItem.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ARoomGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    ARoomGenerationItem(const FObjectInitializer& ObjectInitializer);

};

