#include "TrophyWallUILibrary.h"

UTrophyWallUILibrary::UTrophyWallUILibrary() {
}

bool UTrophyWallUILibrary::GetTrophyWallHasClaimable(const UObject* WorldContext, const UTrophySheet* InSheet) {
    return false;
}

bool UTrophyWallUILibrary::FindBossDisplayInfo(const UEnemyID* InBoss, FText& OutName, UTexture2D*& OutIcon) {
    return false;
}


