#pragma once
#include "CoreMinimal.h"
#include "DebrisLocationFinder.h"
#include "DropRockCrackerPodsSpawner.generated.h"

class AActor;
class APlagueMeteor;

UCLASS(Blueprintable)
class ROGUECORE_API ADropRockCrackerPodsSpawner : public ADebrisLocationFinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlagueMeteor* meteor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RockCrackerIndicationClass;

    ADropRockCrackerPodsSpawner(const FObjectInitializer& ObjectInitializer);

};

