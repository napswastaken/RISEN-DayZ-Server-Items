class DT11_Base : DoubleBarrel_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new B95Recoil(this);
	}
	
};

class DT11 : DT11_Base
{};