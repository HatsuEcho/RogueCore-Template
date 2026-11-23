#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "ServerListLobby.h"
#include "FSDFindLobbyForRunProxy.generated.h"

class UFSDFindLobbyForRunProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFSDFindLobbyForRunProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindLobbyProxyLobbyDelegate, const FServerListLobby&, Lobby);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFindLobbyProxyFailureDelegate);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RunId;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FServerListLobby RunLobby;

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyLobbyDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyFailureDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyFailureDelegate OnNotFound;
    
public:
    UFSDFindLobbyForRunProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UFSDFindLobbyForRunProxy* FindLobbyForRun(const UObject* WorldContext, const FGuid NewRunId);
    
};

