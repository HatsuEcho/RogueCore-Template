#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EllisDroneInteractionPoint.h"
#include "CompanionDroneInteractable.generated.h"

class UEllisDroneInteractionComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UCompanionDroneInteractable : public UInterface {
    GENERATED_BODY()
};

class ICompanionDroneInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionPoints(TArray<FEllisDroneInteractionPoint>& interactionPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionLocation(TArray<FVector>& interactionPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UEllisDroneInteractionComponent* GetInteractionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetConnectorPoints(TArray<FTransform>& connectorPoints);
    
};

