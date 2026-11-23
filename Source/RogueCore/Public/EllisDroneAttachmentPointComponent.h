#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EllisDroneAttachmentPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEllisDroneAttachmentPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNegotiationAllowed;

    UEllisDroneAttachmentPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsNegotiationAllowed(const bool IsAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNegotiationAllowed() const;
    
};

