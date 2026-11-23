#include "GooProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

UGooProjectileLauncherComponent::UGooProjectileLauncherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StickyProjectileClass = NULL;
    this->SlipperyProjectileClass = NULL;
    this->BouncyProjectileClass = NULL;
}

TSubclassOf<AProjectileBase> UGooProjectileLauncherComponent::GetProjectileClassForGooType(EGooType InGooType) const {
    return NULL;
}


