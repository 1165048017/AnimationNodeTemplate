// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class AnimationNodeTemplateEditor : ModuleRules
	{
		public AnimationNodeTemplateEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"AnimationCore",
				"AnimationNodeTemplateRuntime",
                "AnimGraph",
				"AnimGraphRuntime",
				"AnimationModifiers",
				"AnimationBlueprintLibrary",
				"Core",
                "CoreUObject",
                "Engine",
            });

			PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "SlateCore",
            });

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
						"BlueprintGraph",
						"EditorFramework",
						"Kismet",
                        "UnrealEd",
                    }
                );
            }
        }
	}
}
