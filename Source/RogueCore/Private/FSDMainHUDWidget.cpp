#include "FSDMainHUDWidget.h"

UFSDMainHUDWidget::UFSDMainHUDWidget() {
    this->GadgetsBar = NULL;
    this->GadgetInventory = NULL;
}




UHUDRadarWidget* UFSDMainHUDWidget::GetRadarWidget_Implementation() const {
    return NULL;
}

void UFSDMainHUDWidget::AddRadarPoint(URadarPointComponent* Point) {
}



void UFSDMainHUDWidget::OnGadgetItemsLoaded() {
}

void UFSDMainHUDWidget::OnGadgetItemDestroyed(AActor* InItem) {
}

void UFSDMainHUDWidget::OnGadgetItemAdded(AItem* InItem) {
}

