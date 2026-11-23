#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "FSDPlayerCheatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFSDPlayerCheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFSDPlayerCheatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryMoveToLastStage();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryCompleteStageWithoutPlayersEscaping();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryCompleteStage();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryCompleteRun();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnPlayerInMedBay();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetHealth(float newHealthValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetArmor(float NewArmorValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RevivePlayer(const float HealthRatio);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveTemporaryHealth(const float RemoveHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void KillPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void KillAllPlayers();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddTemporaryHealth(const float AddedHealth);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddRerollToken(const int32 Amount);

};

