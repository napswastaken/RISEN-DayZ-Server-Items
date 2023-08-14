class NULLED_M200_Intervention_Base: Scout_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new ScoutRecoil(this);
	}
};