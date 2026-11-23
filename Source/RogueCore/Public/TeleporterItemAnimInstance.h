#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "Animation/AnimInstance.h"
#include "ETeleporterAnimState.h"
#include "TeleporterItemAnimInstance.generated.h"

class ATeleporterPortalItem;

UCLASS(Blueprintable, NonTransient)
class UTeleporterItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATeleporterPortalItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleporterAnimState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutOfAmmo;
    
public:
    UTeleporterItemAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetState(const ETeleporterAnimState State);
    
};

