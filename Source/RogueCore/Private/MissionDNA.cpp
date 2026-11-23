#include "MissionDNA.h"

UMissionDNA::UMissionDNA() {
    this->MissionScale = 100.00f;
    this->Weight = 1.00f;
    this->AmountOfStages = 3;
    this->XpPerStage = 200;
    this->XpPerStageNumberMultiplier = 0.50f;
    this->ExtraStageTime = 0.00f;
    this->Complexity = NULL;
    this->Duration = NULL;
    this->AllowedTunnelLengths = 30;
}

bool UMissionDNA::IsRoomQueryValidAt(int32 Index) const {
    return false;
}

FRoomSelectionQuery UMissionDNA::GetRoomSelectionQueryRef(int32 Index) const {
    return FRoomSelectionQuery{};
}

int32 UMissionDNA::GetRoomSelectionQueryNum() const {
    return 0;
}

float UMissionDNA::GetDurationHazardBonus() const {
    return 0.0f;
}

float UMissionDNA::GetComplexityHazardBonus() const {
    return 0.0f;
}

TArray<EProceduralDistanceLength> UMissionDNA::GetAllowedTunnelLengths() const {
    return TArray<EProceduralDistanceLength>();
}


