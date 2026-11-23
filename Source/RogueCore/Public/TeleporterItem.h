#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
#include "DeepPathFinderSize.h"
#include "EPlaceableObstructionType.h"
#include "PlaceableInterface.h"
#include "RecallableItem.h"
#include "Templates/SubclassOf.h"
#include "TeleporterItem.generated.h"

class AActor;
class ADeepPathfinderCharacter;
class ATeleporterPad;
class UCapacityHoldingItemAggregator;
class UCrosshairAggregator;
class UItemPlacerAggregator;

UCLASS(Abstract, Blueprintable)
class ATeleporterItem : public ARecallableItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrosshairAggregator* CrosshairAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPadSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPadSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerTeleportCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<DeepPathFinderSize, int32> NPCTeleportCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultNPCTeleportCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize LargestNPCSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ADeepPathfinderCharacter>> TeleportExclusions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecallHoldDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecallHoldDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlaceableObstructionType ObstructionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ObstructionLocation;
    
public:
    ATeleporterItem(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PlacementFeedback(EPlaceableObstructionType Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PadsRecalled();
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged(int32 InAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeleportCost(const AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATeleporterPad* GetPadAt(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATeleporterPad* GetLinkedPad(const ATeleporterPad* InPad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapacityHoldingItemAggregator* GetAmmoCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleportActor(const AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordTeleport(const AActor* InActor) const;
    

    // Fix for true pure virtual functions not being implemented
};

