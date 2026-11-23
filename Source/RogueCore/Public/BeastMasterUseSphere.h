#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "BeastMasterUseSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBeastMasterUseSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UBeastMasterUseSphere(const FObjectInitializer& ObjectInitializer);

};

