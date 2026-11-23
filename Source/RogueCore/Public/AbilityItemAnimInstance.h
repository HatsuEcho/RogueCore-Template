#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AbilityItemAnimInstance.generated.h"

class AAbilityItem;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UAbilityItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEqupped;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAbilityAvailable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAbilityItem* Item;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowRoomIdleBreak;

    UAbilityItemAnimInstance();

    UFUNCTION(BlueprintCallable)
    void OnUnequipped();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipped();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShowRoom() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EquippedAndAvailable() const;
    
};

