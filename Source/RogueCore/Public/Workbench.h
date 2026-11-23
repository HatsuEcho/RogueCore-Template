#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Workbench.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AWorkbench : public AActor {
    GENERATED_BODY()
public:
    AWorkbench(const FObjectInitializer& ObjectInitializer);

};

