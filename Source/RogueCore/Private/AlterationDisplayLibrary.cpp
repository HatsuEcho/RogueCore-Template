#include "AlterationDisplayLibrary.h"

UAlterationDisplayLibrary::UAlterationDisplayLibrary() {
}

void UAlterationDisplayLibrary::ShowStageAlteration(UUserWidget* StageWidget, URun* Run, int32 StageIndex) {
}

void UAlterationDisplayLibrary::ShowRevealedStageAlteration(UVerticalBox* EntriesBox, UStage* Stage) {
}

UPrimaryMutator* UAlterationDisplayLibrary::GetStageAlteration(URun* Run, int32 StageIndex) {
    return NULL;
}

UPrimaryMutator* UAlterationDisplayLibrary::GetRunAlterationForDisplay(URun* Run) {
    return NULL;
}

UPrimaryMutator* UAlterationDisplayLibrary::GetRevealedStageAlteration(UStage* Stage) {
    return NULL;
}

FText UAlterationDisplayLibrary::GetAlterationTitle(const UPrimaryMutator* Alteration) {
    return FText::GetEmpty();
}

UTexture2D* UAlterationDisplayLibrary::GetAlterationIcon(const UPrimaryMutator* Alteration) {
    return NULL;
}


