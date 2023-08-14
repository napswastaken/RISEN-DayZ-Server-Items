modded class UniversalLight
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if( parent.IsKindOf("NULLED_R700_Base") || parent.IsKindOf("NULLED_SR25_Base") || parent.IsKindOf("Malyuk_Base")|| parent.IsKindOf("Ash_12_Base") ) 	
		{
			return true;
		}		
		return super.CanPutAsAttachment(parent);
	}
};