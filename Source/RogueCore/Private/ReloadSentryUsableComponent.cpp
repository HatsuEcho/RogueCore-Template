#include "ReloadSentryUsableComponent.h"
#include "Net/UnrealNetwork.h"

UReloadSentryUsableComponent::UReloadSentryUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutOfAmmoText = FText::FromString(TEXT("弹药耗尽"));
    this->AmmoFullText = FText::FromString(TEXT("弹药已满"));
    this->AudioOutOfAmmo = NULL;
    this->AudioReloading = NULL;
    this->ReloadingAudioComponent = NULL;
    this->usable = true;
    this->bReloading = false;
    this->ReloadAudioComponent = NULL;
    this->AmmoPerSec = 1.00f;
    this->SentryGun = NULL;
}

void UReloadSentryUsableComponent::SetOwningPlayerCharacter(APlayerCharacter* Player) {
}

void UReloadSentryUsableComponent::SetCanUse(bool isUsable) {
}

void UReloadSentryUsableComponent::OnRep_Reloading() {
}

void UReloadSentryUsableComponent::OnReloadAudioFinished() {
}

void UReloadSentryUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReloadSentryUsableComponent, usable);
    DOREPLIFETIME(UReloadSentryUsableComponent, bReloading);
    DOREPLIFETIME(UReloadSentryUsableComponent, OwningPlayerCharacter);
}


