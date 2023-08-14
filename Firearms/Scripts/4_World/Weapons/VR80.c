class NULLED_VR80_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}				
};

class NULLED_VR80 : NULLED_VR80_Base {};