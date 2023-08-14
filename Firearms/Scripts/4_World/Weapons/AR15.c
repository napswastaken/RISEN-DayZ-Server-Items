class NULLED_AR15_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}				
};

class NULLED_AR15 : NULLED_AR15_Base {};