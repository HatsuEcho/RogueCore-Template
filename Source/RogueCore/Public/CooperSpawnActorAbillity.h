#pragma once
#include "CoreMinimal.h"
#include "CooperAbillity.h"
#include "Templates/SubclassOf.h"
#include "CooperSpawnActorAbillity.generated.h"

class AActor;

UCLASS(Blueprintable)
class ROGUECORE_API UCooperSpawnActorAbillity : public UCooperAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnedActorClass;
    
    UCooperSpawnActorAbillity();

};

