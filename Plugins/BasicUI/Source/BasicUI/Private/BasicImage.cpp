#include "BasicImage.h"

UBasicImage::UBasicImage() {
    this->bIsVariable = false;
    this->bMaterialSetWidgetScale = false;
    this->MaterialWidgetScaleParameter = TEXT("WidgetScale");
    this->InnerImage = NULL;
    this->PaintData = NULL;
}

void UBasicImage::SetDynamicMaterialVector(FName InName, FVector4 InVector) const {
}

void UBasicImage::SetDynamicMaterialTexture(FName InName, UTexture2D* InTexture) const {
}

void UBasicImage::SetDynamicMaterialScalar(FName InName, float InValue) const {
}

void UBasicImage::SetDynamicMaterialParameters(FBasicMaterialParameters InParameters) const {
}

void UBasicImage::SetDynamicMaterialColor(FName InName, FBasicColor InColor) const {
}

void UBasicImage::SetBrushFromTexture(UTexture2D* InTexture, bool InMatchSize) {
}

void UBasicImage::SetBrushColor(FBasicColor InColor) {
}

void UBasicImage::SetBrush(FBasicBrush InBrush) {
}

void UBasicImage::ResetDynamicMaterialVector(FName InName) {
}

void UBasicImage::ResetDynamicMaterialTexture(FName InName) {
}

void UBasicImage::ResetDynamicMaterialScalar(FName InName) {
}

void UBasicImage::ResetDynamicMaterialColor(FName InName) {
}

FSlateBrush UBasicImage::GetSlateBrush() const {
    return FSlateBrush{};
}

UMaterialInstanceDynamic* UBasicImage::GetDynamicMaterial() const {
    return NULL;
}

FBasicMaterialParameters UBasicImage::GetDefaultDynamicMaterialParameters() const {
    return FBasicMaterialParameters{};
}


