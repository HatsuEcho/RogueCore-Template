#pragma once
#include "CoreMinimal.h"
#include "BossMutator.h"
#include "Templates/SubclassOf.h"
#include "BossRiftActorMutator.generated.h"

class ABossRiftActor;

UCLASS(Blueprintable, EditInlineNew)
class UBossRiftActorMutator : public UBossMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABossRiftActor> ActorClass;
    
    UBossRiftActorMutator();

};

