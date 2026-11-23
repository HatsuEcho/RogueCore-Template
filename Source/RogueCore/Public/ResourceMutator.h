#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UResourceMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> Resources;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;

    UResourceMutator();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStackAdditively;

};

