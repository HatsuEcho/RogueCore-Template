#include "BossRiskVectorEffect_Niagara.h"

UBossRiskVectorEffect_Niagara::UBossRiskVectorEffect_Niagara() {
    this->System = NULL;
    this->Placement = EBossRiskVectorNiagaraPlacement::AttachedToBoss;
    this->Socket = TEXT("CenterMass");
    this->effect = NULL;
}


