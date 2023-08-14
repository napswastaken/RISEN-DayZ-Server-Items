class NULLED_Kar98_Base extends BoltActionRifle_InnerMagazine_Base
{
	void NULLED_Kar98_Base ()
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


class NULLED_Kar98 extends NULLED_Kar98_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
	
};
