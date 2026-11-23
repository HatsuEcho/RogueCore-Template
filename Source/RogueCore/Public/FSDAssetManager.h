#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "Engine/AssetManager.h"
#include "FSDAssetManager.generated.h"

class UGameData;

UCLASS(Blueprintable, Config=Game)
class ROGUECORE_API UFSDAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameData* GameData;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameData> GameDataPath;

    UFSDAssetManager();

};

