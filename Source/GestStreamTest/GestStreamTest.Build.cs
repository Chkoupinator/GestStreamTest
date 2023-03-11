// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GestStreamTest : ModuleRules
{
	public GestStreamTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
