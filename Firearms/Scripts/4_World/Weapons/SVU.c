class NULLED_SVU : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}				
};

class SVU : NULLED_SVU {};