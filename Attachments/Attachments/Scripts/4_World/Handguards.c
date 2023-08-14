class M4_MKIIHndGrd_Black extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("Foregrip")) )
		{
			return false;
		}
		return true;
	}
}

class M4_MK4HndGrd_Black extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("Foregrip")) )
		{
			return false;
		}
		return true;
	}
}

class AK_RS47HndGrd_Black extends Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("Foregrip")) )
		{
			return false;
		}
		return true;
	}
}

