#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EGrabbingTentacleAnimEvent.h"
#include "AnimNotify_GrabbingTentacle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_GrabbingTentacle : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabbingTentacleAnimEvent Event;
    
public:
    UAnimNotify_GrabbingTentacle();

};

