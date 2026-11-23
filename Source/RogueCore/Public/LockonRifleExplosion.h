#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockonRifleExplosion.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ALockonRifleExplosion : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    ALockonRifleExplosion(const FObjectInitializer& ObjectInitializer);

};

