#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "CloudSaveMetadata.h"
#include "FSDCloudSaveClient.generated.h"

class UFSDSaveGame;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDCloudSaveClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUploadSaveGameResult, bool, success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadSaveGameResult, bool, success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadMetadataResult, bool, success);

    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadSaveGameResult UploadSavegameDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadMetadataResult DownloadMetadataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadSaveGameResult DownloadSavegameDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCloudSaveMetadata> MetaData;

    UFSDCloudSaveClient();

    UFUNCTION(BlueprintCallable)
    bool SaveToCloud(UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    bool DownloadMetadata();
    
    UFUNCTION(BlueprintCallable)
    bool DownloadLatest();
    
    UFUNCTION(BlueprintCallable)
    bool DownloadLastestSaveFromMain();
    
    UFUNCTION(BlueprintCallable)
    bool DownloadBackupVersion(const int64 Generation);
    
};

