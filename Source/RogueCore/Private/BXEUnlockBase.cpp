#include "BXEUnlockBase.h"

UBXEUnlockBase::UBXEUnlockBase() {
    this->UnlockUsesRandomRarity = false;
    this->ShoutNegotiationSelected = NULL;
    this->DefaultRarity = NULL;
    this->VisualSettingsOverride = NULL;
    this->AttributeCollection = NULL;
    this->AdditionalAttributeAmount = 0;
    this->UnlockType = EUnlockType::Upgrade;
}

UUnlockVisualSettings* UBXEUnlockBase::GetVisualSettings(UBXEUnlockRarity* InRarity) const {
    return NULL;
}

EUnlockType UBXEUnlockBase::GetUnlockType() const {
    return EUnlockType::None;
}

FText UBXEUnlockBase::GetTitle() const {
    return FText::GetEmpty();
}

TArray<UWeaponTagBase*> UBXEUnlockBase::GetRelatedWeaponTags() const {
    return TArray<UWeaponTagBase*>();
}

TSoftObjectPtr<UTexture2D> UBXEUnlockBase::GetIcon() const {
    return NULL;
}

FText UBXEUnlockBase::GetFunctionalDescription() const {
    return FText::GetEmpty();
}

FText UBXEUnlockBase::GetDescription() const {
    return FText::GetEmpty();
}

FText UBXEUnlockBase::GetCategoryRichText() const {
    return FText::GetEmpty();
}

TArray<UBXEUnlockCategory*> UBXEUnlockBase::GetCategories() const {
    return TArray<UBXEUnlockCategory*>();
}

UBXEUnlockAttributeWeightPool* UBXEUnlockBase::GetAttributeCollection() {
    return NULL;
}



TArray<UBXEUnlockRarity*> UBXEUnlockBase::GetAvailableRarities() const {
    return TArray<UBXEUnlockRarity*>();
}

