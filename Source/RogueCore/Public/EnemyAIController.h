#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "EnemyAIController.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AEnemyAIController : public AFSDAIController {
    GENERATED_BODY()
public:
    AEnemyAIController(const FObjectInitializer& ObjectInitializer);

};

