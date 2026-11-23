#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=FSDServerListClientBase -FallbackName=FSDServerListClientBase
#include "FSDServerListClientBase.h"
#include "FSDServerListFilter.h"
#include "ServerListLobby.h"
#include "FSDServerlistClientRogueCore.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDServerlistClientRogueCore : public UFSDServerListClientBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShuffleSeedForServerList;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFSDServerListFilter ServerListFilter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FServerListLobby> LastFoundLobbies;

    UFSDServerlistClientRogueCore();

protected:
    UFUNCTION(BlueprintCallable)
    void SetServerListFilter(const FFSDServerListFilter& NewFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFSDServerListFilter GetServerFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FServerListLobby> GetLastFoundLobbies() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearServerListFilter();
    
};

