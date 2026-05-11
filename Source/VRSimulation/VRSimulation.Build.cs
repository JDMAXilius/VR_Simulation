using UnrealBuildTool;

public class VRSimulation : ModuleRules
{
	public VRSimulation(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"XRBase",
			"HeadMountedDisplay",
			"UMG",
			"SlateCore",
		});
	}
}
