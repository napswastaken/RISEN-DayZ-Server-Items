class NULLED_Warbelt_Base: Clothing
{
    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo( parent ) )
        {
            return false;
        }
        
        return IsEmpty();
    }
}