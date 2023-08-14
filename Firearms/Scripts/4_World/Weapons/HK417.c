class NULLED_HK417_Base : RifleBoltLock_Base
{
	void NULLED_HK417_Base()
	{
		ShowIronSightsRev(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			HideIronSightsRev(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			ShowIronSightsRev(this);
		}	
	}	
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
};
class NULLED_HK417 : NULLED_HK417_Base{};