#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InfluencerSpawnComponent.generated.h"

class UCaveInfluencer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UInfluencerSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;

    UInfluencerSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

