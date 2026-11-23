#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Targetable.generated.h"

class UFXSystemAsset;
class UHealthComponentBase;

UINTERFACE(Blueprintable)
class ROGUECORE_API UTargetable : public UInterface {
    GENERATED_BODY()
};

class ITargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ShowDamageEffects(UFXSystemAsset* Particles, FVector Location, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHealthComponentBase* GetTargetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetCenterMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsTargetable() const;
    
};

