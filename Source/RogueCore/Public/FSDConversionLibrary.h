#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "Engine/NetSerialization.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "FSDConversionLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDConversionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector QuatToVector(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator QuatToRotator(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ComponentToWorldLocation(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ActorToWorldLocation(AActor* Actor);
    
};

