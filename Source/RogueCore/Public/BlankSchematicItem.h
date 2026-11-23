#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "BlankSchematicItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UBlankSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;

    UBlankSchematicItem();

};

