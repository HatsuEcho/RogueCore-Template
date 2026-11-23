#include "DropPodCalldownLocationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"

ADropPodCalldownLocationItem::ADropPodCalldownLocationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("collider"));
    this->CalldownClass = NULL;
    this->CalldownLocationType = ECalldownLocationType::None;
}


