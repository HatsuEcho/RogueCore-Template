#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RoomFeature.h"
#include "Templates/SubclassOf.h"
#include "SpawnTriggerFeature.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USpawnTriggerFeature : public URoomFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TriggerClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;

    USpawnTriggerFeature();

};

