#include "CampaignSubsystem.h"
#include "Templates/SubclassOf.h"

UCampaignSubsystem::UCampaignSubsystem() {
    this->MainCampaignClass = NULL;
    this->ActiveCampaign = NULL;
    this->WeeklyBackendDataValid = false;
    this->WeeklyBackendSeed = -1;
}

bool UCampaignSubsystem::WasRunPriorityTarget(const UObject* WorldContext, const URun* Run) {
    return false;
}

void UCampaignSubsystem::UpdateCampaignRunMarker(const UObject* WorldContext, UWidget* Marker, const FGeneratedRunForBiome& GeneratedRun, UWidget* Highlight, UWidgetAnimation* HighlightAnimation) {
}

void UCampaignSubsystem::UpdateCampaignPlayedRunMarker(const UObject* WorldContext, UWidget* Marker, const URun* Run) {
}

void UCampaignSubsystem::UpdateCampaignDepthMarker(const UObject* WorldContext, UWidget* Marker, const ERunDepth Depth) {
}

void UCampaignSubsystem::StartActiveCampaign(const TSubclassOf<UCampaign> NewCampaignClass) {
}

void UCampaignSubsystem::SetCampaignRunOpenEvent(UUserWidget* Host, const FCampaignRunMarkerOpenDelegate& OnOpen) {
}

void UCampaignSubsystem::RefreshCampaignRunMarkers() {
}

void UCampaignSubsystem::OnIntelObjectiveClaimed(UIntelObjective* Objective) {
}

void UCampaignSubsystem::OnIntelChallengeClaimed(TSubclassOf<UIntelChallenge> Challenge) {
}

bool UCampaignSubsystem::LookAtCampaignRun(const UObject* WorldContext, const int32 MapSeed, ERunDepth& RunDepth, const bool bOpenRun, const bool bLookAtLockedRun) {
    return false;
}

bool UCampaignSubsystem::IsCampaignRunLocked(const UObject* WorldContext, FText& ClearanceLevelName) {
    return false;
}

bool UCampaignSubsystem::IsCampaignRunDepth(const UObject* WorldContext, const ERunDepth Depth) {
    return false;
}

bool UCampaignSubsystem::IsCampaignRun(const FGeneratedRunForBiome& GeneratedRun) const {
    return false;
}

UCampaignMission* UCampaignSubsystem::GetActiveMission() const {
    return NULL;
}

UCampaign* UCampaignSubsystem::GetActiveCampaign() const {
    return NULL;
}

bool UCampaignSubsystem::FindCampaignRun(const int32 MapSeed, FGeneratedRunForBiome& CampaignRun) const {
    return false;
}

void UCampaignSubsystem::CompleteActiveCampaignMission() {
}

void UCampaignSubsystem::CompleteActiveCampaign() {
}

void UCampaignSubsystem::ClearCampaignRunMarker(const UObject* WorldContext, UWidget* Marker) {
}

void UCampaignSubsystem::AbortActiveCampaign() {
}


