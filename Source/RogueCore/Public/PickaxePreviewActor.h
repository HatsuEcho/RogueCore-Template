#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameFramework/Actor.h"
#include "EPickaxePartLocation.h"
#include "EquippedPickaxeParts.h"
#include "ItemIDInterface.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "SpawnReleasedActor.h"
#include "PickaxePreviewActor.generated.h"

class UMaterialInterface;
class UPickaxePart;
class UPlayerCharacterID;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface, public ISpawnReleasedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedPickaxeParts, meta=(AllowPrivateAccess=true))
    FEquippedPickaxeParts EquippedPickaxeParts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;

    APickaxePreviewActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedPickaxeParts(const FEquippedPickaxeParts& InParts);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedPickaxeParts();
    
public:
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EquipParts(UPlayerCharacterID* InCharacterID);
    

    // Fix for true pure virtual functions not being implemented
};

