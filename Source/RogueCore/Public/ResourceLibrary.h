#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "Math/RandomStream.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResourceDrop.h"
#include "ResourceDropSetup.h"
#include "ResourceLibrary.generated.h"

UCLASS(Blueprintable)
class UResourceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UResourceLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FResourceDrop> PickResourceDrops(const TArray<FResourceDropSetup>& Drops, UPARAM(Ref) FRandomStream& Random, const int32 NumberOfPicks);
    
};

