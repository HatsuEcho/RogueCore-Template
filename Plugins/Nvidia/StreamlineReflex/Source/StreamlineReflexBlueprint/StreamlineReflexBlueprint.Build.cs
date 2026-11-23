using UnrealBuildTool;

public class StreamlineReflexBlueprint : ModuleRules {
    public StreamlineReflexBlueprint(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "StreamlineBlueprint" });
    }
}
