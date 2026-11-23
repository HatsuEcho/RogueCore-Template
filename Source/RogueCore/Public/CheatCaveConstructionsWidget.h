#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "CheatCaveConstructionsWidget.generated.h"

class UEditableTextBox;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UCheatCaveConstructionsWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* StatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEditableTextBox* FilterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* RowBox;
    
public:
    UCheatCaveConstructionsWidget();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRowCheckStateChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFilterChanged(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void OnClearClicked();
    
};

