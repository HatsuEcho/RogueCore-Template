#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "RDGLauncher.generated.h"

class URDGComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ARDGLauncher : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URDGComponent*> ActiveGrenades;

    ARDGLauncher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DetonateAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterGrenade(URDGComponent* Grenade);
    
};

