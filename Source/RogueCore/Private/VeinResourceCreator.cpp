#include "VeinResourceCreator.h"

UVeinResourceCreator::UVeinResourceCreator() {
    this->Resource = NULL;
    this->Positioning = NULL;
    this->CarveType = ECarveFilterType::ReplaceAll;
    this->CarveToEmpty = false;
    this->SegmentMaxDot = 0.70f;
    this->CurlAngle = 0.00f;
    this->VeinWorldHorizontalMaxDot = 1.00f;
    this->VeinWorldHorizontalMinDot = -1.00f;
    this->Noise = NULL;
    this->Range = 65.00f;
    this->NoiseRange = 35.00f;
    this->InfluencerRange = 0.00f;
}


