#include "EntitlementSettings.h"

UEntitlementSettings::UEntitlementSettings() {
    this->TimeBetweenQueries = 300.00f;
}

UBaseEntitlement* UEntitlementSettings::GetPlatformFollowEntitlement() const {
    return NULL;
}

TSet<UBaseEntitlement*> UEntitlementSettings::GetAllEntitlements() const {
    return TSet<UBaseEntitlement*>();
}


