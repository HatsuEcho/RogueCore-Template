#include "FSDAnimNotify_PlayAttackSound.h"

UFSDAnimNotify_PlayAttackSound::UFSDAnimNotify_PlayAttackSound() {
    this->OverrideType = EAudioCharacterOverrideType::IsLocalPlayer;
    this->OverrideAttenuation = NULL;
    this->OverrideSoundClass = NULL;
    this->OverrideSoundClassMix = NULL;
    this->OverrideControlBusMix = NULL;
}


