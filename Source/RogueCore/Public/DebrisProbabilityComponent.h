#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "RandRange.h"
#include "DebrisProbabilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDebrisProbabilityComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ProbabilityRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsProbabilityShared;

    UDebrisProbabilityComponent(const FObjectInitializer& ObjectInitializer);

};

