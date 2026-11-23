#include "TeleporterPortalProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"

ATeleporterPortalProjectile::ATeleporterPortalProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->CollisionSphere = (USphereComponent*)RootComponent;
}


