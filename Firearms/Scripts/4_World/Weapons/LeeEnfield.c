class NULLED_LeeEnfield_Base extends BoltActionRifle_InnerMagazine_Base
{
	void NULLED_LeeEnfield_Base ()
	{
	}
	
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && PUScopeOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
};


class NULLED_LeeEnfield extends NULLED_LeeEnfield_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
	
};
