// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CubeMine : ModuleRules
{
	public CubeMine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AIModule","GameplayTasks" , "NavigationSystem" });
	}
}
