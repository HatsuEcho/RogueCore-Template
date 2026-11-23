#include "AsyncManager.h"

UAsyncManager::UAsyncManager() {
}

TArray<UClass*> UAsyncManager::SyncLoadClasses(const TArray<TSoftClassPtr<UObject>>& Assets, const EAsyncPersistence Persistence) {
    return TArray<UClass*>();
}

UClass* UAsyncManager::SyncLoadClass(TSoftClassPtr<UObject> Asset, const EAsyncPersistence Persistence) {
    return NULL;
}

TArray<UObject*> UAsyncManager::SyncLoadAssets(const TArray<TSoftObjectPtr<UObject>>& Assets, const EAsyncPersistence Persistence) {
    return TArray<UObject*>();
}

UObject* UAsyncManager::SyncLoadAsset(TSoftObjectPtr<UObject> Asset, const EAsyncPersistence Persistence) {
    return NULL;
}

void UAsyncManager::ReleaseAllHandles() {
}

void UAsyncManager::AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClasses(TArray<TSoftClassPtr<UObject>> Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClass(TSoftClassPtr<UObject> Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence Persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}


