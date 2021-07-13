// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PlatformPuzzleGame : ModuleRules
{
	public PlatformPuzzleGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
