class Gun_Bag_ColorBase: MountainBag_ColorBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		return IsEmpty();
	}
	
};
