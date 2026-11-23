#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AsyncLoadCompleteDelegateDelegate.h"
#include "EAsyncLoadPriority.h"
#include "EAsyncPersistence.h"
#include "AsyncManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UAsyncManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PermanentReferences;

public:
    UAsyncManager();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UClass*> SyncLoadClasses(const TArray<TSoftClassPtr<UObject>>& Assets, const EAsyncPersistence Persistence);
    
    UFUNCTION(BlueprintCallable)
    UClass* SyncLoadClass(TSoftClassPtr<UObject> Asset, const EAsyncPersistence Persistence);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> SyncLoadAssets(const TArray<TSoftObjectPtr<UObject>>& Assets, const EAsyncPersistence Persistence);
    
    UFUNCTION(BlueprintCallable)
    UObject* SyncLoadAsset(TSoftObjectPtr<UObject> Asset, const EAsyncPersistence Persistence);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClasses(TArray<TSoftClassPtr<UObject>> Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClass(TSoftClassPtr<UObject> Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
};

