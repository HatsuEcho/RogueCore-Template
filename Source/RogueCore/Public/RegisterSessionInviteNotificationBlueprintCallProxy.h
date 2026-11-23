#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=FSDBlueprintSessionResult -FallbackName=FSDBlueprintSessionResult
#include "RegisterSessionInviteNotificationBlueprintCallProxy.generated.h"

class UObject;
class URegisterSessionInviteNotificationBlueprintCallProxy;

UCLASS(Blueprintable)
class ROGUECORE_API URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintRegisterSessionInviteNotificationDelegate, const FFSDBlueprintSessionResult&, SessionInvite);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBlueprintRegisterSessionInviteFailedDelegate);

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterSessionInviteNotificationDelegate OnSessionUserInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterSessionInviteFailedDelegate OnSessionUserInviteFailed;
    
    URegisterSessionInviteNotificationBlueprintCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* WorldContextObject);
    
};

