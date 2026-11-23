#include "PawnStat.h"

UPawnStat::UPawnStat() {
    this->DisplayText = FText::FromString(TEXT("Default__PawnStat"));
    this->StartingValue = 0.00f;
    this->PawnStatType = EPawnStatType::Multiplicative;
    this->ValueModificationType = EPawnStatType::Multiplicative;
    this->DisplayTransform = EItemUpgradeNumberTransformType::PercentageAddition;
}



float UPawnStat::GetStartingValue() const {
    return 0.0f;
}

FText UPawnStat::GetDisplayText() const {
    return FText::GetEmpty();
}

