#include "ItemGadgetWidget.h"

UItemGadgetWidget::UItemGadgetWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bOnlyShowWhileEquipped = false;
    this->Character = NULL;
    this->Item = NULL;
}


void UItemGadgetWidget::OnItemEquipStateChanged() {
}


