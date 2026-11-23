#include "TrophyWallSettings.h"

UTrophyWallSettings::UTrophyWallSettings() {
}

TArray<UTrophySheet*> UTrophyWallSettings::GetTrophySheets() const {
    return TArray<UTrophySheet*>();
}

UTrophySheet* UTrophyWallSettings::GetPrimaryTrophySheet() const {
    return NULL;
}

TSoftClassPtr<UTrophyWallMenuWidget> UTrophyWallSettings::GetMenuClass() const {
    return NULL;
}


