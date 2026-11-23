#include "CooperAbillity.h"

UCooperAbillity::UCooperAbillity() {
    this->AbillityAnimation = NULL;
    this->VoiceOnUse = NULL;
    this->TargetType = ECooperAbillityTargetPreference::Self;
    this->ExitStrategy = NULL;
    this->CoolDown = 0.00f;
    this->WindUp = 0.00f;
    this->Duration = 0.00f;
    this->Range = 0.00f;
    this->RechargeTime = 0.00f;
    this->MaxCharges = -1;
    this->TargetActorIfValid = false;
    this->RotateTowardsTarget = false;
}


