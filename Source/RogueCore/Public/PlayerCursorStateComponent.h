#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CursorInterpolator.h"
#include "PlayerCursorStateComponent.generated.h"

class AFSDPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPlayerCursorStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCursorInterpolator CursorInterpolator;

    UPlayerCursorStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RecordCursorPosition(const FVector2D& Pos);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveCursorPosition(AFSDPlayerState* InPlayer, const FVector2D& InPos);
    
};

