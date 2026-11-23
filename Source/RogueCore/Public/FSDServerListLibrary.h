#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=FSDBlueprintSessionResult -FallbackName=FSDBlueprintSessionResult
#include "FSDBlueprintSessionResult.h"
#include "EFSDServerListLobbySortOrder.h"
#include "ERunMode.h"
#include "EServerListFilterRunMode.h"
#include "ServerListLobby.h"
#include "ServerListLobbyStatus.h"
#include "ERunDifficulty.h"
#include "EServerListFilterRunDifficulty.h"
#include "FSDServerListLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDServerListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDServerListLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortLobbies(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies, const TArray<FServerListLobbyStatus>& LobbiesStatus, const EFSDServerListLobbySortOrder SortOrder, const bool Reverse, const bool KeepFriendsFirst, const bool KeepJoinableFirst, TArray<FServerListLobby>& SortedLobbies, TArray<FServerListLobbyStatus>& SortedLobbiesStatus);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetSaveGameRejoinId(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRejoinLobby(UPARAM(Ref) TArray<FServerListLobby>& Lobbies, UPARAM(Ref) TArray<FServerListLobbyStatus>& LobbiesStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFSDBlueprintSessionResult CreateSearchSessionFromLobby(const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERunMode ConvertServerFilterRunModeToRunMode(const EServerListFilterRunMode Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FServerListLobbyStatus ComputeLobbyStatus(const UObject* WorldContext, const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FServerListLobbyStatus> ComputeLobbiesStatus(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetRejoinRunIdUnlessContinuing(const UObject* WorldContext);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERunDifficulty ConvertServerFilterRunDifficultyToRunDifficulty(const EServerListFilterRunDifficulty Filter);

};

