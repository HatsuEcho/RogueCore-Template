#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EPlaceableObstructionType.h"
#include "ETeleporterPortalReplaceMode.h"
#include "Templates/SubclassOf.h"
#include "ThrowableItem.h"
#include "TeleporterPortalItem.generated.h"

class ATeleporterPortal;
class UAnimMontage;
class UBillboardComponent;
class UCapacityHoldingItemAggregator;
class UCrosshairAggregator;
class USplineMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATeleporterPortalItem : public AThrowableItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplaceModeChangedDelegate, ETeleporterPortalReplaceMode, ReplaceMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPortalSlotsChangedDelegate, ETeleporterPortalReplaceMode, FirstSlot, ETeleporterPortalReplaceMode, SecondSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FColorPairIndexChangedDelegate, int32, ColorPairIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplaceModeChangedDelegate OnReplaceModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPortalSlotsChangedDelegate OnPortalSlotsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorPairIndexChangedDelegate OnColorPairIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrosshairAggregator* CrosshairAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* AimTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* AimTrailEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTrailInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTrailMaxSimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATeleporterPortal> PortalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPortalSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CollapseHoldDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollapseHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplaceMode, meta=(AllowPrivateAccess=true))
    ETeleporterPortalReplaceMode ReplaceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPSwitchReplaceModeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPSwitchReplaceModeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplaceModeHighlightSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenInHandAfterThrowSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightSecondaryColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutOfPortalsLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ColorPairIndex, meta=(AllowPrivateAccess=true))
    int32 ColorPairIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PortalSlots, meta=(AllowPrivateAccess=true))
    ETeleporterPortalReplaceMode FirstPortalSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PortalSlots, meta=(AllowPrivateAccess=true))
    ETeleporterPortalReplaceMode SecondPortalSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 ActivePortalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATeleporterPortal* FirstPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATeleporterPortal* SecondPortal;
    
public:
    ATeleporterPortalItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetThrowReplaceMode(ETeleporterPortalReplaceMode InReplaceMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetReplaceMode(ETeleporterPortalReplaceMode InReplaceMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CollapseAllPortals();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ReplaceModeChanged(ETeleporterPortalReplaceMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PortalsCollapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PortalFizzled(FVector Location, EPlaceableObstructionType Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplaceMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PortalSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ColorPairIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoCountChanged(int32 InAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeleporterPortalReplaceMode GetSecondPortalSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeleporterPortalReplaceMode GetReplaceMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeleporterPortalReplaceMode GetFirstPortalSlot() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_NotifyPortalFizzled(FVector_NetQuantize InLocation, EPlaceableObstructionType InReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_HideInHand();
    
};

