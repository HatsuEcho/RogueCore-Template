#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DiscordBackendClient.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UDiscordBackendClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDiscordBackendClient();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUser() const;
    
};

