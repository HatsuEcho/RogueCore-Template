#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CheatConsole.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ACheatConsole : public AActor {
    GENERATED_BODY()
public:
    ACheatConsole(const FObjectInitializer& ObjectInitializer);

};

