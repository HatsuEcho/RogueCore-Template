#include "IconGenerationCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AIconGenerationCharacter::AIconGenerationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OrigBaseMaterial = NULL;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->ArmorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmorMesh"));
    this->GauntletLeftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletLeftMesh"));
    this->GauntletRightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GauntletRightMesh"));
    this->HairColor = NULL;
    this->ArmorMaterial = NULL;
    this->UndersuitMaterial = NULL;
    this->GauntletMaterial = NULL;
    this->ArmorMesh->SetupAttachment(mesh);
    this->GauntletLeftMesh->SetupAttachment(mesh);
    this->GauntletRightMesh->SetupAttachment(mesh);
    this->mesh->SetupAttachment(MeshRoot);
}


