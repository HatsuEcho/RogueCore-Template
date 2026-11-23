#include "PlayerCursorStateComponent.h"

UPlayerCursorStateComponent::UPlayerCursorStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPlayerCursorStateComponent::Server_RecordCursorPosition_Implementation(const FVector2D& Pos) {
}

void UPlayerCursorStateComponent::Client_ReceiveCursorPosition_Implementation(AFSDPlayerState* InPlayer, const FVector2D& InPos) {
}


