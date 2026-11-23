#include "RichTextRunner.h"

URichTextRunner::URichTextRunner() : UUserWidget(FObjectInitializer::Get()) {
    this->TextStyleSet = NULL;
    this->Progress = 1.00f;
    this->InternalRichText = NULL;
}

void URichTextRunner::SetTextStyleSet(UDataTable* NewTextStyleSet) {
}

void URichTextRunner::SetText(FText InText) {
}

void URichTextRunner::SetProgress(float InProgress) {
}

UDataTable* URichTextRunner::GetTextStyleSet() const {
    return NULL;
}

float URichTextRunner::GetProgress() const {
    return 0.0f;
}


