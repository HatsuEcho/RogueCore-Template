#include "PerkAsset.h"
#include "Templates/SubclassOf.h"

UPerkAsset::UPerkAsset() {
    this->Type = EPerkType::Enhancement;
    this->TypeDescriptor = NULL;
    this->Rank = -1;
    this->PlayerRequiredLevel = 0;
    this->EnhancementPointCost = 0;
    this->MaxUseCharges = -1;
    this->ShoutOnUseCharge = NULL;
    this->CoolDownBetweenUse = 0.00f;
    this->bIsHighlighted = false;
}

bool UPerkAsset::UseCharge(APlayerController* PlayerController) {
    return false;
}

bool UPerkAsset::Unequip(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return false;
}

void UPerkAsset::SetHighlighted(UObject* WorldContext, bool IsHighlighted) {
}

bool UPerkAsset::IsUsageType(const EPerkUsageType InType) const {
    return false;
}

EPerkUsageType UPerkAsset::GetUsageType() const {
    return EPerkUsageType::Passive;
}

FText UPerkAsset::GetTitle() const {
    return FText::GetEmpty();
}

UDialogDataAsset* UPerkAsset::GetShoutOnUse() const {
    return NULL;
}

int32 UPerkAsset::GetRank() const {
    return 0;
}

int32 UPerkAsset::GetPlayerRequiredLevel() const {
    return 0;
}

int32 UPerkAsset::GetMaxUses() const {
    return 0;
}

UTexture2D* UPerkAsset::GetIcon() const {
    return NULL;
}

TSubclassOf<UPerkHUDIconWidget> UPerkAsset::GetHudIconWidgetClass() const {
    return NULL;
}

TArray<TSubclassOf<UPerkActivationWidget>> UPerkAsset::GetHudActivationWidgets(EPerkHUDActivationLocation Location) const {
    return TArray<TSubclassOf<UPerkActivationWidget>>();
}

UPerkDescriptor* UPerkAsset::GetDescriptor() const {
    return NULL;
}

FText UPerkAsset::GetDescriptionAt(int32 InIndex) const {
    return FText::GetEmpty();
}

FText UPerkAsset::GetDescription() const {
    return FText::GetEmpty();
}

int32 UPerkAsset::GetCost() const {
    return 0;
}

FCoolDownProgressStyle UPerkAsset::GetCooldownUI() const {
    return FCoolDownProgressStyle{};
}

float UPerkAsset::GetCooldown() const {
    return 0.0f;
}

TSoftObjectPtr<UBinkMediaTexture> UPerkAsset::GetBinkMovie() {
    return NULL;
}

bool UPerkAsset::Equip(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return false;
}

bool UPerkAsset::CanUseCharge(APlayerController* PlayerController) const {
    return false;
}



FText UPerkAsset::GetRankText() const {
    return FText::GetEmpty();
}

