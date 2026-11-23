#include "GrabbingTentacle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SkeletalMeshComponent.h"
#include "GrabbingTentacleComponent.h"

AGrabbingTentacle::AGrabbingTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CenterMassSocketName = TEXT("CenterMass");
    this->Root = (USceneComponent*)RootComponent;
    this->TentacleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleMesh"));
    this->EffectAttachComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EffectAttachComponent"));
    this->GrabbingTentacle = CreateDefaultSubobject<UGrabbingTentacleComponent>(TEXT("GrabbingTentacle"));
    this->EffectAttachComponent->SetupAttachment(RootComponent);
    this->TentacleMesh->SetupAttachment(RootComponent);
}


