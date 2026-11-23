#include "GymActivityProperties.h"

UGymActivityProperties::UGymActivityProperties() {
    this->AnimStart = NULL;
    this->AnimGoingUp = NULL;
    this->AnimGoingDown = NULL;
    this->AnimEnd = NULL;
    this->AnimAdditiveStruggleUp = NULL;
    this->AnimAdditiveStruggleDown = NULL;
    this->PointSound = NULL;
    this->SuccessSound = NULL;
    this->FailSound = NULL;
    this->ExerciseType = NULL;
    this->BaseDifficulty = 50;
    this->MaxDifficulty = 10;
    this->GymIcon = NULL;
    this->GymIconRAW = NULL;
    this->SingleMotion = false;
    this->ConstantSpeed = true;
    this->AlternativeVersion = false;
    this->GymActivityStats = NULL;
}


