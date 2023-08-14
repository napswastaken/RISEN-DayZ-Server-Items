modded class JMAnimRegister
{
 	override void OnRegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
		super.OnRegisterOneHanded( pType, pBehavior );

		pType.AddItemInHandsProfileIK("NULLED_Warbelt_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/clothing/belts/mil_belt_g.anm");
		pType.AddItemInHandsProfileIK("NULLED_Sheath_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
	}
};