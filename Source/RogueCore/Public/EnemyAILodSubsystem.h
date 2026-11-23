#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "EnemyAILodSubsystem.generated.h"

UCLASS(Blueprintable)
class UEnemyAILodSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UEnemyAILodSubsystem();

};

