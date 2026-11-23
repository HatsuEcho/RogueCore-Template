#include "BasicTextLayoutBlock.h"

UBasicTextLayoutBlock::UBasicTextLayoutBlock() {
    this->Justification = ETextJustify::Left;
    this->MinDesiredWidth = 0;
    this->bAutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
}

void UBasicTextLayoutBlock::SetWrapTextAt(float InWrapTextAt) {
}

void UBasicTextLayoutBlock::SetText(FText InText) {
}

void UBasicTextLayoutBlock::InsertText(FText InNewText, FText InDelimiter) {
}

FText UBasicTextLayoutBlock::GetText() const {
    return FText::GetEmpty();
}

void UBasicTextLayoutBlock::AppendText(FText InNewText, FText InDelimiter) {
}


