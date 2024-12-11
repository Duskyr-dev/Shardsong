// Copyright Moonblossom Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class ShardsongTarget : TargetRules
{
	public ShardsongTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Shardsong" } );
	}
}
