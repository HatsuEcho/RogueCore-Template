#include "TeleporterItemAnimInstance.h"

UTeleporterItemAnimInstance::UTeleporterItemAnimInstance() {
    this->AnimState = ETeleporterAnimState::Normal;
    this->OutOfAmmo = false;
}

void UTeleporterItemAnimInstance::SetState(const ETeleporterAnimState State) {
}


