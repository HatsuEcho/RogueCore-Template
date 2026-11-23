#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PathfinderDebugProbe.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APathfinderDebugProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Dest;
    
    APathfinderDebugProbe(const FObjectInitializer& ObjectInitializer);

};

