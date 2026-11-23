#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EResourceFilterType.h"
#include "ResourceBankFilter.generated.h"

class UResourceData;

UCLASS(Blueprintable)
class ROGUECORE_API UResourceBankFilter : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResourceFilterType FilterType;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> Resources;

public:
    UResourceBankFilter();

};

