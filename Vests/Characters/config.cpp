////////////////////////////////////////////////////////////////////
//DeRap: Characters\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:52 2023 : 'file' last modified on Mon Aug 14 16:31:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Characters
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class ManAllVehicles{};
	class SurvivorBaseMan
	{
		inventorySlot[] = {"Driver"};
		attachments[] = {"Head","Shoulder","Melee","Headgear","Mask","Eyewear","Hands","LeftHand","Gloves","Armband","Vest","Body","Back","Hips","Legs","Feet"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Shoulder","Slot_Melee","Slot_Vest","Slot_Body","Slot_Hips","Slot_Legs","Slot_Back","Slot_Headgear","Slot_Mask","Slot_Eyewear","Slot_Gloves","Slot_Feet","Slot_Armband"};
		};
	};
};
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[] = {"Shoulder","Melee","Weapon01"};
	};
	class PistolCore;
	class Pistol_Base: PistolCore
	{
		inventorySlot[] = {"Pistol"};
	};
};
