#include "VanityCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVanityCharacter::AVanityCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Animation = NULL;
    this->skinColor = NULL;
    this->BeardColor = NULL;
    this->DynamicBeardColor = NULL;
    this->DefaultHairColor = NULL;
    this->Head = NULL;
    this->HeadAccessory = NULL;
    this->EyeBrows = NULL;
    this->Sideburns = NULL;
    this->Moustache = NULL;
    this->Beard = NULL;
    this->ArmorMeshType = EArmorMeshType::None;
    this->Armor = NULL;
    this->ArmorColor = NULL;
    this->ApplyArmorPaintToUndersuit = false;
    this->ApplyArmorPaintToGauntlets = false;
    this->DefaultUndersuitMaterial = NULL;
    this->DefaultArmorMaterial = NULL;
    this->DefaultGauntletMaterial = NULL;
    this->itemClass = NULL;
    this->Framework = NULL;
    this->Paintjob = NULL;
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemInstance"));
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->GauntletLeftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletLeftMesh"));
    this->GauntletRightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletRightMesh"));
    this->GauntletLeftMesh->SetupAttachment(mesh);
    this->GauntletRightMesh->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}

void AVanityCharacter::DisplayVanity() {
}

void AVanityCharacter::Clean() {
}


