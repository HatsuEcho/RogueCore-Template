#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SoftMinersManualDescription.h"
#include "MinersManualData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftMinersManualDescription Description;

    UMinersManualData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetText(FText& Headline, FText& richText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFrontImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBackgroundImage();
    
};

