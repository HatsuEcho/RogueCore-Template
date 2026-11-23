#include "BXETradeManager.h"

UBXETradeManager::UBXETradeManager() {
    this->RunManager = NULL;
}

bool UBXETradeManager::StartTrade() {
    return false;
}

bool UBXETradeManager::IsTrading() const {
    return false;
}

bool UBXETradeManager::HasStageExitTrade() const {
    return false;
}


