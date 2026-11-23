#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EnemyHealthLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UEnemyHealthLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnemyHealthLibrary();

};

