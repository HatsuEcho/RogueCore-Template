#include "LoadoutFunctionLibrary.h"

ULoadoutFunctionLibrary::ULoadoutFunctionLibrary() {
}

void ULoadoutFunctionLibrary::SetVanitySection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutVanitySection& Section) {
}

void ULoadoutFunctionLibrary::SetPickaxeSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutPickaxeSection& Section) {
}

void ULoadoutFunctionLibrary::SetGearSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex, const FLoadoutGearSection& Section) {
}

void ULoadoutFunctionLibrary::SetCurrLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, FLoadoutCopy newLoadout) {
}

void ULoadoutFunctionLibrary::RandomizeWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex) {
}

void ULoadoutFunctionLibrary::RandomizeAllRandomWeaponLoadout(APlayerCharacter* Player) {
}

FLoadoutVanitySection ULoadoutFunctionLibrary::GetVanitySection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex) {
    return FLoadoutVanitySection{};
}

FLoadoutPickaxeSection ULoadoutFunctionLibrary::GetPickaxeSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex) {
    return FLoadoutPickaxeSection{};
}

FLoadoutGearSection ULoadoutFunctionLibrary::GetGearSection(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex) {
    return FLoadoutGearSection{};
}

FLoadoutCopy ULoadoutFunctionLibrary::GetCurrentLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId) {
    return FLoadoutCopy{};
}

void ULoadoutFunctionLibrary::CopyPasteWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex) {
}

void ULoadoutFunctionLibrary::CopyLoadoutSections(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex, int32 Sections) {
}


