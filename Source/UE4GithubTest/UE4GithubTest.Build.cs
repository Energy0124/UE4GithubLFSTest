// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4GithubTest : ModuleRules
{
	public UE4GithubTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
