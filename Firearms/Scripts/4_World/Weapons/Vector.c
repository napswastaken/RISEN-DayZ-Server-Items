class NULLED_Vector_Base : RifleBoltFree_Base
{
	void NULLED_Vector_Base ()
	{
		UnfoldOptics(this);				
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new Mp5kRecoil(this);
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

class NULLED_Vector : NULLED_Vector_Base {};
