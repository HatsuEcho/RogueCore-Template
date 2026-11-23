#include "RandomSpamShot.h"

FRandomSpamShot::FRandomSpamShot() {
    this->Aim = ERandomSpamAim::Scatter;
    this->DelayBefore = 0.00f;
    this->count = 0;
    this->SpreadAngle = 0.00f;
    this->AimSpreadRadius = 0.00f;
    this->AimSpreadHeight = 0.00f;
}

