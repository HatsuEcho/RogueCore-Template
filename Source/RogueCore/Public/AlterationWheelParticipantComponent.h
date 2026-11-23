#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "AlterationWheelData.h"
#include "AlterationWheelParticipantComponent.generated.h"

class UAlterationWheelWindow;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAlterationWheelParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAlterationWheelWindow* WheelWindow;
    
public:
    UAlterationWheelParticipantComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowWheel(const FAlterationWheelData& InData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideWheel();
    
};

