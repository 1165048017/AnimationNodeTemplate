// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class AnimationNodeTemplateRuntime : ModuleRules
	{
		public AnimationNodeTemplateRuntime(ReadOnlyTargetRules Target) : base(Target)
		{
			PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"AnimationCore",
                "AnimGraphRuntime",
                "Core",
                "CoreUObject",
                "Engine",
            });
		}
	}
}
