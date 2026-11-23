#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "TelemetrySpawnCountEntry.h"
#include "TelemetrySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UTelemetrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTelemetrySpawnCountEntry> SpawnCountEntries;
    
public:
    UTelemetrySettings();

};

