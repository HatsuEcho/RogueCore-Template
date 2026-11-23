#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "LaserPointerTarget.h"
#include "DroneControllerBase.generated.h"

class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Blueprintable)
class ROGUECORE_API ADroneControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APlayerCharacter>> ControllingPlayers;

    ADroneControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnShout(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(AFSDPlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoin(APlayerCharacter* Player);
    
};

