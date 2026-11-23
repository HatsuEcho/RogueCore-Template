#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "Math/Box.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BoxFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBoxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoxFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox CreateBoxAt(FVector Location, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BoxSize(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxExtends(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxCenter(FBox Box);
    
};

