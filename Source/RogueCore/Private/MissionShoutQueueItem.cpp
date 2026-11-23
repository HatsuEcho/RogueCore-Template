#include "MissionShoutQueueItem.h"

FMissionShoutQueueItem::FMissionShoutQueueItem() {
    this->LoadedAudio = NULL;
    this->AllowGlitch = false;
    this->ControllerId = EMissionControlID::MissionControl;
}

