class NULLED_M1A_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}				
};

class NULLED_M1A : NULLED_M1A_Base {};