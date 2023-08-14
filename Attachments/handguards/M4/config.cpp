////////////////////////////////////////////////////////////////////
//DeRap: handguards\M4\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:06 2023 : 'file' last modified on Mon Aug 14 16:30:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Supports_M4
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_RISHndgrd: Inventory_Base
	{
		attachments[] = {"Shield"};
	};
};
class CfgSlots
{
	class Slot_Shield
	{
		name = "Shield";
		displayName = "Shield";
	};
};
