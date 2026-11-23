#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UObject/Interface.h"
#include "InvulnerableShellInterface.generated.h"

class UMeshComponent;

UINTERFACE(Blueprintable)
class UInvulnerableShellInterface : public UInterface {
    GENERATED_BODY()
};

class IInvulnerableShellInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMeshComponent*> GetInvulnerableShellMeshes() const;
    
};

