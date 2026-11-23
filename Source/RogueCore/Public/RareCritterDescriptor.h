#pragma once
#include "CoreMinimal.h"
#include "BaseCritterDescriptor.h"
#include "RareCritterDescriptor.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URareCritterDescriptor : public UBaseCritterDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;

    URareCritterDescriptor();

};

