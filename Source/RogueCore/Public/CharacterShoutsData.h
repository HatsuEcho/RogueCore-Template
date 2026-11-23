#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "CharacterShouts.h"
#include "CharacterShoutsData.generated.h"

class UCharacterShoutsData;


UCLASS(Blueprintable)
class ROGUECORE_API UCharacterShoutsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterShouts Shouts;
    
    UCharacterShoutsData();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterShoutsData* FallbackShouts;

};

