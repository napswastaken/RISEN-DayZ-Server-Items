class NULLED_MG42_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}				
};

class NULLED_MG42 : NULLED_MG42_Base {};