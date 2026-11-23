#include "PlayerEventArmorBreak.h"

FPlayerEventArmorBreak::FPlayerEventArmorBreak() {
    this->Type = EArmorDamageType::Normal;
    this->Target = NULL;
    this->Damage = 0.00f;
}

