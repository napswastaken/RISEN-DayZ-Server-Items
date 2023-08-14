class NULLED_RSASS_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	void NULLED_RSASS_Base ()
	{
		UnfoldOptics(this);				
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			FoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			UnfoldOptics(this);
		}
	}	
};

class NULLED_RSASS_Black : NULLED_RSASS_Base {};
class NULLED_RSASS_Tan : NULLED_RSASS_Base {};