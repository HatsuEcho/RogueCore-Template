#include "BossEarthquakeStalactite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABossEarthquakeStalactite::ABossEarthquakeStalactite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
    this->CarverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarverMesh"));
    this->ScaleMin = 1.50f;
    this->ScaleMax = 2.50f;
    this->WarningJitter = 4.00f;
    this->EmbedDepthFraction = 0.35f;
    this->bEmbedInTerrain = true;
    this->EmbedHideDelay = 0.75f;
    this->LingerDuration = 10.00f;
    this->Damage = 50.00f;
    this->DamageClass = NULL;
    this->DamageRadius = 220.00f;
    this->DamageHeight = 300.00f;
    this->SpawnServerTime = 0.00f;
    this->WarningDuration = 1.00f;
    this->InitialFallSpeed = 0.00f;
    this->FallAcceleration = 2500.00f;
    this->MeshScale = 1.00f;
    this->CarverMesh->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}



void ABossEarthquakeStalactite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossEarthquakeStalactite, CeilingLocation);
    DOREPLIFETIME(ABossEarthquakeStalactite, FloorLocation);
    DOREPLIFETIME(ABossEarthquakeStalactite, SpawnServerTime);
    DOREPLIFETIME(ABossEarthquakeStalactite, WarningDuration);
    DOREPLIFETIME(ABossEarthquakeStalactite, InitialFallSpeed);
    DOREPLIFETIME(ABossEarthquakeStalactite, FallAcceleration);
    DOREPLIFETIME(ABossEarthquakeStalactite, MeshScale);
}


