#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "StartRunAtStageSubsystem.generated.h"

class AFSDGameMode;
class UWorld;

UCLASS(Blueprintable)
class UStartRunAtStageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStartRunAtStageSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetXPScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetRerollTokensPerStage(int32 InTokens);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveExpeniteFallback(float InXP);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyExpeniteXP(float InXP);
    
    UFUNCTION(BlueprintCallable)
    void SetCatchUpLevel(TSoftObjectPtr<UWorld> inLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetCatchUpGameMode(TSoftClassPtr<AFSDGameMode> InGameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoVote(bool bInAutoVote);
    
};

