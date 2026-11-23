#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BXENegotiationData.h"
#include "BXEUnlockInstance.h"
#include "DelegateDelegate.h"
#include "ItemSlotIndex.h"
#include "BXENegotiationParticipantComponent.generated.h"

class UBXENegotiationWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXENegotiationParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXENegotiationData NegotiationData;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNegotiationDone;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXENegotiationWidget* NegotiationWidget;

    UBXENegotiationParticipantComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SelectUnlock(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex, int32 InDroneUnlockIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestUnlock(int32 InUnlockIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNegotiationWidgetLoadComplete();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetNegotiationData(const FBXENegotiationData& InData);
    
};

