#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "VanitySchematicItem.generated.h"

class UVanityItem;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UVanitySchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* Item;

    UVanitySchematicItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetVanityItem();
    
};

