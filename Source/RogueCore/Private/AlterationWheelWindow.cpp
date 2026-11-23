#include "AlterationWheelWindow.h"

UAlterationWheelWindow::UAlterationWheelWindow() {
    this->bHandleCloseCommand = false;
    this->bBlockCloseCommand = true;
    this->SpinDuration = 8.50f;
    this->HoldDuration = 3.50f;
    this->SpinTurns = 4;
    this->NearMissChance = 0.85f;
    this->ViewportZOrder = 101;
    this->RiskVectorEntryClass = NULL;
    this->Wheel = NULL;
    this->TitleText = NULL;
    this->SubtitleText = NULL;
    this->AlterationNameText = NULL;
    this->RiskVectorsBox = NULL;
    this->Backdrop = NULL;
}



FAlterationWheelData UAlterationWheelWindow::GetWheelData() const {
    return FAlterationWheelData{};
}


