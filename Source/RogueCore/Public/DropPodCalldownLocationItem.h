#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GenerationItem.h"
#include "Templates/SubclassOf.h"
#include "ECalldownLocationType.h"
#include "DropPodCalldownLocationItem.generated.h"

class AActor;

UCLASS(Blueprintable)
class ROGUECORE_API ADropPodCalldownLocationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CalldownClass;

    ADropPodCalldownLocationItem(const FObjectInitializer& ObjectInitializer);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalldownLocationType CalldownLocationType;

};

