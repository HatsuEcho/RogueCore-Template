using UnrealBuildTool;

public class RogueCoreUtils : ModuleRules {
    
    public RogueCoreUtils(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            [
                "Core",
                "CoreUObject",
                "Engine",
                "GameplayTags",
            ]
        );
    } 
}
