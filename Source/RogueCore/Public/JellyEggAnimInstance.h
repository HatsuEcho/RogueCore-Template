#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "JellyEggAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UJellyEggAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Force;

    UJellyEggAnimInstance();

};

