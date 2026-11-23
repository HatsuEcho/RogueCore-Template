#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "Projectile.h"
#include "Templates/SubclassOf.h"
#include "GooGunProjectile.generated.h"

class UDamageAsset;


class AActor;
class AGooGunPuddle;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AGooGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddleLifeTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FragmentCount;

    AGooGunProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    AGooGunPuddle* SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass);
    
    UFUNCTION(BlueprintCallable)
    void DealSocketArmorDamage(AActor* Actor, UPrimitiveComponent* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void DealSocketArmorDamageFromAsset(AActor* Actor, UPrimitiveComponent* Target, UDamageAsset* DamageAsset);

};

