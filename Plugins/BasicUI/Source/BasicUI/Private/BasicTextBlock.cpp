#include "BasicTextBlock.h"

UBasicTextBlock::UBasicTextBlock() {
    this->bIsVariable = false;
    this->Text = FText::FromString(TEXT("Basic Text"));
    this->InnerTextBlock = NULL;
}

void UBasicTextBlock::SetTextStyle(FBasicTextStyle InStyle) {
}


