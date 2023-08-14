modded class Weapon_Base
{
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        if  ( attachment.IsKindOf("ItemOptics") )
        {            
            if ( FindAttachmentBySlotName("weaponOptics") != NULL || FindAttachmentBySlotName("weaponOpticsAK") != NULL || FindAttachmentBySlotName("weaponOpticsHunting") != NULL )
            {
                return false;
            }    
        }            
        return super.CanReceiveAttachment(attachment, slotId);
    }
}