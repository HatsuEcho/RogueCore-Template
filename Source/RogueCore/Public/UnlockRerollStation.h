#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "UnlockRerollSettings.h"
#include "UnlockRerollStation.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AUnlockRerollStation : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockRerollSettings RerollSettings;
    
public:
    AUnlockRerollStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnlockRerollSettings GetRerollSettings() const;
    
};

