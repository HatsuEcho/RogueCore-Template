#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "SalvageFuelPod.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASalvageFuelPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    ASalvageFuelPod(const FObjectInitializer& ObjectInitializer);

};

