#include "LogicUnlockValue.h"

FLogicUnlockValue::FLogicUnlockValue() {
    this->Value = 0.00f;
    this->StackMethod = ELogicUnlockStackType::None;
    this->Display = EItemUpgradeNumberTransformType::None;
    this->ClampEnabled = false;
}

