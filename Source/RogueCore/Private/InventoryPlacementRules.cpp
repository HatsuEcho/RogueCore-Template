#include "InventoryPlacementRules.h"

UInventoryPlacementRules::UInventoryPlacementRules() {
}

TArray<FItemSlotIndex> UInventoryPlacementRules::GetPlaceableUnlockSlotsFromType(const APlayerCharacter* Player, EUnlockType Type, bool& IsFreeSlots) {
    return TArray<FItemSlotIndex>();
}



TArray<FItemSlotIndex> UInventoryPlacementRules::GetEmptyUnlockSlotsForType(const APlayerCharacter* Player, const EUnlockType Type) {
    return TArray<FItemSlotIndex>();
}

