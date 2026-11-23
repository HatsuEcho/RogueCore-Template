#include "AlterationWheelRiskVectorEntry.h"

UAlterationWheelRiskVectorEntry::UAlterationWheelRiskVectorEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon = NULL;
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->RiskVector = NULL;
}


URiskVector* UAlterationWheelRiskVectorEntry::GetRiskVector() const {
    return NULL;
}


