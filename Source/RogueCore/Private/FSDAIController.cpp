#include "FSDAIController.h"

AFSDAIController::AFSDAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PathFollowingComponent = GetClass()->FindPropertyByName("PathFollowingComponent");
    (*p_PathFollowingComponent->ContainerPtrToValuePtr<UPathFollowingComponent*>(this)) = NULL;
    this->LOSTraceChannel = ECC_GameTraceChannel3;
}

void AFSDAIController::UnblockLogic() {
}

void AFSDAIController::SetStunned(bool IsStaggered) {
}

void AFSDAIController::SetAlerted(bool isAlerted) {
}

void AFSDAIController::ResumeLogic() {
}

void AFSDAIController::RegisterBlackboardChanges(const FName& Key) {
}


void AFSDAIController::PauseLogic() {
}

void AFSDAIController::OnAttackingChanged(bool attacking) {
}

bool AFSDAIController::IsSpawnAnimationCompleted() const {
    return false;
}

bool AFSDAIController::GetIsAlerted() const {
    return false;
}

void AFSDAIController::BlockLogic() {
}



AFSDPawn* AFSDAIController::GetFSDPawn() const {
    return NULL;
}

