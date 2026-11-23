#include "FSDServerListClientBase.h"

UFSDServerListClientBase::UFSDServerListClientBase() {
    this->OnlineSystem = NULL;
    this->CurrentHostMode = EFSDServerListHostMode::None;
    this->NextHostMode = EFSDServerListHostMode::None;
    this->QuerySeedForServerList = 0;
}

void UFSDServerListClientBase::StopHosting() {
}

void UFSDServerListClientBase::StartHosting(const EFSDServerListHostMode Mode, const FGuid RunId) {
}

void UFSDServerListClientBase::OnOnlineSessionChanged(const EOnlineSessionStatus OldStatus, const EOnlineSessionStatus NewStatus) {
}

void UFSDServerListClientBase::ListLobbies() {
}

bool UFSDServerListClientBase::HaveServerFilter() const {
    return false;
}

EFSDServerListHostMode UFSDServerListClientBase::GetHostMode() const {
    return EFSDServerListHostMode::None;
}


