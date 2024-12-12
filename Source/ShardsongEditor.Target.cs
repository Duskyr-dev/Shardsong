// Copyright Moonblossom Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class ShardsongEditorTarget : TargetRules
{
	public ShardsongEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Shardsong" } );
	}
}