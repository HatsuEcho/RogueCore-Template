#pragma once
#include "CoreMinimal.h"
#include "ObjectInfoComponent.h"
#include "SimpleObjectInfoData.h"
#include "Templates/SubclassOf.h"
#include "SimpleObjectInfoComponent.generated.h"

class UActorContextWidget;
class UDialogDataAsset;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USimpleObjectInfoComponent : public UObjectInfoComponent {
    GENERATED_BODY()
protected:
    
    
    
    
    
    
    
    
    
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap;
    
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameDescription;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMissionControlLookAtShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionControlLookAtShout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShoutOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* IconOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPingableByLaserpointer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorContextWidget> ContextWidgetClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorContextWidget* ContextWidget;

    USimpleObjectInfoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInGameName(const FString& GameName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInGameDescription(const FString& GameDescription);
    
    UFUNCTION(BlueprintCallable)
    void SetContextWidget(UActorContextWidget* InContextWidget);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLookAtShout(UDialogDataAsset* InShout);
    
    UFUNCTION(BlueprintCallable)
    void OverrideIcon(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetDefaultLookAtShout() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLookAtShoutOverride();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentObjectInfo(USceneComponent* targetComponent, const FSimpleObjectInfoData& Data);
    
};

