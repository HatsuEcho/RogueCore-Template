#pragma once
#include "CoreMinimal.h"
#include "VanityItemRewarder.h"
#include "ArmorMaterialRewarder.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UArmorMaterialRewarder : public UVanityItemRewarder {
    GENERATED_BODY()
public:
    UArmorMaterialRewarder(const FObjectInitializer& ObjectInitializer);

};

