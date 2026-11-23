#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RoomFeature.generated.h"

class URoomFeature;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ROGUECORE_API URoomFeature : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URoomFeature*> RoomFeatures;

    URoomFeature();

};

