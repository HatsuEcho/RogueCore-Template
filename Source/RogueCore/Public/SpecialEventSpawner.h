#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpecialEventSpawner.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API USpecialEventSpawner : public UObject {
    GENERATED_BODY()
public:
    USpecialEventSpawner();

};

