#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "UnlockCollectionTag.generated.h"

class UBXEUnlockCollection;

UCLASS(Blueprintable)
class ROGUECORE_API UUnlockCollectionTag : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* DefaultCollection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLocalSeedOffset;

    UUnlockCollectionTag();

};

