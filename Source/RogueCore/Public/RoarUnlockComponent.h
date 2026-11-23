#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "PerkInputUnlockComponent.h"
#include "Templates/SubclassOf.h"
#include "RoarUnlockComponent.generated.h"

class UStatusEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API URoarUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;

    URoarUnlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DoRoar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoar(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowRoar(FVector_NetQuantize Location);
    
};

