#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "Animation/AnimInstance.h"
#include "MeshGroupAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMeshGroupAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemberIndex;
    
public:
    UMeshGroupAnimInstance();

};

