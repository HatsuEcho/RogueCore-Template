#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "BossRiftInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class UBossRiftInterface : public UInterface {
    GENERATED_BODY()
};

class IBossRiftInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetPendingHeartSpawnLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<USceneComponent*> GetEnemySpawnPoints() const;
    
};

