#include "DroppedItemPickup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SkeletalMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"
#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "SimpleObjectInfoComponent.h"

ADroppedItemPickup::ADroppedItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->Collision = (UBoxComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->UseCollider = CreateDefaultSubobject<USphereComponent>(TEXT("UseCollider"));
    this->usable = CreateDefaultSubobject<UInstantUsable>(TEXT("usable"));
    this->Outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("Outline"));
    this->SimpleObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("SimpleObjectInfo"));
    this->ItemID = NULL;
    this->UnlockLevel = 0;
    this->UseRadius = 100.00f;
    this->MeshScale = 1.20f;
    this->UseTextFormat = FText::FromString(TEXT("Pick up {0}"));
    this->InfoTextFormat = FText::FromString(TEXT("Dropped {0}"));
    this->UseCollider->SetupAttachment(RootComponent);
    this->mesh->SetupAttachment(RootComponent);
}


void ADroppedItemPickup::OnUsed(APlayerCharacter* User, EInputKeys Key) {
}

void ADroppedItemPickup::OnRep_Item() {
}

void ADroppedItemPickup::InitializeFromItemID(UItemID* InItemID) {
}

EUnlockType ADroppedItemPickup::GetUnlockType() const {
    return EUnlockType::None;
}

UItemID* ADroppedItemPickup::GetItemID() const {
    return NULL;
}

void ADroppedItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroppedItemPickup, ItemID);
    DOREPLIFETIME(ADroppedItemPickup, UnlockInstance);
    DOREPLIFETIME(ADroppedItemPickup, UnlockLevel);
    DOREPLIFETIME(ADroppedItemPickup, DisplayMesh);
}


