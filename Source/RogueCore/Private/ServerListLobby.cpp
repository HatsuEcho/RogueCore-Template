#include "ServerListLobby.h"

FServerListLobby::FServerListLobby() {
    this->RunType = ERunType::Default;
    this->RunMode = ERunMode::None;
    this->RunDepth = ERunDepth::None;
    this->RunHazard = ERunHazard::None;
    this->RunLength = 0;
    this->RunComplexity = 0;
    this->RunBiome = NULL;
    this->RunMutator = NULL;
    this->CompletedStages = 0;
    this->IsInProgress = false;
    this->IsJoinable = false;
    this->IsModded = false;
    this->NumPlayers = 0;
    this->RequiredIntel = 0;
    this->RequiredAscensions = 0;
    this->IsClassLocked = false;
    this->PasswordProtected = false;
    this->GameVersion = 0;
    this->Ping = 0;
    this->RunDifficulty = ERunDifficulty::None;
}

