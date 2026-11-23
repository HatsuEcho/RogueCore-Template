#pragma once
#include "CoreMinimal.h"
#include "FormationData.h"
#include "GroundFormationData.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UGroundFormationData : public UFormationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormationSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FormationSpread;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpread;

    UGroundFormationData();

};

