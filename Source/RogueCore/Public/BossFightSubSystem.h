#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "BossFightSubSystem.generated.h"

class UObject;


class AActor;
class IBossFightInterface;
class UBossFightInterface;
class UUserWidget;

UCLASS(Blueprintable)
class ROGUECORE_API UBossFightSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomWidgetDelegate, UUserWidget*, InWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightDelegate, const TScriptInterface<IBossFightInterface>&, BossFight);

    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnNewBossFight;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnBossFightRemoved;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetDelegate OnCustomWidgetAdded;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetDelegate OnCustomWidgetRemoved;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;

    UBossFightSubSystem();

    UFUNCTION(BlueprintCallable)
    void RemoveCustomBossFightWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterBossFight(AActor* Boss);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomBossFightWidget(UUserWidget* InWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetBoss(const UObject* WorldContextObject, TSubclassOf<AActor> BossClass);

};

