#include "BarSubSystem.h"

UBarSubSystem::UBarSubSystem() {
    this->Bartender = NULL;
    this->Bound = false;
}

void UBarSubSystem::SetBartender(AOmegaBartender* InBartender) {
}

void UBarSubSystem::PlayerLoggedOut(AFSDPlayerState* PState) {
}

void UBarSubSystem::PlayerLoggedIn(AFSDPlayerController* Controller) {
}

void UBarSubSystem::LocalPlayerExitGymArea() {
}

void UBarSubSystem::LocalPlayerEnteredGymArea() {
}

bool UBarSubSystem::HasExercise(const UObject* InWorldContextObject, const UGymExerciseType* Exercise) {
    return false;
}

bool UBarSubSystem::HasEnoughReps(const UObject* InWorldContextObject, UGymExerciseType* Exercise, int32 Amount) {
    return false;
}

UGymExerciseType* UBarSubSystem::GetExerciseType(const UObject* InWorldContextObject, int32 Index) {
    return NULL;
}

int32 UBarSubSystem::GetExerciseReps(const UObject* InWorldContextObject, int32 Index) {
    return 0;
}

int32 UBarSubSystem::GetExerciseIndex(const UObject* InWorldContextObject, UGymExerciseType* Exercise) {
    return 0;
}

int32 UBarSubSystem::GetCalories(const UObject* InWorldContextObject) {
    return 0;
}

int32 UBarSubSystem::GetBeerCost(UObject* InWorldContextObject, UDrinkableDataAsset* Drink) {
    return 0;
}

AOmegaBartender* UBarSubSystem::GetBartender(const UObject* InWorldContextObject) {
    return NULL;
}

TArray<UGymExerciseType*> UBarSubSystem::GetAllExerciseTypes(const UObject* InWorldContextObject) {
    return TArray<UGymExerciseType*>();
}

TArray<int32> UBarSubSystem::GetAllExerciseReps(const UObject* InWorldContextObject) {
    return TArray<int32>();
}

int32 UBarSubSystem::GetAdjustedCostForPlayerCount(UObject* InWorldContextObject, const int32 InBaseCost) {
    return 0;
}

void UBarSubSystem::AddInternalReps(const UObject* InWorldContextObject, const UGymExerciseType* Exercise, int32 Amount) {
}

void UBarSubSystem::AddExerciseReps(const UObject* InWorldContextObject, UGymExerciseType* Exercise, int32 Amount) {
}

void UBarSubSystem::AddCalories(const UObject* InWorldContextObject, int32 Amount) {
}


