#include "PerkLibrary.h"

UPerkLibrary::UPerkLibrary() {
}

void UPerkLibrary::SetPerkUseCount(const AActor* Character, const UPerkAsset* Perk, const int32 NewUseCount) {
}

void UPerkLibrary::SetPerkCooldown(const AActor* Character, const UPerkAsset* Perk, const float NewCooldown) {
}

void UPerkLibrary::SetPerkBlocked(const AActor* Character, const UPerkAsset* Perk, const bool IsBlocked) {
}

void UPerkLibrary::SetMaximumPerkUses(const AActor* Character, const UPerkAsset* Perk, const int32 MaximumUses) {
}

void UPerkLibrary::ResetPerkStates(const AActor* Character) {
}

void UPerkLibrary::ResetPerkState(const AActor* Character, const UPerkAsset* Perk) {
}

void UPerkLibrary::MarkPerkUsed(const AActor* Character, const UPerkAsset* Perk) {
}

int32 UPerkLibrary::GetRemainingPerkUses(const AActor* Character, const UPerkAsset* Perk) {
    return 0;
}

int32 UPerkLibrary::GetPerkUseCount(const AActor* Character, const UPerkAsset* Perk) {
    return 0;
}

float UPerkLibrary::GetPerkCooldownProgress(const AActor* Character, const UPerkAsset* Perk) {
    return 0.0f;
}

float UPerkLibrary::GetPerkCooldown(const AActor* Character, const UPerkAsset* Perk) {
    return 0.0f;
}

UPerkComponent* UPerkLibrary::GetPerkComponent(const AActor* Character) {
    return NULL;
}

int32 UPerkLibrary::GetMaximumPerkUses(const AActor* Character, const UPerkAsset* Perk) {
    return 0;
}

TArray<UPerkAsset*> UPerkLibrary::GetActivePerks(const AActor* Character) {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkLibrary::GetActiveEnhancements(const AActor* Character) {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkLibrary::GetActiveClassPerks(const AActor* Character) {
    return TArray<UPerkAsset*>();
}

bool UPerkLibrary::DoesCharacterHavePerk(const AActor* Character, const UPerkAsset* Perk) {
    return false;
}

bool UPerkLibrary::CanCharacterUsePerk(const AActor* Character, const UPerkAsset* Perk) {
    return false;
}



float UPerkLibrary::GetPawnStatModificationFromPerkArray(const UPawnStat* Stat, const TArray<UPerkAsset*> Perks) {
    return 0.0f;
}

float UPerkLibrary::GetPawnStatModificationFromPerk(const UPawnStat* Stat, const UPerkAsset* Perk) {
    return 0.0f;
}

TArray<UPerkAsset*> UPerkLibrary::GetOwnedPassivePerks(const UObject* WorldContext) {
    return TArray<UPerkAsset*>();
}

float UPerkLibrary::GetDamageTagModificationFromPerkArray(UDamageTag* InTag, TArray<UPerkAsset*> Perks) {
    return 0.0f;
}

float UPerkLibrary::GetDamageTagModificationFromPerk(UDamageTag* InTag, UPerkAsset* Perk) {
    return 0.0f;
}

