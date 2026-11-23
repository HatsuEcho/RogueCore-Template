#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "PerkInputUnlockComponent.generated.h"

class APlayerController;
class UInputComponent;
class UPerkAsset;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPerkInputUnlockComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* PlayerInputComponent;

public:
    UPerkInputUnlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnbindPerkInputActions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkTriggered();
    
    UFUNCTION(BlueprintCallable)
    void MarkPerkUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerkQuickUseIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PerkActionTriggerName1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PerkActionTriggerName2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* Perk;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkAsset* GetPerk() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindPerkInputActions();
    
};

