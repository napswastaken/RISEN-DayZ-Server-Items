class NULLED_DT_MDR_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	void NULLED_DT_MDR_Base ()
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

class NULLED_DT_MDR : NULLED_DT_MDR_Base {};