#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "EscortHammerProgressWidget.generated.h"

class AEscortHammerObjectiveActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEscortHammerProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEscortHammerObjectiveActor* Objective;
    
public:
    UEscortHammerProgressWidget();

    UFUNCTION(BlueprintCallable)
    void SetObjective(AEscortHammerObjectiveActor* NewObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEscortHammerObjectiveActor* GetObjective() const;
    
};

