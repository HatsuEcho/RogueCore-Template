#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "NiagaraSystemSettings.h"
#include "InstancedNiagaraSettings.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class ROGUECORE_API UInstancedNiagaraSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraSystem*, FNiagaraSystemSettings> SystemSettings;

    UInstancedNiagaraSettings();

};

