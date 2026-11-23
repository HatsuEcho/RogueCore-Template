#include "GrappleStrikeItem.h"
#include "EItemActivationType.h"
#include "Net/UnrealNetwork.h"

AGrappleStrikeItem::AGrappleStrikeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationType = EItemActivationType::Manual;
    this->MaxDistance = 2000.00f;
    this->MaxSpeed = 1500.00f;
    this->MaxSpeedReleaseModifier = 0.50f;
    this->WindUpTime = 0.40f;
    this->ImpactRadius = 250.00f;
    this->SphereTraceRadius = 50.00f;
    this->Damage = NULL;
    this->MinDamageScale = 0.20f;
    this->GrappleStartTime = 0.00f;
}

void AGrappleStrikeItem::StopGrapple() {
}

void AGrappleStrikeItem::Server_SetState_Implementation(const FGrappleStrikeState& NewState) {
}

void AGrappleStrikeItem::Server_RegisterImpact_Implementation(AFSDPawn* Target) {
}

void AGrappleStrikeItem::OnRep_State(const FGrappleStrikeState& prevState) {
}






bool AGrappleStrikeItem::HasValidGrappleTarget() const {
    return false;
}

float AGrappleStrikeItem::GetWindUpProgress() const {
    return 0.0f;
}

bool AGrappleStrikeItem::GetIsGrappling() const {
    return false;
}

AFSDPawn* AGrappleStrikeItem::GetHoveredTarget() const {
    return NULL;
}

FVector AGrappleStrikeItem::GetGrappleTargetLocation() const {
    return FVector{};
}

AFSDPawn* AGrappleStrikeItem::GetGrappleTarget() const {
    return NULL;
}

float AGrappleStrikeItem::GetDamageScale() const {
    return 0.0f;
}

void AGrappleStrikeItem::All_ShowImpact_Implementation(AFSDPawn* Target) {
}

void AGrappleStrikeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrappleStrikeItem, State);
}


