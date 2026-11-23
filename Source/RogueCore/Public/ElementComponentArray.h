#pragma once
#include "CoreMinimal.h"
#include "ElementComponentArray.generated.h"

class UElementComponent;

USTRUCT(BlueprintType)
struct FElementComponentArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UElementComponent*> Elements;
    
    ROGUECORE_API FElementComponentArray();
};

