#include "ASimpleFlyingDrone.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

AASimpleFlyingDrone::AASimpleFlyingDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float AASimpleFlyingDrone::QueueMontage(UAnimMontage* Montage) {
    return 0.0f;
}

USkeletalMeshComponent* AASimpleFlyingDrone::GetSkeletalMesh() const {
    return NULL;
}

UAnimInstance* AASimpleFlyingDrone::GetAnimInstance() const {
    return NULL;
}


