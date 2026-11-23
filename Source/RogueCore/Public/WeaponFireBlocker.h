#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "WeaponFireBlocker.generated.h"

class UBoxComponent;
class UPhysicalMaterial;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ROGUECORE_API AWeaponFireBlocker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
public:
    AWeaponFireBlocker(const FObjectInitializer& ObjectInitializer);

};

