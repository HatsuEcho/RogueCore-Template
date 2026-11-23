#include "PerkDescriptor.h"

UPerkDescriptor::UPerkDescriptor() {
    this->Icon = NULL;
}



FText UPerkDescriptor::GetTitle() const {
    return FText::GetEmpty();
}

UTexture2D* UPerkDescriptor::GetIcon() const {
    return NULL;
}

FName UPerkDescriptor::GetCategory() const {
    return NAME_None;
}

