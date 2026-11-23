#include "FSDReverbVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AFSDReverbVolume::AFSDReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->Collision = (USphereComponent*)RootComponent;
    this->Reverb = NULL;
    this->Priority = 0.00f;
}


