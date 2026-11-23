#include "BoxProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ABoxProjectile::ABoxProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = (UShapeComponent*)RootComponent;
}


