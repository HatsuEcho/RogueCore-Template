#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DiscordSDKJoinRequestDelegate.h"
#include "DiscordSDKInterface.generated.h"

class UDiscordSDKInterface;
class UObject;

UCLASS(Blueprintable)
class DISCORDSDK_API UDiscordSDKInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordSDKJoinRequest OnJoinRequest;
    
    UDiscordSDKInterface();

protected:
    UFUNCTION(BlueprintCallable)
    void RejectInvite(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInvite(const FString& UserId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDiscordSDKInterface* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptInvite(const FString& UserId);
    
};

