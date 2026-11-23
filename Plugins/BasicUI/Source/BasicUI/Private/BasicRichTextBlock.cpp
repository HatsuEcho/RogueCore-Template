#include "BasicRichTextBlock.h"

UBasicRichTextBlock::UBasicRichTextBlock() {
    this->bIsVariable = false;
    this->Text = FText::FromString(TEXT("Basic Rich Text"));
    this->TransformPolicy = ETextTransformPolicy::None;
    this->OverflowPolicy = ETextOverflowPolicy::Clip;
    this->InnerRichText = NULL;
    this->InnerStyleSet = NULL;
}


