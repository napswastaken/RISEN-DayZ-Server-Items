class NULLED_SR25_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}				
};

class NULLED_SR25 : NULLED_SR25_Base {};