#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
#include "GrindableTrack.generated.h"

UINTERFACE(MinimalAPI)
class UGrindableTrack : public UInterface {
    GENERATED_BODY()
};

class IGrindableTrack : public IInterface {
    GENERATED_BODY()
public:
};

