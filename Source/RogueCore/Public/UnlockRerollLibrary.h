#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BXEUnlockInstance.h"
#include "EUnlockType.h"
#include "UnlockRerollSettings.h"
#include "UnlockRerollLibrary.generated.h"

class AFSDPlayerState;

UCLASS(Blueprintable)
class UUnlockRerollLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnlockRerollLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ReplacePlayerUnlock(AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReplace, const FBXEUnlockInstance& Replacement);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool PayPlayerRerollCost(const FUnlockRerollSettings& Settings, AFSDPlayerState* Player, const int32 CostToPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBXEUnlockInstance> GetUnlocksOfType(const TArray<FBXEUnlockInstance>& Unlocks, const EUnlockType UnlockType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBXEUnlockInstance> GetRerollableUnlocks(const AFSDPlayerState* Player, const EUnlockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerUnlockRerollCost(const FUnlockRerollSettings& Settings, const FBXEUnlockInstance& Unlock);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBXEUnlockInstance> GenerateRerollReplacements(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReroll);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBXEUnlockInstance> GenerateRerollDecoys(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const FBXEUnlockInstance& UnlockToReroll, const int32 count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlayerAffordReroll(const FUnlockRerollSettings& Settings, const AFSDPlayerState* Player, const int32 CostToPay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyPlayerUnlock(AFSDPlayerState* Player, const FBXEUnlockInstance& NewUnlock);
    
};

