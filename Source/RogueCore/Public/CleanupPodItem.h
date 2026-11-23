#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CleaningPodLaunchedDelegate.h"
#include "EPlaceableObstructionType.h"
#include "PlaceableInterface.h"
#include "RessuplyPodItem.h"
#include "CleanupPodItem.generated.h"

class APlagueControlActor;
class APlagueInfectionNode;

UCLASS(Blueprintable)
class ROGUECORE_API ACleanupPodItem : public ARessuplyPodItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCleaningPodLaunched OnCleaningPodLaunched;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlagueControlActor> PlagueController;

    ACleanupPodItem(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidget(EPlaceableObstructionType Reason, float TimeLeft);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Call_CleaningPod(const FVector& Location, APlagueInfectionNode* plagueNode);
    
    UFUNCTION(BlueprintCallable)
    void CallUpdateWidget();
    

    // Fix for true pure virtual functions not being implemented
};

