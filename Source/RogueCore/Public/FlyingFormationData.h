#pragma once
#include "CoreMinimal.h"
#include "FormationData.h"
#include "FlyingFormationData.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFlyingFormationData : public UFormationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormationSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FormationSpread;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpread;

    UFlyingFormationData();

};

