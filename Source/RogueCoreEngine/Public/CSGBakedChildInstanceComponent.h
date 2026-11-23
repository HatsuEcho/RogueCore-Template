#pragma once
#include "CoreMinimal.h"
#include "CSGBakedChildInstanceProperties.h"
#include "CSGBaseComponent.h"
#include "CSGBakedChildInstanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECOREENGINE_API UCSGBakedChildInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGBakedChildInstanceProperties Properties;
    
    UCSGBakedChildInstanceComponent(const FObjectInitializer& ObjectInitializer);

};

