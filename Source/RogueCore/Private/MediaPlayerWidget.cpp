#include "MediaPlayerWidget.h"

UMediaPlayerWidget::UMediaPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MediaTexture = NULL;
    this->VolumeCategory = EVolumeType::Master;
    this->VolumeMultiplier = 1.00f;
    this->IsActive = false;
    this->OutputImage = NULL;
}

void UMediaPlayerWidget::Stop() {
}

void UMediaPlayerWidget::SetPaused(const bool IsPaused) {
}

void UMediaPlayerWidget::SetMovieTexture(UBinkMediaTexture* NewTexture) {
}

void UMediaPlayerWidget::SetMovieSize(const FVector2f NewSize) {
}

bool UMediaPlayerWidget::Play() {
    return false;
}

void UMediaPlayerWidget::Callback_MediaEndReached() {
}

void UMediaPlayerWidget::Callback_MediaClosed() {
}


