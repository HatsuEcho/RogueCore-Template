#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlacementDeviceActor.generated.h"

class UPawnStat;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API APlacementDeviceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* RadiusStat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLifetime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* LifetimeStat;

    APlacementDeviceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstigatorChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeviceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeviceLifetime() const;
    
};

