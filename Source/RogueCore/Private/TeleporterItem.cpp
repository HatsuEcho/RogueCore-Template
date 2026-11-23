#include "TeleporterItem.h"
#include "CapacityHoldingItemAggregator.h"
#include "CrosshairAggregator.h"
#include "SurfacePlacerAggregator.h"

ATeleporterItem::ATeleporterItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemPlacer = CreateDefaultSubobject<USurfacePlacerAggregator>(TEXT("ItemPlacer"));
    this->CrosshairAggregator = CreateDefaultSubobject<UCrosshairAggregator>(TEXT("CrosshairAggregator"));
    this->AmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("AmmoCapacity"));
    this->MaxPadSeparation = 1000.00f;
    this->MinPadSeparation = 300.00f;
    this->MaxPadCount = 2;
    this->PlayerTeleportCost = 100;
    this->DefaultNPCTeleportCost = 50;
    this->bTeleportNPCs = false;
    this->LargestNPCSize = DeepPathFinderSize::Medium;
    this->RecallHoldDuration = 1.00f;
    this->ObstructionType = EPlaceableObstructionType::Valid;
}



void ATeleporterItem::OnAmmoChanged(int32 InAmount) {
}

int32 ATeleporterItem::GetTeleportCost(const AActor* InActor) const {
    return 0;
}

ATeleporterPad* ATeleporterItem::GetPadAt(int32 InIndex) const {
    return NULL;
}

ATeleporterPad* ATeleporterItem::GetLinkedPad(const ATeleporterPad* InPad) const {
    return NULL;
}

UCapacityHoldingItemAggregator* ATeleporterItem::GetAmmoCapacity() const {
    return NULL;
}

bool ATeleporterItem::CanTeleportActor(const AActor* InActor) const {
    return false;
}

bool ATeleporterItem::CanAffordTeleport(const AActor* InActor) const {
    return false;
}


