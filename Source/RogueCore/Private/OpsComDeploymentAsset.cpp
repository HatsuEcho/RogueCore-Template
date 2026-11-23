#include "OpsComDeploymentAsset.h"

UOpsComDeploymentAsset::UOpsComDeploymentAsset() {
    this->StatFormat = EDeploymentStatFormat::TwoStats;
    this->Weight = 1.00f;
}

UTexture2D* UOpsComDeploymentAsset::GetIconOutlined() const {
    return NULL;
}

UTexture2D* UOpsComDeploymentAsset::GetIcon() const {
    return NULL;
}


