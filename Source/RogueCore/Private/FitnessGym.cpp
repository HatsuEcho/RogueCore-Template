#include "FitnessGym.h"
#include "Net/UnrealNetwork.h"

AFitnessGym::AFitnessGym(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Bartender = NULL;
    this->InitalizedQuestData = false;
    this->GymCreditPerSet = 0;
    this->CurrentDrinkQuest = NULL;
}

void AFitnessGym::UpdateSets() {
}

void AFitnessGym::UpdateRepsPerSet() {
}

void AFitnessGym::UpdateCalories() {
}

void AFitnessGym::UnlockBeer_Implementation(UObject* WorldContext, UDrinkableDataAsset* DrinkData) {
}

void AFitnessGym::StopCharacterFromHoveringActivities(APlayerCharacter* Character) {
}

void AFitnessGym::SetQuest(UDrinkableDataAsset* DrinkQuest) {
}


void AFitnessGym::SetMonitors(TArray<AGymDisplay*> monitors) {
}

void AFitnessGym::SetBartender(AOmegaBartender* aBartender) {
}

void AFitnessGym::SetActivities(TArray<ABaseFitnessActivity*> NewActivities) {
}

void AFitnessGym::RemoveUntilCorrectSize(TArray<int32>& Array, int32 DesiredSize) {
}

void AFitnessGym::OnRep_CurrentDrinkQuest() {
}

void AFitnessGym::NewGoal(const int32 SetGoal, const int32 RepsPerSet) {
}

bool AFitnessGym::IsQuestComplete() const {
    return false;
}

EExerciseDifficulty AFitnessGym::GetWhichDifficultyToPickFrom(EExerciseDifficulty BaseDifficulty, const FBarQuestData& Data) {
    return EExerciseDifficulty::PickDifficulty;
}

UBarQuestObjective* AFitnessGym::GetRandomObjectiveFromList(const TArray<UBarQuestObjective*>& List) {
    return NULL;
}

TArray<AGymDisplay*> AFitnessGym::GetGymMonitors() {
    return TArray<AGymDisplay*>();
}

int32 AFitnessGym::GetDesiredQuestObjectiveNum() const {
    return 0;
}

void AFitnessGym::GetActivityIcons(TArray<UTexture2D*>& outTextures, TArray<int32>& outIDs) const {
}

int32 AFitnessGym::GetAcitivityAmount() const {
    return 0;
}

UBarQuestObjective* AFitnessGym::FetchRandomQuestObjective(const FBarQuestData& Quest, EExerciseDifficulty Difficulty) {
    return NULL;
}

void AFitnessGym::CreateExercisePlan() {
}

void AFitnessGym::Cheat_CompleteCurrentQuest() {
}

bool AFitnessGym::CanPlayerStartActivity(APlayerCharacter* Player) const {
    return false;
}

void AFitnessGym::AllowCharacterToHoverActivities(APlayerCharacter* Character) {
}

void AFitnessGym::All_UpdateQuestUI_Implementation(UGymExerciseType* Data, int32 NewSetsRemaining) {
}

void AFitnessGym::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFitnessGym, QuestObjectives);
    DOREPLIFETIME(AFitnessGym, CurrentDrinkQuest);
}


