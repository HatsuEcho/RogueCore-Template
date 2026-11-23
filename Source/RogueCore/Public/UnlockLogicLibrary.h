#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EUnlockLogicRange.h"
#include "UnlockLogicLibrary.generated.h"

class AActor;
class AFSDPawn;
class APlayerCharacter;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UUnlockLogicLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnlockLogicLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRangeDistance(const EUnlockLogicRange Range, const APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProximityDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerModifiedDistance(const float Distance, const APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultRangeDistance(const EUnlockLogicRange Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<APlayerCharacter*> FindPlayersInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<APlayerCharacter*>& PlayersToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPawn*> FindDamageableEnemiesInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<AActor*>& ActorsToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPawn*> FindDamageableEnemiesInCone(const UObject* WorldContext, const FVector ConeOrigin, const FVector ConeDirection, const float ConeHalfAngle, const float ConeLength, const float ConeHeight, const TArray<AActor*>& ActorsToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<APlayerCharacter*> FindAlivePlayersInRange(const UObject* WorldContext, const FVector Center, float Radius, const TArray<APlayerCharacter*>& PlayersToIgnore);
    
};

