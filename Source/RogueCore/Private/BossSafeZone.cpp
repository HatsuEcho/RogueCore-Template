#include "BossSafeZone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABossSafeZone::ABossSafeZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->DomeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DomeMesh"));
    this->BeamTarget = CreateDefaultSubobject<USceneComponent>(TEXT("BeamTarget"));
    this->GracePeriod = 5.00f;
    this->ActiveDuration = 12.00f;
    this->Radius = 1000.00f;
    this->DamagePerSecond = 12.00f;
    this->DamageTickInterval = 0.50f;
    this->DamageClass = NULL;
    this->DomeMesh = NULL;
    this->DomeMaterial = NULL;
    this->ColorParameterNames.AddDefaulted(2);
    this->BeamEffect = NULL;
    this->BeamStartParameter = TEXT("EnergyStart");
    this->BeamEndParameter = TEXT("EnergyEnd");
    this->BeamBossSocket = TEXT("CenterMass");
    this->BeamUpdateInterval = 0.05f;
    this->LocalPlayerCheckInterval = 0.10f;
    this->OutsideStatusEffect = NULL;
    this->bApplyStatusDuringGrace = true;
    this->OutsideStatusCheckInterval = 0.25f;
    this->ZoneState = EBossSafeZoneState::Grace;
    this->StateStartTime = 0.00f;
    this->bLocalPlayerInside = false;
    this->DomeMaterialInstance = NULL;
    this->Beam = NULL;
    this->BeamTarget->SetupAttachment(RootComponent);
    this->DomeMeshComponent->SetupAttachment(RootComponent);
}



void ABossSafeZone::OnRep_ZoneState() {
}

bool ABossSafeZone::IsLocationInside(const FVector& Location) const {
    return false;
}

bool ABossSafeZone::IsLocalPlayerInside() const {
    return false;
}

EBossSafeZoneState ABossSafeZone::GetZoneState() const {
    return EBossSafeZoneState::Grace;
}

float ABossSafeZone::GetStateTimeRemaining() const {
    return 0.0f;
}

float ABossSafeZone::GetStateDuration() const {
    return 0.0f;
}

float ABossSafeZone::GetRadius() const {
    return 0.0f;
}

void ABossSafeZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossSafeZone, ZoneState);
}


