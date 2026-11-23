#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DamageTag.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDamageTag : public UDataAsset {
    GENERATED_BODY()
public:
    UDamageTag();

};

