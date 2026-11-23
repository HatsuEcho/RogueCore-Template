#pragma once
#include "CoreMinimal.h"
#include "SDFRandomDisableProperties.h"
#include "SDFSingleChildBase.h"
#include "SDFRandomDisable.generated.h"

UCLASS(Blueprintable)
class ROGUECOREENGINE_API USDFRandomDisable : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFRandomDisableProperties Properties;
    
    USDFRandomDisable();

};

