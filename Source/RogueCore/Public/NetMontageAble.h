#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "NetMontageAble.generated.h"

class UAnimInstance;
class UAnimMontage;
class USkeletalMeshComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ROGUECORE_API UNetMontageAble : public UInterface {
    GENERATED_BODY()
};

class INetMontageAble : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float QueueMontage(UAnimMontage* Montage) = 0;

    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMesh() const = 0;

    UFUNCTION(BlueprintCallable)
    virtual UAnimInstance* GetAnimInstance() const = 0;

};

