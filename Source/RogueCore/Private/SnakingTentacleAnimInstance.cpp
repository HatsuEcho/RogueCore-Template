#include "SnakingTentacleAnimInstance.h"

USnakingTentacleAnimInstance::USnakingTentacleAnimInstance() {
    this->HorizontalLook = 0.00f;
    this->VerticalLook = 0.00f;
    this->DistanceToTarget = 0.00f;
    this->StartReachingDistance = 1000.00f;
    this->FinishReachingDistance = 800.00f;
    this->ReachingValue = 0.00f;
    this->State = ESnakingTentacleState::Idle;
    this->HoldingTarget = false;
}



bool USnakingTentacleAnimInstance::ToTunneling() const {
    return false;
}

bool USnakingTentacleAnimInstance::ToThrashing() const {
    return false;
}

bool USnakingTentacleAnimInstance::ToStunned() const {
    return false;
}

bool USnakingTentacleAnimInstance::ToJailing() const {
    return false;
}

bool USnakingTentacleAnimInstance::MissedDwarf() const {
    return false;
}

bool USnakingTentacleAnimInstance::LeaveTunneling() const {
    return false;
}

bool USnakingTentacleAnimInstance::LeaveThrashing() const {
    return false;
}

bool USnakingTentacleAnimInstance::LeaveStunned() const {
    return false;
}

bool USnakingTentacleAnimInstance::LeaveAnticipation() const {
    return false;
}

bool USnakingTentacleAnimInstance::GoToAnticipation() const {
    return false;
}

bool USnakingTentacleAnimInstance::EndAttack() const {
    return false;
}

