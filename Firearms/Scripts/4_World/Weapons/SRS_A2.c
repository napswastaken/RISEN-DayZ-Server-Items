class NULLED_DT_SRS_A2_Base: Scout_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new ScoutRecoil(this);
	}
};