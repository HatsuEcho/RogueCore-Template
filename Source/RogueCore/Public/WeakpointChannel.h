#pragma once
#include "CoreMinimal.h"
#include "WeakpointChannel.generated.h"

class UMeshComponent;


class UFSDPhysicalMaterial;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FWeakpointChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    ROGUECORE_API FWeakpointChannel();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* mesh;

};

