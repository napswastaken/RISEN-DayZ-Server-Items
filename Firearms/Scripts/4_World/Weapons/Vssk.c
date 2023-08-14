class VSSK_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}				
};

class NULLED_VSSK : VSSK_Base {};