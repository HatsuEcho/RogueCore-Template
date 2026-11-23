#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebrisDataActor.generated.h"

class UDebrisActorComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ADebrisDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisActorComponent*> InfluencerNetworkMap;
    
    ADebrisDataActor(const FObjectInitializer& ObjectInitializer);

};

