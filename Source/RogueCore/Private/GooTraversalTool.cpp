#include "GooTraversalTool.h"
#include "Net/UnrealNetwork.h"

AGooTraversalTool::AGooTraversalTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AvailableGooTypes.AddDefaulted(2);
    this->ModeSwitchHoldDuration = 0.40f;
    this->ModeSwitchHoldText = FText::FromString(TEXT("Switch goo"));
    this->ModeSwitchSound = NULL;
    this->GooType = EGooType::Sticky;
}

void AGooTraversalTool::ToggleGooType() {
}

void AGooTraversalTool::SetGooType(EGooType NewGooType) {
}

void AGooTraversalTool::Server_SetGooType_Implementation(EGooType NewGooType) {
}


void AGooTraversalTool::OnRep_GooType() {
}

float AGooTraversalTool::GetModeSwitchHoldProgress() const {
    return 0.0f;
}

EGooType AGooTraversalTool::GetGooType() const {
    return EGooType::Sticky;
}

UGooProjectileLauncherComponent* AGooTraversalTool::GetGooLauncher() const {
    return NULL;
}

TArray<EGooType> AGooTraversalTool::GetAvailableGooTypes() const {
    return TArray<EGooType>();
}

void AGooTraversalTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGooTraversalTool, GooType);
}


