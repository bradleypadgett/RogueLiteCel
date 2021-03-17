// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RogueLiteCel : ModuleRules
{
	public RogueLiteCel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
