#include "HealthUpgradeStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "ResourceBank.h"
#include "SingleUsableComponent.h"
#include "UpgradeStationUsable.h"

AHealthUpgradeStation::AHealthUpgradeStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->UseTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("UseTrigger"));
    this->CollectUseTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("CollectUseTrigger"));
    this->Useable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UseComponent"));
    this->CollectUpgradeUseable = CreateDefaultSubobject<UUpgradeStationUsable>(TEXT("CollectUpgradeUseable"));
    this->ResourceBank = CreateDefaultSubobject<UResourceBank>(TEXT("ResourceBank"));
    this->VialMeshes.AddDefaulted(4);
    this->ResourcesPerUpgrade = 5.00f;
    this->CollectUseTrigger->SetupAttachment(RootComponent);
    this->UseTrigger->SetupAttachment(RootComponent);
    this->mesh->SetupAttachment(RootComponent);
}

void AHealthUpgradeStation::Server_GiveUpgrade_Implementation(APlayerCharacter* Target) {
}

void AHealthUpgradeStation::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

void AHealthUpgradeStation::OnResourceDeposited(UResourceData* Resource, float Amount, APlayerCharacter* fromCharacter) {
}

void AHealthUpgradeStation::OnCollectUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

void AHealthUpgradeStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHealthUpgradeStation, WaitingUpgrades);
}


