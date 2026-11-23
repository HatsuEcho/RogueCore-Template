#pragma once
#include "CoreMinimal.h"
#include "EllisDroneHologram.generated.h"

class USingleUsableComponent;
class UUserWidget;

USTRUCT(BlueprintType)
struct FEllisDroneHologram {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USingleUsableComponent> usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> Widget;
    
    ROGUECORE_API FEllisDroneHologram();
};

