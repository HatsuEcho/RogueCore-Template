#include "BXENegotiationData.h"

FBXENegotiationData::FBXENegotiationData() {
    this->NegotiationID = 0;
    this->bNegotiating = false;
    this->ActiveParticipant = 0;
    this->SkipUnlockIndex = 0;
    this->LastActiveParticipant = 0;
    this->Timeout = 0;
    this->Level = 0;
    this->UnlockCollection = NULL;
}

