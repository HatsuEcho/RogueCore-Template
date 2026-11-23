#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeamElevatorPlatform.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ATeamElevatorPlatform : public AActor {
    GENERATED_BODY()
public:
    ATeamElevatorPlatform(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsClosed(bool Closed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterCarvers();
    
};

