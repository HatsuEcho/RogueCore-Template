#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "UnlockRerollSlotMachineReel.generated.h"

class UUserWidget;
class UWidget;

USTRUCT(BlueprintType)
struct FUnlockRerollSlotMachineReel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> Window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> Symbols;
    
    ROGUECORE_API FUnlockRerollSlotMachineReel();
};

