class NULLED_IFAK_ColorBase : Inventory_Base
{
	int healthregen = 40;
	int stopbleed = 1;
	
	override void OnApply(PlayerBase player)
	{
		float health;
		health = player.GetMaxHealth();
		float health2 = player.GetHealth();

		for ( int i = 0; i < stopbleed && player.IsBleeding(); i++ )
        {
            player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
        }
		if(health2 <= health - healthregen)
		{
		player.SetHealth( "", "", health2 + healthregen );
		}
		else
		{
			player.SetHealth( "", "", health );
		}
	}
	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionIFAKTarget);
		AddAction(ActionIFAKSelf);
    }
};