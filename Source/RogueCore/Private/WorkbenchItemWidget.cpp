#include "WorkbenchItemWidget.h"

UWorkbenchItemWidget::UWorkbenchItemWidget() {
    this->ChoiceCount = 2;
    this->WorkbenchCollectionTag = NULL;
    this->ItemData = NULL;
    this->ItemUnlock = NULL;
    this->Rarity = NULL;
}

bool UWorkbenchItemWidget::SelectItemUpgrade(UObject* InUpgrade) {
    return false;
}


