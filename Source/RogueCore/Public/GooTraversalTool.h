#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EGooType.h"
#include "GooTypeChangedDelegateDelegate.h"
#include "GooTraversalTool.generated.h"

class UGooProjectileLauncherComponent;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class AGooTraversalTool : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGooTypeChangedDelegate OnGooTypeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGooType> AvailableGooTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModeSwitchHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModeSwitchHoldText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ModeSwitchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GooType, meta=(AllowPrivateAccess=true))
    EGooType GooType;
    
public:
    AGooTraversalTool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleGooType();
    
    UFUNCTION(BlueprintCallable)
    void SetGooType(EGooType NewGooType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGooType(EGooType NewGooType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_GooTypeChanged(EGooType NewGooType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GooType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModeSwitchHoldProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGooType GetGooType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGooProjectileLauncherComponent* GetGooLauncher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EGooType> GetAvailableGooTypes() const;
    
};

