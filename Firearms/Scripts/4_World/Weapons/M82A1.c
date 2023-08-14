class NULLED_M82A1_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}				
};

class NULLED_M82A1 : NULLED_M82A1_Base {};