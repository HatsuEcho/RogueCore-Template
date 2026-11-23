#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TrophyWallUILibrary.generated.h"

class UEnemyID;
class UObject;
class UTexture2D;
class UTrophySheet;

UCLASS(Blueprintable)
class ROGUECORE_API UTrophyWallUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTrophyWallUILibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetTrophyWallHasClaimable(const UObject* WorldContext, const UTrophySheet* InSheet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindBossDisplayInfo(const UEnemyID* InBoss, FText& OutName, UTexture2D*& OutIcon);
    
};

