#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERunDepth.h"
#include "IntelProgression.h"
#include "GeneratedRunForBiome.h"
#include "IntelLibrary.generated.h"

class UPlanetZone;


class UBiome;
class UDialogDataAsset;
class UIntelObjective;
class UObject;
class UStageComplexity;
class UStageDuration;

UCLASS(Blueprintable)
class ROGUECORE_API UIntelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIntelLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStageDuration* GetUnlockedDuration(const UIntelObjective* IntelObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERunDepth GetUnlockedDepth(const UIntelObjective* IntelObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStageComplexity* GetUnlockedComplexity(const UIntelObjective* IntelObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UBiome*> GetUnlockedBiomes(const UIntelObjective* IntelObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UDialogDataAsset* GetMissionControlShoutFromIntel(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UIntelObjective* FindIntelObjectiveThatUnlocksDepth(const UObject* WorldContext, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeUnlockedIntelPoints(const FIntelProgression& IntelProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UIntelObjective*> ComputeUnlockableIntelObjectives(const UObject* WorldContext, const FIntelProgression& IntelProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UBiome*> ComputeUnlockableBiomeObjectives(const UObject* WorldContext, const FIntelProgression& IntelProgress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UIntelObjective* FindIntelObjectiveThatUnlocksRun(const UObject* WorldContext, const FGeneratedRunForBiome& GeneratedRun);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UIntelObjective* FindIntelObjectiveThatUnlocksPlanetZone(const UObject* WorldContext, const UPlanetZone* PlanetZone);

};

