#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EllisDroneLibrary.generated.h"

class UEllisDroneAttachmentPointComponent;

UCLASS(Blueprintable)
class ROGUECORE_API UEllisDroneLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEllisDroneLibrary();

    UFUNCTION(BlueprintCallable)
    static void DetachEllisFromAttachmentPoint(UEllisDroneAttachmentPointComponent* AttachmentPoint);
    
    UFUNCTION(BlueprintCallable)
    static void AttachEllisToAttachmentPoint(UEllisDroneAttachmentPointComponent* AttachmentPoint);
    
};

