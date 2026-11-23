#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CorespawnRift.generated.h"

class UDebrisPositioning;

UCLASS(Blueprintable)
class ROGUECORE_API ACorespawnRift : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DebrisPositioning;

    ACorespawnRift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRiftEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRiftDisabled();
    
    UFUNCTION(BlueprintCallable)
    void EnableRift();
    
    UFUNCTION(BlueprintCallable)
    void DisableRift();
    
};

