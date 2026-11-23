#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RoomCarverComponent.generated.h"

class URoomGenerator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API URoomCarverComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGenerator* RoomGenerator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandomRotation;

    URoomCarverComponent(const FObjectInitializer& ObjectInitializer);

};

