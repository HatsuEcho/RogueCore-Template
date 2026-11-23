#include "FSDOnlineSystemUtils.h"

UFSDOnlineSystemUtils::UFSDOnlineSystemUtils() {
}

void UFSDOnlineSystemUtils::TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults Reason) {
}

void UFSDOnlineSystemUtils::ShowUpgradeAccountUI() {
}

void UFSDOnlineSystemUtils::OpenURLInOverlay(const FString& URL, FOnShowWebUrlClosedBP OnOverlayClosed) {
}

void UFSDOnlineSystemUtils::OpenProfileByUserId(const UObject* WorldContext, const FString& RequesteeUserID) {
}

void UFSDOnlineSystemUtils::OpenProfile(const UObject* WorldContext, const APlayerState* Requestee) {
}

void UFSDOnlineSystemUtils::OpenPlatformBrowser(const FString& URL) {
}

FText UFSDOnlineSystemUtils::OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults Reason) {
    return FText::GetEmpty();
}

FString UFSDOnlineSystemUtils::GetPlatformBranchName() {
    return TEXT("");
}

EPlatformBranch UFSDOnlineSystemUtils::GetPlatformBranch() {
    return EPlatformBranch::Main;
}

void UFSDOnlineSystemUtils::GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons) {
}

FString UFSDOnlineSystemUtils::GetMainPlatformBranchName() {
    return TEXT("");
}

void UFSDOnlineSystemUtils::GetIsUpdatePending(const FOnGetIsUpdatePendingBP& Delegate) {
}

void UFSDOnlineSystemUtils::GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FOnGetUserPrivilegeCompleteBPDelegate& Delegate) {
}

FText UFSDOnlineSystemUtils::GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason Reason) {
    return FText::GetEmpty();
}

FString UFSDOnlineSystemUtils::GetAppID() {
    return TEXT("");
}

EInviteBlockReason UFSDOnlineSystemUtils::CanPlayerInvite(UObject* WorldContextObject) {
    return EInviteBlockReason::SoloSession;
}


