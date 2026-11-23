#pragma once
#include "CoreMinimal.h"
#include "DebrisLocationFinder.h"
#include "MeteorSpawnedDelegateDelegate.h"
#include "RandRange.h"
#include "PlagueMeteorSpawner.generated.h"

class APlagueMeteor;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API APlagueMeteorSpawner : public ADebrisLocationFinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeteorSpawnedDelegate OnSpawnedMeteor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange EscortSpawnFromMuleRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortSpawnFromImportantRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortMinimum2DSpawnDistFromPath;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortMinimumZSpawnDistFromPath;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropLocationHeightOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImportantLocationRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MeteorActorClassLoaded;

    APlagueMeteorSpawner(const FObjectInitializer& ObjectInitializer);

};

