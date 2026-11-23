#include "BXEUnlockBundle.h"

UBXEUnlockBundle::UBXEUnlockBundle() {
    this->bDynamicBundle = false;
}

bool UBXEUnlockBundle::IsDynamicBundle() const {
    return false;
}

bool UBXEUnlockBundle::GetCarriedInstances(const FBXEUnlockInstance& InBundleInstance, TArray<FBXEUnlockInstance>& OutInstances) {
    return false;
}

TArray<UBXEUnlockBase*> UBXEUnlockBundle::GetBundledUnlocks() const {
    return TArray<UBXEUnlockBase*>();
}


