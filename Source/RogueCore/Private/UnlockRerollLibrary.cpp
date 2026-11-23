#include "UnlockRerollLibrary.h"

UUnlockRerollLibrary::UUnlockRerollLibrary() {
}

bool UUnlockRerollLibrary::ReplacePlayerUnlock(AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReplace, const FBXEUnlockInstance& Replacement) {
    return false;
}

bool UUnlockRerollLibrary::PayPlayerRerollCost(const FUnlockRerollSettings& Settings, AFSDPlayerState* Player, const int32 CostToPay) {
    return false;
}

TArray<FBXEUnlockInstance> UUnlockRerollLibrary::GetUnlocksOfType(const TArray<FBXEUnlockInstance>& Unlocks, const EUnlockType UnlockType) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UUnlockRerollLibrary::GetRerollableUnlocks(const AFSDPlayerState* Player, const EUnlockType Type) {
    return TArray<FBXEUnlockInstance>();
}

int32 UUnlockRerollLibrary::GetPlayerUnlockRerollCost(const FUnlockRerollSettings& Settings, const FBXEUnlockInstance& Unlock) {
    return 0;
}

TArray<FBXEUnlockInstance> UUnlockRerollLibrary::GenerateRerollReplacements(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReroll) {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UUnlockRerollLibrary::GenerateRerollDecoys(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReroll, const int32 count) {
    return TArray<FBXEUnlockInstance>();
}

bool UUnlockRerollLibrary::CanPlayerAffordReroll(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const int32 CostToPay) {
    return false;
}

bool UUnlockRerollLibrary::ApplyPlayerUnlock(AFSDPlayerState* Player, const FBXEUnlockInstance& NewUnlock) {
    return false;
}


