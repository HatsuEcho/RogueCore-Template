#include "IntelChallengeForBossSummon.h"

UIntelChallengeForBossSummon::UIntelChallengeForBossSummon() {
    this->RequiredSummonAmount = 1;
    this->RequiredRunDepth = ERunDepth::None;
    this->RequireMutator = false;
}

void UIntelChallengeForBossSummon::OnBossSummoned(AActor* Boss) {
}


