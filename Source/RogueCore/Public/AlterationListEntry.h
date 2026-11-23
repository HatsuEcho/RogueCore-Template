#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "AlterationListEntry.generated.h"

class UBasicTextBlock;
class UImage;
class UPrimaryMutator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UAlterationListEntry : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBasicTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* Alteration;
    
public:
    UAlterationListEntry();

    UFUNCTION(BlueprintCallable)
    void SetAlteration(UPrimaryMutator* InAlteration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimaryMutator* GetAlteration() const;
    
};

