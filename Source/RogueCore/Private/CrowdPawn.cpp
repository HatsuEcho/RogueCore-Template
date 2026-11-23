#include "CrowdPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "CrowdPawnMovement.h"
#include "Components/SphereComponent.h"
#include "EnemyHealthComponent.h"

ACrowdPawn::ACrowdPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->Movement = CreateDefaultSubobject<UCrowdPawnMovement>(TEXT("Movement"));
    this->HealthComponent = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->SharingSkeleton = NULL;
    this->Sphere->SetupAttachment(RootComponent);
    this->mesh->SetupAttachment(RootComponent);
}


