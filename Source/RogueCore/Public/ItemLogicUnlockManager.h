#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ItemLogicUnlockManager.generated.h"

class UItemLogicUnlockComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UItemLogicUnlockManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemLogicUnlockComponent*> ItemLogicUnlocks;

public:
    UItemLogicUnlockManager(const FObjectInitializer& ObjectInitializer);

};

