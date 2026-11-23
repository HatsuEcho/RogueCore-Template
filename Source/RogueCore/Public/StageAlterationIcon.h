#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "StageAlterationIcon.generated.h"

class UImage;
class UPrimaryMutator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UStageAlterationIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* Alteration;
    
public:
    UStageAlterationIcon();

    UFUNCTION(BlueprintCallable)
    void SetAlteration(UPrimaryMutator* InAlteration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAlterationChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimaryMutator* GetAlteration() const;
    
};

