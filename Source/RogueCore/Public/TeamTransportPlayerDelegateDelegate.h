#pragma once
#include "CoreMinimal.h"
#include "TeamTransportPlayerDelegateDelegate.generated.h"

class APlayerCharacter;
class ATeamTransport;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTeamTransportPlayerDelegate, ATeamTransport*, Transport, APlayerCharacter*, Player);

