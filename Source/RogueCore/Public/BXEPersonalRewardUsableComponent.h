#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "BXEPersonalRewardUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEPersonalRewardUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UBXEPersonalRewardUsableComponent(const FObjectInitializer& ObjectInitializer);

};

