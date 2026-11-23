#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StaticSpawnPointGameplayRestrictions.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UStaticSpawnPointGameplayRestrictions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayBitMask;

    UStaticSpawnPointGameplayRestrictions();

};

