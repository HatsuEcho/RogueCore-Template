#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "DorrettaHead.generated.h"

class UCarriableComponent;
class UCarriableInstantUsable;

UCLASS(Blueprintable)
class ROGUECORE_API ADorrettaHead : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* usable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComponent;

    ADorrettaHead(const FObjectInitializer& ObjectInitializer);

};

