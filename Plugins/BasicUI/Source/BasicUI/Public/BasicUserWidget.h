#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "BasicData.h"
#include "BasicUserWidget.generated.h"

class UBasicUserWidget;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BASICUI_API UBasicUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBasicDataDelegate, UBasicUserWidget*, InOwner, const FBasicData&, InData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDataDelegate OnBasicDataChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicData BasicData;
    
public:
    UBasicUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetBasicDataObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void SetBasicDataIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBasicDataGuid(FGuid InGuid);
    
    UFUNCTION(BlueprintCallable)
    void SetBasicData(const FBasicData& InBasicData);
    
};

