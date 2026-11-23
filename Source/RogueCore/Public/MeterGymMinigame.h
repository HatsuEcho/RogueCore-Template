#pragma once
#include "CoreMinimal.h"
#include "BaseGymMinigame.h"
#include "MeterGymMinigame.generated.h"

class UMinigamePlayableProgressbarWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UMeterGymMinigame : public UBaseGymMinigame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMinigamePlayableProgressbarWidget*> PlayableProgressbarWidgets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraSafeZoneHitArea;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitAnimationTime;

    UMeterGymMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void PlayerInputWidget(bool Hit);
    
    UFUNCTION(BlueprintCallable)
    void IFrameChange(bool On);
    
};

