#include "TeleporterPortalItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "Components/BillboardComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponent -FallbackName=SplineMeshComponent
#include "Components/SplineMeshComponent.h"
#include "CapacityHoldingItemAggregator.h"
#include "CrosshairAggregator.h"
#include "Net/UnrealNetwork.h"

ATeleporterPortalItem::ATeleporterPortalItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("AmmoCapacity"));
    this->CrosshairAggregator = CreateDefaultSubobject<UCrosshairAggregator>(TEXT("CrosshairAggregator"));
    this->AimTrail = CreateDefaultSubobject<USplineMeshComponent>(TEXT("AimTrail"));
    this->AimTrailEnd = CreateDefaultSubobject<UBillboardComponent>(TEXT("AimTrailEnd"));
    this->AimTrailInterpSpeed = 66.00f;
    this->AimTrailMaxSimTime = 5.00f;
    this->PortalClass = NULL;
    this->MinPortalSeparation = 300.00f;
    this->SurfaceOffset = 10.00f;
    this->CollapseHoldDescription = FText::FromString(TEXT("Collapse portals"));
    this->CollapseHoldDuration = 1.00f;
    this->ReplaceMode = ETeleporterPortalReplaceMode::First;
    this->FPSwitchReplaceModeMontage = NULL;
    this->TPSwitchReplaceModeMontage = NULL;
    this->ReplaceModeHighlightSeconds = 1.50f;
    this->HiddenInHandAfterThrowSeconds = 1.00f;
    this->LightMaterialIndex = 0;
    this->LightColorParameter = TEXT("DIFF || TintPrimary - Light1");
    this->LightSecondaryColorParameter = TEXT("DIFF || TintPrimary - Light2");
    this->EffectColorParameter = TEXT("Color");
    this->ColorPairIndex = -1;
    this->FirstPortalSlot = ETeleporterPortalReplaceMode::None;
    this->SecondPortalSlot = ETeleporterPortalReplaceMode::None;
    this->ActivePortalCount = 0;
    this->FirstPortal = NULL;
    this->SecondPortal = NULL;
    this->AimTrail->SetupAttachment(RootComponent);
    this->AimTrailEnd->SetupAttachment(AimTrail);
}

void ATeleporterPortalItem::Server_SetThrowReplaceMode_Implementation(ETeleporterPortalReplaceMode InReplaceMode) {
}

void ATeleporterPortalItem::Server_SetReplaceMode_Implementation(ETeleporterPortalReplaceMode InReplaceMode) {
}

void ATeleporterPortalItem::Server_CollapseAllPortals_Implementation() {
}




void ATeleporterPortalItem::OnRep_ReplaceMode() {
}

void ATeleporterPortalItem::OnRep_PortalSlots() {
}

void ATeleporterPortalItem::OnRep_ColorPairIndex() {
}

void ATeleporterPortalItem::OnAmmoCountChanged(int32 InAmount) {
}

ETeleporterPortalReplaceMode ATeleporterPortalItem::GetSecondPortalSlot() const {
    return ETeleporterPortalReplaceMode::First;
}

ETeleporterPortalReplaceMode ATeleporterPortalItem::GetReplaceMode() const {
    return ETeleporterPortalReplaceMode::First;
}

ETeleporterPortalReplaceMode ATeleporterPortalItem::GetFirstPortalSlot() const {
    return ETeleporterPortalReplaceMode::First;
}

void ATeleporterPortalItem::All_NotifyPortalFizzled_Implementation(FVector_NetQuantize InLocation, EPlaceableObstructionType InReason) {
}

void ATeleporterPortalItem::All_HideInHand_Implementation() {
}

void ATeleporterPortalItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeleporterPortalItem, ReplaceMode);
    DOREPLIFETIME(ATeleporterPortalItem, ColorPairIndex);
    DOREPLIFETIME(ATeleporterPortalItem, FirstPortalSlot);
    DOREPLIFETIME(ATeleporterPortalItem, SecondPortalSlot);
    DOREPLIFETIME(ATeleporterPortalItem, ActivePortalCount);
    DOREPLIFETIME(ATeleporterPortalItem, FirstPortal);
    DOREPLIFETIME(ATeleporterPortalItem, SecondPortal);
}


