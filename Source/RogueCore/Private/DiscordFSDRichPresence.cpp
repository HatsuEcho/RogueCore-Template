#include "DiscordFSDRichPresence.h"

FDiscordFSDRichPresence::FDiscordFSDRichPresence() {
    this->StartTimestamp = 0;
    this->partySize = 0;
    this->BiomeType = EDiscordBiomeType::CrystallineCaverns;
    this->MissionType = EDiscordMissionType::MiningExpedition;
    this->bIsPureSolo = false;
}

